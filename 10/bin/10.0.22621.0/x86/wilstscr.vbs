' Windows Installer script viewer for use with Windows Scripting Host CScript.exe only
' For use with Windows Scripting Host, CScript.exe or WScript.exe
' Copyright (c) Microsoft Corporation. All rights reserved.
' Demonstrates the use of the special database processing mode for viewing script files
'
Option Explicit

Const msiOpenDatabaseModeListScript = 5

' Check arg count, and display help if argument not present or contains ?
Dim argCount:argCount = Wscript.Arguments.Count
If argCount > 0 Then If InStr(1, Wscript.Arguments(0), "?", vbTextCompare) > 0 Then argCount = 0
If argCount = 0 Then
	Wscript.Echo "Windows Installer Script Viewer for Windows Scripting Host (CScript.exe)" &_
		vbNewLine & " Argument is path to installer execution script" &_
		vbNewLine &_
		vbNewLine & "Copyright (C) Microsoft Corporation.  All rights reserved."
	Wscript.Quit 1
End If

' Cannot run with GUI script host, as listing is performed to standard out
If UCase(Mid(Wscript.FullName, Len(Wscript.Path) + 2, 1)) = "W" Then
	Wscript.Echo "Cannot use WScript.exe - must use CScript.exe with this program"
	Wscript.Quit 2
End If

Dim installer, view, database, record, fieldCount, template, index, field
On Error Resume Next
Set installer = CreateObject("WindowsInstaller.Installer") : CheckError
Set database = installer.Opendatabase(Wscript.Arguments(0), msiOpenDatabaseModeListScript) : CheckError
Set view = database.Openview("")
view.Execute : CheckError
Do
   Set record = view.Fetch
   If record Is Nothing Then Exit Do
   fieldCount = record.FieldCount
   template = record.StringData(0)
   index = InstrRev(template, "[") + 1
   If (index > 1) Then
      field = Int(Mid(template, index, InstrRev(template, "]") - index))
      If field < fieldCount Then
         template = Left(template, Len(template) - 1)
         While field < fieldCount
            field = field + 1
            template = template & ",[" & field & "]"
         Wend
         record.StringData(0) = template & ")"
      End If
   End If
   Wscript.Echo record.FormatText
Loop
Wscript.Quit 0

Sub CheckError
	Dim message, errRec
	If Err = 0 Then Exit Sub
	message = Err.Source & " " & Hex(Err) & ": " & Err.Description
	If Not installer Is Nothing Then
		Set errRec = installer.LastErrorRecord
		If Not errRec Is Nothing Then message = message & vbNewLine & errRec.FormatText
	End If
	Wscript.Echo message
	Wscript.Quit 2
End Sub

'' SIG '' Begin signature block
'' SIG '' MIImfwYJKoZIhvcNAQcCoIImcDCCJmwCAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' yGbucx5C9ty0NdJlcwpY0JNDXmCZOM9FQgmr4/kXaQOg
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
'' SIG '' AQQBgjcCARUwLwYJKoZIhvcNAQkEMSIEICM1o7gzYsS+
'' SIG '' pp2C6d0mLCxT/Z30fa3Bp+PDJHTWK6/cMDwGCisGAQQB
'' SIG '' gjcKAxwxLgwsc1BZN3hQQjdoVDVnNUhIcll0OHJETFNN
'' SIG '' OVZ1WlJ1V1phZWYyZTIyUnM1ND0wWgYKKwYBBAGCNwIB
'' SIG '' DDFMMEqgJIAiAE0AaQBjAHIAbwBzAG8AZgB0ACAAVwBp
'' SIG '' AG4AZABvAHcAc6EigCBodHRwOi8vd3d3Lm1pY3Jvc29m
'' SIG '' dC5jb20vd2luZG93czANBgkqhkiG9w0BAQEFAASCAQCC
'' SIG '' sR4xNFrxMtcnhTKyGSkhvkb5OydQKA7XDArFZbTmwL74
'' SIG '' 7jx91PHX2KcZF8CM+UKtopI9+Fz3OH91RqOOZF1LOU6K
'' SIG '' 7TaidUJkvumROU1NNKaKsh1NGeyEfTGn9s0sCqN2GOYq
'' SIG '' xR6sM7CkvNmu1tA1gW/YveEr3bSdRSe7lzXGnhA0We4l
'' SIG '' ZYNOrWVazLFFy5ON8t1bE3UM81i1axxJmGFXWKGdnRYt
'' SIG '' e0zYAUbpelS84a/783iwB+q35Z3mgcNcSt9V1S/EJ6JR
'' SIG '' N5ZVvd0bAOcvYz23VDk4gMIhlPbLxvSB1DchfYBObeAu
'' SIG '' /83a2Xt3nE/oaPSmi03cbnLdbPnaCbdboYIXlDCCF5AG
'' SIG '' CisGAQQBgjcDAwExgheAMIIXfAYJKoZIhvcNAQcCoIIX
'' SIG '' bTCCF2kCAQMxDzANBglghkgBZQMEAgEFADCCAVIGCyqG
'' SIG '' SIb3DQEJEAEEoIIBQQSCAT0wggE5AgEBBgorBgEEAYRZ
'' SIG '' CgMBMDEwDQYJYIZIAWUDBAIBBQAEIPDf+Mz+clWmlSHI
'' SIG '' XLZ7O2C4s9ekCPF3JH7oRM3NZwkVAgZlA/5HkCMYEzIw
'' SIG '' MjMwOTMwMTM0ODMwLjAwOFowBIACAfSggdGkgc4wgcsx
'' SIG '' CzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9u
'' SIG '' MRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy
'' SIG '' b3NvZnQgQ29ycG9yYXRpb24xJTAjBgNVBAsTHE1pY3Jv
'' SIG '' c29mdCBBbWVyaWNhIE9wZXJhdGlvbnMxJzAlBgNVBAsT
'' SIG '' Hm5TaGllbGQgVFNTIEVTTjo4NjAzLTA1RTAtRDk0NzEl
'' SIG '' MCMGA1UEAxMcTWljcm9zb2Z0IFRpbWUtU3RhbXAgU2Vy
'' SIG '' dmljZaCCEeowggcgMIIFCKADAgECAhMzAAAB15sNHlcu
'' SIG '' jFGOAAEAAAHXMA0GCSqGSIb3DQEBCwUAMHwxCzAJBgNV
'' SIG '' BAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYD
'' SIG '' VQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQg
'' SIG '' Q29ycG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBU
'' SIG '' aW1lLVN0YW1wIFBDQSAyMDEwMB4XDTIzMDUyNTE5MTIz
'' SIG '' N1oXDTI0MDIwMTE5MTIzN1owgcsxCzAJBgNVBAYTAlVT
'' SIG '' MRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdS
'' SIG '' ZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9y
'' SIG '' YXRpb24xJTAjBgNVBAsTHE1pY3Jvc29mdCBBbWVyaWNh
'' SIG '' IE9wZXJhdGlvbnMxJzAlBgNVBAsTHm5TaGllbGQgVFNT
'' SIG '' IEVTTjo4NjAzLTA1RTAtRDk0NzElMCMGA1UEAxMcTWlj
'' SIG '' cm9zb2Z0IFRpbWUtU3RhbXAgU2VydmljZTCCAiIwDQYJ
'' SIG '' KoZIhvcNAQEBBQADggIPADCCAgoCggIBAMSsYKQ3Zf9S
'' SIG '' +40Jx+XTJUE2j4sgjLMbsDXRfmRWAaen2zyZ/hpmy6Rm
'' SIG '' 7mu8uzs2po0TFzCc+4chZ2nqSzCNrVjD1LFNf4TSV6r5
'' SIG '' YG5whEpZ1wy6YgMGAsTQRv/f8Fj3lm1PVeyedq0EVmGv
'' SIG '' S4uQOJP0eCtFvXbaybv9iTIyKAWRPQm6iJI9egsvvBpQ
'' SIG '' T214j1A6SiOqNGVwgLhhU1j7ZQgEzlCiso1o53P+yj5M
'' SIG '' gXqbPFfmfLZT+j+IwVVN+/CbhPyD9irHDJ76U6Zr0or3
'' SIG '' y/q/B7+KLvZMxNVbApcV1c7Kw/0aKhxe3fxy4/1zxoTV
'' SIG '' 4fergV0ZOAo53Ssb7GEKCxEXwaotPuTnxWlCcny77KNF
'' SIG '' bouia3lFyuimB/0Qfx7h+gNShTJTlDuI+DA4nFiGgrFG
'' SIG '' MZmW2EOanl7H7pTrO/3mt33vfrrykakKS7QgHjcv8FPM
'' SIG '' xwMBXj/G7pF9xUXBqs3/Imrmp9nIyykfmBxpMJUCi5eR
'' SIG '' BNzwvC1/G2AjPneoxJVH1z2CRKfEzlzW0eCIxfcPYYGd
'' SIG '' Bqf3m3L4J1NgACGOAFNzKP0/s4YQyGveXJpnGOveCmzp
'' SIG '' majjtU5Mjy2xJgeEe0PwGkGiDf0vl7j+UMmD86risawU
'' SIG '' pLExe4hFnUTTx2Zfrtczuqa+bbs7zTgKESZv4I5HxZvj
'' SIG '' owUQTPraO77FAgMBAAGjggFJMIIBRTAdBgNVHQ4EFgQU
'' SIG '' rqfAu/1ZAvc0jEQnI+4kxnowjY0wHwYDVR0jBBgwFoAU
'' SIG '' n6cVXQBeYl2D9OXSZacbUzUZ6XIwXwYDVR0fBFgwVjBU
'' SIG '' oFKgUIZOaHR0cDovL3d3dy5taWNyb3NvZnQuY29tL3Br
'' SIG '' aW9wcy9jcmwvTWljcm9zb2Z0JTIwVGltZS1TdGFtcCUy
'' SIG '' MFBDQSUyMDIwMTAoMSkuY3JsMGwGCCsGAQUFBwEBBGAw
'' SIG '' XjBcBggrBgEFBQcwAoZQaHR0cDovL3d3dy5taWNyb3Nv
'' SIG '' ZnQuY29tL3BraW9wcy9jZXJ0cy9NaWNyb3NvZnQlMjBU
'' SIG '' aW1lLVN0YW1wJTIwUENBJTIwMjAxMCgxKS5jcnQwDAYD
'' SIG '' VR0TAQH/BAIwADAWBgNVHSUBAf8EDDAKBggrBgEFBQcD
'' SIG '' CDAOBgNVHQ8BAf8EBAMCB4AwDQYJKoZIhvcNAQELBQAD
'' SIG '' ggIBAFIF3dQn4iy90wJf4rvGodrlQG1ULUJpdm8dF36y
'' SIG '' 1bSVcD91M2d4JbRMWsGgljn1v1+dtOi49F5qS7aXdflu
'' SIG '' aGxqjoMJFW6pyaFU8BnJJcZ6hV+PnZwsaLJksTDpNDO7
'' SIG '' oP76+M04aZKJs7QoT0Z2/yFARHHlEbQqCtOaTxyR4LVV
'' SIG '' Sq55RAcpUIRKpMNQMPx1dMtYKaboeqZBfr/6AoNJeCDC
'' SIG '' lzvmGLYBspKji26UzBN9cl0Z3CuyIeOTPyfMhb9nc+cy
'' SIG '' AYVTvoq7NgVXRfIf0NNL8M87zpEu1CMDlmVUbKZM99Of
'' SIG '' DuTGiIsk3/KW4wciQdLOlom8KKpf4OfVAZEQSc0hl5F6
'' SIG '' S8ui6uo9EQg5ObVslEnTrlz1hftsnSdo+LHObnLxjYH5
'' SIG '' gggQCLiNSto6HegTtrgm8hbcSDeg2o/uqGl3vEwvGrZa
'' SIG '' cz5T1upZN5PhUKikCFe7a4ZB7F0urttZ1xjDIQUOFLhn
'' SIG '' 03S7DeHpuMHtLgxf3ql9hIRXQwoUY4puZ8JRLtZ6aS4W
'' SIG '' pnLSg0c8/H5x901h5IXpuE48d2yujURV3fNYiR0PUbmQ
'' SIG '' QM+cRC0Vqu0zwf5u/nNSEBQmzyovO4UB0FlAu54P1dl7
'' SIG '' KeNArAR4DPrfEBMgKHy05QzbMyBISFUvwebjlIHp+h6z
'' SIG '' gFMLRjxJlai/chqG2/DIcVtSqzViMIIHcTCCBVmgAwIB
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
'' SIG '' JQYDVQQLEx5uU2hpZWxkIFRTUyBFU046ODYwMy0wNUUw
'' SIG '' LUQ5NDcxJTAjBgNVBAMTHE1pY3Jvc29mdCBUaW1lLVN0
'' SIG '' YW1wIFNlcnZpY2WiIwoBATAHBgUrDgMCGgMVADFb26LM
'' SIG '' beERjz24va675f6Yb+t1oIGDMIGApH4wfDELMAkGA1UE
'' SIG '' BhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNV
'' SIG '' BAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBD
'' SIG '' b3Jwb3JhdGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRp
'' SIG '' bWUtU3RhbXAgUENBIDIwMTAwDQYJKoZIhvcNAQELBQAC
'' SIG '' BQDowkFIMCIYDzIwMjMwOTMwMDY0MDA4WhgPMjAyMzEw
'' SIG '' MDEwNjQwMDhaMHQwOgYKKwYBBAGEWQoEATEsMCowCgIF
'' SIG '' AOjCQUgCAQAwBwIBAAICC+gwBwIBAAICEzwwCgIFAOjD
'' SIG '' ksgCAQAwNgYKKwYBBAGEWQoEAjEoMCYwDAYKKwYBBAGE
'' SIG '' WQoDAqAKMAgCAQACAwehIKEKMAgCAQACAwGGoDANBgkq
'' SIG '' hkiG9w0BAQsFAAOCAQEAAKYM236G+GeCzWicuDWHOgDz
'' SIG '' yWTeiU2WA2uruJ6MO+zgbZi0Tj79H5mbNqKI39ZvBGMr
'' SIG '' +XaqQIVE8CNhbe5MH/OnhsdkVvvcUyvqNnH3aOUDWZ44
'' SIG '' ZH7OVNZD3IgBgAhxXq/RBEtU7gBOFt8+6/b7o2VKQkV4
'' SIG '' yCpYNrJkyMabfNHTGSDjMdkGETtoBE8OADxtYtX+QKIp
'' SIG '' /VS4vTOi7qJ29EQ99pSxQHmZjxhkjJnTmCitQC/aXDzt
'' SIG '' w6qGjjE4A1gA2orPaP+FseZG7V3PweYMy9+glg8NT8Xj
'' SIG '' q9/tYePF8KUNj+7ac4UDA13OmnqWEMcEGZYtdhB0l0Zo
'' SIG '' f75aUBSmETGCBA0wggQJAgEBMIGTMHwxCzAJBgNVBAYT
'' SIG '' AlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQH
'' SIG '' EwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29y
'' SIG '' cG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBUaW1l
'' SIG '' LVN0YW1wIFBDQSAyMDEwAhMzAAAB15sNHlcujFGOAAEA
'' SIG '' AAHXMA0GCWCGSAFlAwQCAQUAoIIBSjAaBgkqhkiG9w0B
'' SIG '' CQMxDQYLKoZIhvcNAQkQAQQwLwYJKoZIhvcNAQkEMSIE
'' SIG '' IFjvrMauO3LQI38ZnaZ1U4nidi6z7ZRJ7T/bHs7CRBZp
'' SIG '' MIH6BgsqhkiG9w0BCRACLzGB6jCB5zCB5DCBvQQgnN4+
'' SIG '' XktefU+Ko2PHxg3tM3VkjR3Vlf/bNF2cj3usmjswgZgw
'' SIG '' gYCkfjB8MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2Fz
'' SIG '' aGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UE
'' SIG '' ChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSYwJAYDVQQD
'' SIG '' Ex1NaWNyb3NvZnQgVGltZS1TdGFtcCBQQ0EgMjAxMAIT
'' SIG '' MwAAAdebDR5XLoxRjgABAAAB1zAiBCACzJHJ10OExys9
'' SIG '' ZTXQAX88pYzF+30bThQtqHiD8LX8nTANBgkqhkiG9w0B
'' SIG '' AQsFAASCAgBi5c8i4ZatRDEo9h2QRfnSHeCZJXgmI0/d
'' SIG '' NqS5ZIZCLAuSMzx7wz3pBkVVuRhx/ZQMfQa+9bAqmCSd
'' SIG '' Sc4mQ+f5V8nJonhfLdwBALUuKS740nWR3bMZGlBtVe++
'' SIG '' ll++Mhx3IimuY3fmki3FSiOt6zdLsk1RrEA5nQiewukB
'' SIG '' SYVV1zJcUqW07tbkzv98pRO7OVUHN/hknwEIElkatYi0
'' SIG '' wzJc/JrhST0JjBH9jT1mAnxWpRfHYbeNhvvdGgEMFQpq
'' SIG '' 5huZqUKjdYkUuD7hRGtAN8SnVZUCV5FCmwL21pcBKZ1F
'' SIG '' WENI+hsQXY3axyXMsqNpJmCYSRQB9vp3pqorfrhCpqSF
'' SIG '' 1LftpRua5DR6UUVf519sHI8YGK49otp/JH3cdq2MmvCx
'' SIG '' 8mdbyc09IJA1CPuRCflOla4zBh+pUqnvsGZcGmagPm/S
'' SIG '' +cPaw+OyG1VTaoFD9tKtOJ4v0JSOjL70pLidynvPAP7L
'' SIG '' VkypjkGbtiQIBSDl/RgkpIi+hv6cxhLnsd94NSxD0Ovq
'' SIG '' I4ydfZFME+cF5/jATqO69sFguBaPi2SQtTgwgDDHA9kN
'' SIG '' kyAAXH7IzRfaGbHkiNpjZ+SAHdwZuFvxILXBNtEKtCLM
'' SIG '' XsO19g5CEXb2a7PF29UsdhgsS6y/0ayIWCZpue4RaZNw
'' SIG '' HJ+1M3K4EmDPji7o9frib5zHjTLKaR9Kyw==
'' SIG '' End signature block