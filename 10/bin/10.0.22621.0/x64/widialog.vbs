' Windows Installer utility to preview dialogs from a install database
' For use with Windows Scripting Host, CScript.exe or WScript.exe
' Copyright (c) Microsoft Corporation. All rights reserved.
' Demonstrates the use of preview APIs
'
Option Explicit

Const msiOpenDatabaseModeReadOnly = 0

' Show help if no arguments or if argument contains ?
Dim argCount : argCount = Wscript.Arguments.Count
If argCount > 0 Then If InStr(1, Wscript.Arguments(0), "?", vbTextCompare) > 0 Then argCount = 0
If argCount = 0 Then
	Wscript.Echo "Windows Installer utility to preview dialogs from an install database." &_
		vbLf & " The 1st argument is the path to an install database, relative or complete path" &_
		vbLf & " Subsequent arguments are dialogs to display (primary key of Dialog table)" &_
		vbLf & " To show a billboard, append the Control name (Control table key) and Billboard" &_
		vbLf & "       name (Billboard table key) to the Dialog name, separated with colons." &_
		vbLf & " If no dialogs specified, all dialogs in Dialog table are displayed sequentially" &_
		vbLf & " Note: The name of the dialog, if provided,  is case-sensitive" &_
		vblf &_
		vblf & "Copyright (C) Microsoft Corporation.  All rights reserved."
	Wscript.Quit 1
End If

' Connect to Windows Installer object
On Error Resume Next
Dim installer : Set installer = Nothing
Set installer = Wscript.CreateObject("WindowsInstaller.Installer") : CheckError

' Open database
Dim databasePath : databasePath = Wscript.Arguments(0)
Dim database : Set database = installer.OpenDatabase(databasePath, msiOpenDatabaseModeReadOnly) : CheckError

' Create preview object
Dim preview : Set preview = Database.EnableUIpreview : CheckError

' Get properties from Property table and put into preview object
Dim record, view : Set view = database.OpenView("SELECT `Property`,`Value` FROM `Property`") : CheckError
view.Execute : CheckError
Do
	Set record = view.Fetch : CheckError
	If record Is Nothing Then Exit Do
	preview.Property(record.StringData(1)) = record.StringData(2) : CheckError
Loop

' Loop through list of dialog names and display each one
If argCount = 1 Then ' No dialog name, loop through all dialogs
	Set view = database.OpenView("SELECT `Dialog` FROM `Dialog`") : CheckError
	view.Execute : CheckError
	Do
		Set record = view.Fetch : CheckError
		If record Is Nothing Then Exit Do
		preview.ViewDialog(record.StringData(1)) : CheckError
		Wait
	Loop
Else ' explicit dialog names supplied
	Set view = database.OpenView("SELECT `Dialog` FROM `Dialog` WHERE `Dialog`=?") : CheckError
	Dim paramRecord, argNum, argArray, dialogName, controlName, billboardName
	Set paramRecord = installer.CreateRecord(1)
	For argNum = 1 To argCount-1
		dialogName = Wscript.Arguments(argNum)
		argArray = Split(dialogName,":",-1,vbTextCompare)
		If UBound(argArray) <> 0 Then  ' billboard to add to dialog
			If UBound(argArray) <> 2 Then Fail "Incorrect billboard syntax, must specify 3 values"
			dialogName    = argArray(0)
			controlName   = argArray(1) ' we could validate that controlName is in the Control table
			billboardName = argArray(2) ' we could validate that billboard is in the Billboard table
		End If
		paramRecord.StringData(1) = dialogName
		view.Execute paramRecord : CheckError
		If view.Fetch Is Nothing Then Fail "Dialog not found: " & dialogName
		preview.ViewDialog(dialogName) : CheckError
		If UBound(argArray) = 2 Then preview.ViewBillboard controlName, billboardName : CheckError
		Wait
	Next
End If
preview.ViewDialog ""  ' clear dialog, must do this to release object deadlock

' Wait until user input to clear dialog. Too bad there's no function to wait for keyboard input
Sub Wait
	Dim shell : Set shell = Wscript.CreateObject("Wscript.Shell")
	MsgBox "Next",0,"Drag me away"
End Sub

Sub CheckError
	Dim message, errRec
	If Err = 0 Then Exit Sub
	message = Err.Source & " " & Hex(Err) & ": " & Err.Description
	If Not installer Is Nothing Then
		Set errRec = installer.LastErrorRecord
		If Not errRec Is Nothing Then message = message & vbLf & errRec.FormatText
	End If
	Fail message
End Sub

Sub Fail(message)
	Wscript.Echo message
	Wscript.Quit 2
End Sub

'' SIG '' Begin signature block
'' SIG '' MIImfwYJKoZIhvcNAQcCoIImcDCCJmwCAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' mOr7DzNLA7B3kQygPHKkFo0lJ4ImjipM2G/ZKh4w1cKg
'' SIG '' ggt2MIIE/jCCA+agAwIBAgITMwAABP5ZyrfmKqUiwQAA
'' SIG '' AAAE/jANBgkqhkiG9w0BAQsFADB+MQswCQYDVQQGEwJV
'' SIG '' UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
'' SIG '' UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
'' SIG '' cmF0aW9uMSgwJgYDVQQDEx9NaWNyb3NvZnQgQ29kZSBT
'' SIG '' aWduaW5nIFBDQSAyMDEwMB4XDTIzMDIxNjIwMTEwOVoX
'' SIG '' DTI0MDEzMTIwMTEwOVowdDELMAkGA1UEBhMCVVMxEzAR
'' SIG '' BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
'' SIG '' bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlv
'' SIG '' bjEeMBwGA1UEAxMVTWljcm9zb2Z0IENvcnBvcmF0aW9u
'' SIG '' MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA
'' SIG '' z3f7xCys04gd0YOCNV0ne5cF0lBv/2JHBY9tq3TcTFD0
'' SIG '' vhKbavNE5YR9N8bSBMq22FfukubOwgmOgo4XWtn6CTnM
'' SIG '' lWsjyjq0MmGaMPCmyCgy/0BGn2a/rG18t+HPJxsHioKl
'' SIG '' 41XwsiRbke8LUZGk1fpooi87E3Ackx1Pi83W+GPuQRGL
'' SIG '' XTCcAiJCGPZF08ggB5t/9cfRgC1qblD0R8jgbA0HAoTh
'' SIG '' p73rSgVWITkZ/GNy2/9gZ8EE/liFXUJarBfMoVcD4Hse
'' SIG '' 6hHx6Imp614Qvlh/tQG2g9G6onLXnkSWERsRnQeWAdQZ
'' SIG '' sNtVt9Yl6f4a8wpyvJpR1QlAwu+JUjTSLwIDAQABo4IB
'' SIG '' fTCCAXkwHwYDVR0lBBgwFgYKKwYBBAGCNz0GAQYIKwYB
'' SIG '' BQUHAwMwHQYDVR0OBBYEFL0GxbHi+uJ81vGc16kH8ISx
'' SIG '' 7qA4MFQGA1UdEQRNMEukSTBHMS0wKwYDVQQLEyRNaWNy
'' SIG '' b3NvZnQgSXJlbGFuZCBPcGVyYXRpb25zIExpbWl0ZWQx
'' SIG '' FjAUBgNVBAUTDTIzMDg2NSs1MDAyMzMwHwYDVR0jBBgw
'' SIG '' FoAU5vxfe7siAFjkck619CF0IzLm76wwVgYDVR0fBE8w
'' SIG '' TTBLoEmgR4ZFaHR0cDovL2NybC5taWNyb3NvZnQuY29t
'' SIG '' L3BraS9jcmwvcHJvZHVjdHMvTWljQ29kU2lnUENBXzIw
'' SIG '' MTAtMDctMDYuY3JsMFoGCCsGAQUFBwEBBE4wTDBKBggr
'' SIG '' BgEFBQcwAoY+aHR0cDovL3d3dy5taWNyb3NvZnQuY29t
'' SIG '' L3BraS9jZXJ0cy9NaWNDb2RTaWdQQ0FfMjAxMC0wNy0w
'' SIG '' Ni5jcnQwDAYDVR0TAQH/BAIwADANBgkqhkiG9w0BAQsF
'' SIG '' AAOCAQEAAiqCfEyn5tk7Q32rie2d/w/FVI3KSuCdt80y
'' SIG '' oJW/S+kGg3iq/h3vaQ+2IO+Dw5loWSnDXHkEnuQRXAyo
'' SIG '' ylqphbvOaoyJA2+c56gLVcqtssQUuMhsjId3mPE6W6gU
'' SIG '' WlxHCPcwSjJv47Pk7zknr9uBJOcu665WTiD16mYz0nMe
'' SIG '' j86lvbQtxhZ8yXhOk2kyJwysZTM0QjEcRYEklNayF4/T
'' SIG '' XrtwHskCnpnYUP+8OW1vnrZGgY03a+78iJ5j5WJs37E+
'' SIG '' aDswD0d1Fk37i5OViDP7wI3lrclE7DauMebF/5s4X7tv
'' SIG '' 6li62T0iHPcynxwbUz48OILfGmlOgM4XXF2n81hanjCC
'' SIG '' BnAwggRYoAMCAQICCmEMUkwAAAAAAAMwDQYJKoZIhvcN
'' SIG '' AQELBQAwgYgxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpX
'' SIG '' YXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYD
'' SIG '' VQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xMjAwBgNV
'' SIG '' BAMTKU1pY3Jvc29mdCBSb290IENlcnRpZmljYXRlIEF1
'' SIG '' dGhvcml0eSAyMDEwMB4XDTEwMDcwNjIwNDAxN1oXDTI1
'' SIG '' MDcwNjIwNTAxN1owfjELMAkGA1UEBhMCVVMxEzARBgNV
'' SIG '' BAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQx
'' SIG '' HjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEo
'' SIG '' MCYGA1UEAxMfTWljcm9zb2Z0IENvZGUgU2lnbmluZyBQ
'' SIG '' Q0EgMjAxMDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCC
'' SIG '' AQoCggEBAOkOZFB5Z7XE4/0JAEyelKz3VmjqRNjPxVhP
'' SIG '' qaV2fG1FutM5krSkHvn5ZYLkF9KP/UScCOhlk84sVYS/
'' SIG '' fQjjLiuoQSsYt6JLbklMaxUH3tHSwokecZTNtX9LtK8I
'' SIG '' 2MyI1msXlDqTziY/7Ob+NJhX1R1dSfayKi7VhbtZP/iQ
'' SIG '' tCuDdMorsztG4/BGScEXZlTJHL0dxFViV3L4Z7klIDTe
'' SIG '' XaallV6rKIDN1bKe5QO1Y9OyFMjByIomCll/B+z/Du2A
'' SIG '' EjVMEqa+Ulv1ptrgiwtId9aFR9UQucboqu6Lai0FXGDG
'' SIG '' tCpbnCMcX0XjGhQebzfLGTOAaolNo2pmY3iT1TDPlR8C
'' SIG '' AwEAAaOCAeMwggHfMBAGCSsGAQQBgjcVAQQDAgEAMB0G
'' SIG '' A1UdDgQWBBTm/F97uyIAWORyTrX0IXQjMubvrDAZBgkr
'' SIG '' BgEEAYI3FAIEDB4KAFMAdQBiAEMAQTALBgNVHQ8EBAMC
'' SIG '' AYYwDwYDVR0TAQH/BAUwAwEB/zAfBgNVHSMEGDAWgBTV
'' SIG '' 9lbLj+iiXGJo0T2UkFvXzpoYxDBWBgNVHR8ETzBNMEug
'' SIG '' SaBHhkVodHRwOi8vY3JsLm1pY3Jvc29mdC5jb20vcGtp
'' SIG '' L2NybC9wcm9kdWN0cy9NaWNSb29DZXJBdXRfMjAxMC0w
'' SIG '' Ni0yMy5jcmwwWgYIKwYBBQUHAQEETjBMMEoGCCsGAQUF
'' SIG '' BzAChj5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtp
'' SIG '' L2NlcnRzL01pY1Jvb0NlckF1dF8yMDEwLTA2LTIzLmNy
'' SIG '' dDCBnQYDVR0gBIGVMIGSMIGPBgkrBgEEAYI3LgMwgYEw
'' SIG '' PQYIKwYBBQUHAgEWMWh0dHA6Ly93d3cubWljcm9zb2Z0
'' SIG '' LmNvbS9QS0kvZG9jcy9DUFMvZGVmYXVsdC5odG0wQAYI
'' SIG '' KwYBBQUHAgIwNB4yIB0ATABlAGcAYQBsAF8AUABvAGwA
'' SIG '' aQBjAHkAXwBTAHQAYQB0AGUAbQBlAG4AdAAuIB0wDQYJ
'' SIG '' KoZIhvcNAQELBQADggIBABp071dPKXvEFoV4uFDTIvwJ
'' SIG '' nayCl/g0/yosl5US5eS/z7+TyOM0qduBuNweAL7SNW+v
'' SIG '' 5X95lXflAtTx69jNTh4bYaLCWiMa8IyoYlFFZwjjPzwe
'' SIG '' k/gwhRfIOUCm1w6zISnlpaFpjCKTzHSY56FHQ/JTrMAP
'' SIG '' MGl//tIlIG1vYdPfB9XZcgAsaYZ2PVHbpjlIyTdhbQfd
'' SIG '' UxnLp9Zhwr/ig6sP4GubldZ9KFGwiUpRpJpsyLcfShoO
'' SIG '' aanX3MF+0Ulwqratu3JHYxf6ptaipobsqBBEm2O2smmJ
'' SIG '' BsdGhnoYP+jFHSHVe/kCIy3FQcu/HUzIFu+xnH/8IktJ
'' SIG '' im4V46Z/dlvRU3mRhZ3V0ts9czXzPK5UslJHasCqE5XS
'' SIG '' jhHamWdeMoz7N4XR3HWFnIfGWleFwr/dDY+Mmy3rtO7P
'' SIG '' J9O1Xmn6pBYEAackZ3PPTU+23gVWl3r36VJN9HcFT4XG
'' SIG '' 2Avxju1CCdENduMjVngiJja+yrGMbqod5IXaRzNij6TJ
'' SIG '' kTNfcR5Ar5hlySLoQiElihwtYNk3iUGJKhYP12E8lGhg
'' SIG '' Uu/WR5mggEDuFYF3PpzgUxgaUB04lZseZjMTJzkXeIc2
'' SIG '' zk7DX7L1PUdTtuDl2wthPSrXkizON1o+QEIxpB8QCMJW
'' SIG '' nL8kXVECnWp50hfT2sGUjgd7JXFEqwZq5tTG3yOalnXF
'' SIG '' MYIaYTCCGl0CAQEwgZUwfjELMAkGA1UEBhMCVVMxEzAR
'' SIG '' BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
'' SIG '' bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlv
'' SIG '' bjEoMCYGA1UEAxMfTWljcm9zb2Z0IENvZGUgU2lnbmlu
'' SIG '' ZyBQQ0EgMjAxMAITMwAABP5ZyrfmKqUiwQAAAAAE/jAN
'' SIG '' BglghkgBZQMEAgEFAKCCAQQwGQYJKoZIhvcNAQkDMQwG
'' SIG '' CisGAQQBgjcCAQQwHAYKKwYBBAGCNwIBCzEOMAwGCisG
'' SIG '' AQQBgjcCARUwLwYJKoZIhvcNAQkEMSIEIEBA3MbSnbhN
'' SIG '' Q3UvxkNEqfdFY2jDJIQq8JrkL272eOC6MDwGCisGAQQB
'' SIG '' gjcKAxwxLgwsc1BZN3hQQjdoVDVnNUhIcll0OHJETFNN
'' SIG '' OVZ1WlJ1V1phZWYyZTIyUnM1ND0wWgYKKwYBBAGCNwIB
'' SIG '' DDFMMEqgJIAiAE0AaQBjAHIAbwBzAG8AZgB0ACAAVwBp
'' SIG '' AG4AZABvAHcAc6EigCBodHRwOi8vd3d3Lm1pY3Jvc29m
'' SIG '' dC5jb20vd2luZG93czANBgkqhkiG9w0BAQEFAASCAQAB
'' SIG '' 7+0XM1RTQd+7fImyJSzDqSzEL1qnc1mWVsq1CP6mgmR3
'' SIG '' xH5n5N213RU+6QksMZqrdmiqtxLJzLKSpV+kNM4SK8QL
'' SIG '' Zj1LzV1x0IhCH/k9AYbfKlOQmv8UQmLSCe6lmUWSFfye
'' SIG '' 2dvHUw5r1LrP1vc2+pod8Yy4+V8kP7Exm0IIRJlxf/t3
'' SIG '' R5KzIhSEwYuX7UFV/9kDFi3CtoKPx6xbN2a7mU5SNjqa
'' SIG '' ZxBVjVhCu3Z+6cnuzO1AkvP4R3bEoGK/BpPfrHniGi4v
'' SIG '' VTn2MoMjE0FMcmNAMqGLZUZBrp80bdSqhDMAPyps6Qb4
'' SIG '' jHIOP9iFWTW/vZDbo7D8K61U+8T45h7xoYIXlDCCF5AG
'' SIG '' CisGAQQBgjcDAwExgheAMIIXfAYJKoZIhvcNAQcCoIIX
'' SIG '' bTCCF2kCAQMxDzANBglghkgBZQMEAgEFADCCAVIGCyqG
'' SIG '' SIb3DQEJEAEEoIIBQQSCAT0wggE5AgEBBgorBgEEAYRZ
'' SIG '' CgMBMDEwDQYJYIZIAWUDBAIBBQAEINO4Pua/fDlZAl+8
'' SIG '' SzL+jVmOtMKWV+ghWl+yUKpklj3YAgZlA+8CklIYEzIw
'' SIG '' MjMwOTMwMDkyMDE4LjM4NlowBIACAfSggdGkgc4wgcsx
'' SIG '' CzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9u
'' SIG '' MRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy
'' SIG '' b3NvZnQgQ29ycG9yYXRpb24xJTAjBgNVBAsTHE1pY3Jv
'' SIG '' c29mdCBBbWVyaWNhIE9wZXJhdGlvbnMxJzAlBgNVBAsT
'' SIG '' Hm5TaGllbGQgVFNTIEVTTjpBMDAwLTA1RTAtRDk0NzEl
'' SIG '' MCMGA1UEAxMcTWljcm9zb2Z0IFRpbWUtU3RhbXAgU2Vy
'' SIG '' dmljZaCCEeowggcgMIIFCKADAgECAhMzAAAB0HcIqu+j
'' SIG '' F8bdAAEAAAHQMA0GCSqGSIb3DQEBCwUAMHwxCzAJBgNV
'' SIG '' BAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYD
'' SIG '' VQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQg
'' SIG '' Q29ycG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBU
'' SIG '' aW1lLVN0YW1wIFBDQSAyMDEwMB4XDTIzMDUyNTE5MTIx
'' SIG '' NFoXDTI0MDIwMTE5MTIxNFowgcsxCzAJBgNVBAYTAlVT
'' SIG '' MRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdS
'' SIG '' ZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9y
'' SIG '' YXRpb24xJTAjBgNVBAsTHE1pY3Jvc29mdCBBbWVyaWNh
'' SIG '' IE9wZXJhdGlvbnMxJzAlBgNVBAsTHm5TaGllbGQgVFNT
'' SIG '' IEVTTjpBMDAwLTA1RTAtRDk0NzElMCMGA1UEAxMcTWlj
'' SIG '' cm9zb2Z0IFRpbWUtU3RhbXAgU2VydmljZTCCAiIwDQYJ
'' SIG '' KoZIhvcNAQEBBQADggIPADCCAgoCggIBAN8yV+ffl+8z
'' SIG '' RcBRKYjmqIbRTE+LbkeRLIGDOTfOlg7fXV3U4QQXPRCk
'' SIG '' ArbezV0kWuMHmAP5IzDnPoTDELgKtdT0ppDhY0eoeuFZ
'' SIG '' +2mCjcyQl7H1+uY70yV1R+NQbnqwhbphUXpiNf72tPUk
'' SIG '' N0IMdujmdmJqwyKAYprAZvYeoPv+SNFHrtG9WHtDidq0
'' SIG '' BW7jpl/kwu+JHTE3lw0bbTHAHCC21pgSTleVQtoEfk6d
'' SIG '' fPZ5agjH5KMM7sG3kG4AFZjxK+ZFB8HJPZymkTNOO39+
'' SIG '' zTGngHVwAdUPCUbBm6/1F9zed13GAWsoDwxYdskXT5pZ
'' SIG '' RRggFHwXLaC4VUegd47N7sixvK9GtrH//zeBiqjxzln/
'' SIG '' X+7uSMtxOCKmLJnxcRGwsQQInmjHUEEtjoCOZuADMN02
'' SIG '' XYt56P6oht0Gv9JS8oQL5fDjGMUw5NRVYpZ6a3aSHCd1
'' SIG '' R8E1Hs3O7XP0vRa/tMBj+/6/qk2EB6iE8wIUlz5qTq4w
'' SIG '' PxMpLNYWPDloAOSYP2Ya4LzrK9IqQgjgxrLOhR2x5PSd
'' SIG '' +TxjR8+O13DZad6OXrMse5hfBwNq7Y7UMy6iJ501WNMX
'' SIG '' ftQSZhP6jEL84VdQY8MRC323OBtH2Dwcu1R8R5Y6w4QP
'' SIG '' nGBvmvDJ+8iyzsf9x0cVwiIhzPNCBiewvIQZ6mhkOQqF
'' SIG '' IxHl4IHopy/9AgMBAAGjggFJMIIBRTAdBgNVHQ4EFgQU
'' SIG '' M+EBhZLSgD6U60hN+Mm3KXSSdFEwHwYDVR0jBBgwFoAU
'' SIG '' n6cVXQBeYl2D9OXSZacbUzUZ6XIwXwYDVR0fBFgwVjBU
'' SIG '' oFKgUIZOaHR0cDovL3d3dy5taWNyb3NvZnQuY29tL3Br
'' SIG '' aW9wcy9jcmwvTWljcm9zb2Z0JTIwVGltZS1TdGFtcCUy
'' SIG '' MFBDQSUyMDIwMTAoMSkuY3JsMGwGCCsGAQUFBwEBBGAw
'' SIG '' XjBcBggrBgEFBQcwAoZQaHR0cDovL3d3dy5taWNyb3Nv
'' SIG '' ZnQuY29tL3BraW9wcy9jZXJ0cy9NaWNyb3NvZnQlMjBU
'' SIG '' aW1lLVN0YW1wJTIwUENBJTIwMjAxMCgxKS5jcnQwDAYD
'' SIG '' VR0TAQH/BAIwADAWBgNVHSUBAf8EDDAKBggrBgEFBQcD
'' SIG '' CDAOBgNVHQ8BAf8EBAMCB4AwDQYJKoZIhvcNAQELBQAD
'' SIG '' ggIBAJeH5yQKRloDTpI1b6rG1L2AdCnjHsb6B2KSeAoi
'' SIG '' 0Svyi2RciuZY9itqtFYGVj3WWoaKKUfIiVneI0FRto0S
'' SIG '' ZooAYxnlhxLshlQo9qrWNTSazKX7yiDS30L9nbr5q3He
'' SIG '' +yEesVC5KDBMdlWnO/uTwJicFijF2EjW4aGofn3maou+
'' SIG '' 0yzEQ3/WyjtT5vdTosKvLm7DBzPn6Pw6PQZRfdv6JmD4
'' SIG '' CzTFM3pPRBrwE15z8vBzKpg0RoyRbZUAquaG9Yfw4INN
'' SIG '' xeA42ecAFAcF9cr98sBscUZLVc062vrb+JocEYCSsIaX
'' SIG '' oGLw9/Czp+z7D6wT2veFf1WDSCxEygdG4xqJeysaYay5
'' SIG '' icufcDBOC4xq3D1HxTm8m1ZKW7UIU7k/QsS9BCIxnXax
'' SIG '' BKxACQ0NOz2tONU2OMhSChnpc8zGVw8gNyPHDxt95vjL
'' SIG '' jADEzZFGhZzGmTH7ogh/Yv5vuAse0HFcJYnlsxbtbBQL
'' SIG '' YuW1u6tTAG/RKCOkO1sSrD+4OBYF6sJP5m3Lc1z3ruIZ
'' SIG '' pCPJhAfof+H1dzyyabafpWPJJHHazCdbeGvpDHrdT/Fj
'' SIG '' 0cvoU2GsaIUQPtlEqufC+9e8xVBQgSQHsZQR43qF5jyA
'' SIG '' cu3SMtXfLMOJADxHynlgaAYBW30wTCAAk1jWIe8f/y/O
'' SIG '' ElJkU2Qfyy9HO07+LdO8quNvxnHCMIIHcTCCBVmgAwIB
'' SIG '' AgITMwAAABXF52ueAptJmQAAAAAAFTANBgkqhkiG9w0B
'' SIG '' AQsFADCBiDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldh
'' SIG '' c2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNV
'' SIG '' BAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEyMDAGA1UE
'' SIG '' AxMpTWljcm9zb2Z0IFJvb3QgQ2VydGlmaWNhdGUgQXV0
'' SIG '' aG9yaXR5IDIwMTAwHhcNMjEwOTMwMTgyMjI1WhcNMzAw
'' SIG '' OTMwMTgzMjI1WjB8MQswCQYDVQQGEwJVUzETMBEGA1UE
'' SIG '' CBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEe
'' SIG '' MBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSYw
'' SIG '' JAYDVQQDEx1NaWNyb3NvZnQgVGltZS1TdGFtcCBQQ0Eg
'' SIG '' MjAxMDCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoC
'' SIG '' ggIBAOThpkzntHIhC3miy9ckeb0O1YLT/e6cBwfSqWxO
'' SIG '' dcjKNVf2AX9sSuDivbk+F2Az/1xPx2b3lVNxWuJ+Slr+
'' SIG '' uDZnhUYjDLWNE893MsAQGOhgfWpSg0S3po5GawcU88V2
'' SIG '' 9YZQ3MFEyHFcUTE3oAo4bo3t1w/YJlN8OWECesSq/XJp
'' SIG '' rx2rrPY2vjUmZNqYO7oaezOtgFt+jBAcnVL+tuhiJdxq
'' SIG '' D89d9P6OU8/W7IVWTe/dvI2k45GPsjksUZzpcGkNyjYt
'' SIG '' cI4xyDUoveO0hyTD4MmPfrVUj9z6BVWYbWg7mka97aSu
'' SIG '' eik3rMvrg0XnRm7KMtXAhjBcTyziYrLNueKNiOSWrAFK
'' SIG '' u75xqRdbZ2De+JKRHh09/SDPc31BmkZ1zcRfNN0Sidb9
'' SIG '' pSB9fvzZnkXftnIv231fgLrbqn427DZM9ituqBJR6L8F
'' SIG '' A6PRc6ZNN3SUHDSCD/AQ8rdHGO2n6Jl8P0zbr17C89XY
'' SIG '' cz1DTsEzOUyOArxCaC4Q6oRRRuLRvWoYWmEBc8pnol7X
'' SIG '' KHYC4jMYctenIPDC+hIK12NvDMk2ZItboKaDIV1fMHSR
'' SIG '' lJTYuVD5C4lh8zYGNRiER9vcG9H9stQcxWv2XFJRXRLb
'' SIG '' JbqvUAV6bMURHXLvjflSxIUXk8A8FdsaN8cIFRg/eKtF
'' SIG '' tvUeh17aj54WcmnGrnu3tz5q4i6tAgMBAAGjggHdMIIB
'' SIG '' 2TASBgkrBgEEAYI3FQEEBQIDAQABMCMGCSsGAQQBgjcV
'' SIG '' AgQWBBQqp1L+ZMSavoKRPEY1Kc8Q/y8E7jAdBgNVHQ4E
'' SIG '' FgQUn6cVXQBeYl2D9OXSZacbUzUZ6XIwXAYDVR0gBFUw
'' SIG '' UzBRBgwrBgEEAYI3TIN9AQEwQTA/BggrBgEFBQcCARYz
'' SIG '' aHR0cDovL3d3dy5taWNyb3NvZnQuY29tL3BraW9wcy9E
'' SIG '' b2NzL1JlcG9zaXRvcnkuaHRtMBMGA1UdJQQMMAoGCCsG
'' SIG '' AQUFBwMIMBkGCSsGAQQBgjcUAgQMHgoAUwB1AGIAQwBB
'' SIG '' MAsGA1UdDwQEAwIBhjAPBgNVHRMBAf8EBTADAQH/MB8G
'' SIG '' A1UdIwQYMBaAFNX2VsuP6KJcYmjRPZSQW9fOmhjEMFYG
'' SIG '' A1UdHwRPME0wS6BJoEeGRWh0dHA6Ly9jcmwubWljcm9z
'' SIG '' b2Z0LmNvbS9wa2kvY3JsL3Byb2R1Y3RzL01pY1Jvb0Nl
'' SIG '' ckF1dF8yMDEwLTA2LTIzLmNybDBaBggrBgEFBQcBAQRO
'' SIG '' MEwwSgYIKwYBBQUHMAKGPmh0dHA6Ly93d3cubWljcm9z
'' SIG '' b2Z0LmNvbS9wa2kvY2VydHMvTWljUm9vQ2VyQXV0XzIw
'' SIG '' MTAtMDYtMjMuY3J0MA0GCSqGSIb3DQEBCwUAA4ICAQCd
'' SIG '' VX38Kq3hLB9nATEkW+Geckv8qW/qXBS2Pk5HZHixBpOX
'' SIG '' PTEztTnXwnE2P9pkbHzQdTltuw8x5MKP+2zRoZQYIu7p
'' SIG '' Zmc6U03dmLq2HnjYNi6cqYJWAAOwBb6J6Gngugnue99q
'' SIG '' b74py27YP0h1AdkY3m2CDPVtI1TkeFN1JFe53Z/zjj3G
'' SIG '' 82jfZfakVqr3lbYoVSfQJL1AoL8ZthISEV09J+BAljis
'' SIG '' 9/kpicO8F7BUhUKz/AyeixmJ5/ALaoHCgRlCGVJ1ijbC
'' SIG '' HcNhcy4sa3tuPywJeBTpkbKpW99Jo3QMvOyRgNI95ko+
'' SIG '' ZjtPu4b6MhrZlvSP9pEB9s7GdP32THJvEKt1MMU0sHrY
'' SIG '' UP4KWN1APMdUbZ1jdEgssU5HLcEUBHG/ZPkkvnNtyo4J
'' SIG '' vbMBV0lUZNlz138eW0QBjloZkWsNn6Qo3GcZKCS6OEua
'' SIG '' bvshVGtqRRFHqfG3rsjoiV5PndLQTHa1V1QJsWkBRH58
'' SIG '' oWFsc/4Ku+xBZj1p/cvBQUl+fpO+y/g75LcVv7TOPqUx
'' SIG '' UYS8vwLBgqJ7Fx0ViY1w/ue10CgaiQuPNtq6TPmb/wrp
'' SIG '' NPgkNWcr4A245oyZ1uEi6vAnQj0llOZ0dFtq0Z4+7X6g
'' SIG '' MTN9vMvpe784cETRkPHIqzqKOghif9lwY1NNje6CbaUF
'' SIG '' EMFxBmoQtB1VM1izoXBm8qGCA00wggI1AgEBMIH5oYHR
'' SIG '' pIHOMIHLMQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2Fz
'' SIG '' aGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UE
'' SIG '' ChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSUwIwYDVQQL
'' SIG '' ExxNaWNyb3NvZnQgQW1lcmljYSBPcGVyYXRpb25zMScw
'' SIG '' JQYDVQQLEx5uU2hpZWxkIFRTUyBFU046QTAwMC0wNUUw
'' SIG '' LUQ5NDcxJTAjBgNVBAMTHE1pY3Jvc29mdCBUaW1lLVN0
'' SIG '' YW1wIFNlcnZpY2WiIwoBATAHBgUrDgMCGgMVALy3yFPw
'' SIG '' opRf3WVTkWpE/0J+70yJoIGDMIGApH4wfDELMAkGA1UE
'' SIG '' BhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNV
'' SIG '' BAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBD
'' SIG '' b3Jwb3JhdGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRp
'' SIG '' bWUtU3RhbXAgUENBIDIwMTAwDQYJKoZIhvcNAQELBQAC
'' SIG '' BQDowjI4MCIYDzIwMjMwOTMwMDUzNTUyWhgPMjAyMzEw
'' SIG '' MDEwNTM1NTJaMHQwOgYKKwYBBAGEWQoEATEsMCowCgIF
'' SIG '' AOjCMjgCAQAwBwIBAAICDRYwBwIBAAICEe0wCgIFAOjD
'' SIG '' g7gCAQAwNgYKKwYBBAGEWQoEAjEoMCYwDAYKKwYBBAGE
'' SIG '' WQoDAqAKMAgCAQACAwehIKEKMAgCAQACAwGGoDANBgkq
'' SIG '' hkiG9w0BAQsFAAOCAQEAc9tBG7v+gMRcWRxt4iYUYfxb
'' SIG '' L2xBNne1uDJXmVV6UnTegjREuTOBO9IeTu4SSpqTF6WJ
'' SIG '' N5LobKI3ewBFXeoYnJkCqE+aVsbWhbNh15yd5DliS2m2
'' SIG '' NxV3iBlJE3/+DQZh/nzjxkTE4Q7nKEIBIfceSyX7qnNj
'' SIG '' Zl2vEFhGZ9pEO7SucVBaVetp8FlfuNu9FJsGI5tylQ7r
'' SIG '' rJXEuNQtxZPMEA3BUfscjLX9vk+7APpokySCNIsRBNvs
'' SIG '' yFohdYXEUZp4Momo6YAkY54LzADlWNGlgvkM2sGuEvjk
'' SIG '' Lo37clp772Mn7W3ypLknkll7LvFp1wqgrM3C8R7aI5tC
'' SIG '' Hf7h46qXPjGCBA0wggQJAgEBMIGTMHwxCzAJBgNVBAYT
'' SIG '' AlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQH
'' SIG '' EwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29y
'' SIG '' cG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBUaW1l
'' SIG '' LVN0YW1wIFBDQSAyMDEwAhMzAAAB0HcIqu+jF8bdAAEA
'' SIG '' AAHQMA0GCWCGSAFlAwQCAQUAoIIBSjAaBgkqhkiG9w0B
'' SIG '' CQMxDQYLKoZIhvcNAQkQAQQwLwYJKoZIhvcNAQkEMSIE
'' SIG '' IE0TXB3st3ualNk+ERMMDqTLjvBr7Qvqo87F4bs5lwJL
'' SIG '' MIH6BgsqhkiG9w0BCRACLzGB6jCB5zCB5DCBvQQgCJVA
'' SIG '' Bl+00/8x3UTZjD58Fdr3Dp+OZNnlYB6utNI/CdcwgZgw
'' SIG '' gYCkfjB8MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2Fz
'' SIG '' aGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UE
'' SIG '' ChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSYwJAYDVQQD
'' SIG '' Ex1NaWNyb3NvZnQgVGltZS1TdGFtcCBQQ0EgMjAxMAIT
'' SIG '' MwAAAdB3CKrvoxfG3QABAAAB0DAiBCAHlGq5F9V76+Ia
'' SIG '' /6bQPgabhomPN6pMNCxvktl3QbskrDANBgkqhkiG9w0B
'' SIG '' AQsFAASCAgCsuucojCmrVcvnm3oGUHVsk4XV8FuAm4V6
'' SIG '' jvqYdSezHhZKKLJrpNJ7jBQgcsMSDurA/X1OlqHsENrH
'' SIG '' ITvBibkso9+/mxYCHrOX99YBcwL0OraG4Wjbq+24tjtK
'' SIG '' wj21zcH6YmSOWhbODUOzrRzNb6XjdYVxiVSwL/o1wXPq
'' SIG '' 9TgAWgNsXKAEpkTqK3iyltmCna4LgBHh7QyoCbbBaLyv
'' SIG '' JzMsGaet4N8mw2N8coalahWWL5cvtjV3JtEngcXZfD2q
'' SIG '' DaD5YIC0vnttKi3FgQyN/RO4v/OFFJDWtT+UVHhcb1r6
'' SIG '' tVu+pkHvv3401AWSh/ubAc2EGytiN8Jse7ldb0Ngpkq6
'' SIG '' 486Mw9GZjlgUbDZKMSM3Yn255Uml3f0ls1eEprdfL8RP
'' SIG '' bL5X97ggk1ZY7mx80qLesc448MsdYXvRbt0j92LwJI8W
'' SIG '' LIXPEmpxxovB1hv030W79BnSXpXMdeHnNbSAeA2aQWEh
'' SIG '' kJ2y8oj9MzzrmJOzcyY2IBdIH+son6yaFfwwkB9SeCBo
'' SIG '' ML2i339U4CRCfNRA58QFPpevT+Gq4kf7NXBUfieBhAfp
'' SIG '' Po1BXIdqY7GpScscri5xQGDzAqboJIzPNIsuV3G6TdmD
'' SIG '' MNjFmf03S5HE+NPuk5eJ36Mx5yPxvLoXv9fbO7J6ygYv
'' SIG '' RNjRu0PbAcatO5C2TQlfTxb0L/rhBsyc9A==
'' SIG '' End signature block