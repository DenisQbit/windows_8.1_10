' Windows Installer utility to generate a transform from two databases
' For use with Windows Scripting Host, CScript.exe or WScript.exe
' Copyright (c) Microsoft Corporation. All rights reserved.
' Demonstrates use of Database.GenerateTransform and MsiDatabaseGenerateTransform
'
Option Explicit

Const msiOpenDatabaseModeReadOnly     = 0
Const msiOpenDatabaseModeTransact     = 1
Const msiOpenDatabaseModeCreate       = 3

If Wscript.Arguments.Count < 2 Then
	Wscript.Echo "Windows Installer database tranform generation utility" &_
		vbNewLine & " 1st argument is the path to the original installer database" &_
		vbNewLine & " 2nd argument is the path to the updated installer database" &_
		vbNewLine & " 3rd argument is the path to the transform file to generate" &_
		vbNewLine & " If the 3rd argument is omitted, the databases are only compared" &_
		vbNewLine &_
		vbNewLine & "Copyright (C) Microsoft Corporation.  All rights reserved."
	Wscript.Quit 1
End If

' Connect to Windows Installer object
On Error Resume Next
Dim installer : Set installer = Nothing
Set installer = Wscript.CreateObject("WindowsInstaller.Installer") : CheckError

' Open databases and generate transform
Dim database1 : Set database1 = installer.OpenDatabase(Wscript.Arguments(0), msiOpenDatabaseModeReadOnly) : CheckError
Dim database2 : Set database2 = installer.OpenDatabase(Wscript.Arguments(1), msiOpenDatabaseModeReadOnly) : CheckError
Dim transform:transform = ""  'Simply compare if no output transform file supplied
If Wscript.Arguments.Count >= 3 Then transform = Wscript.Arguments(2)
Dim different:different = Database2.GenerateTransform(Database1, transform) : CheckError
If Not different Then Wscript.Echo "Databases are identical" Else If transform = Empty Then Wscript.Echo "Databases are different"

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
'' SIG '' MIImEAYJKoZIhvcNAQcCoIImATCCJf0CAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' LEOvI1OL4Ms+i8VD+9Lv0JnljZ8+Z42whrFijf9Ua/Cg
'' SIG '' ggtyMIIE+jCCA+KgAwIBAgITMwAABUN1OCwTdPm9JQAA
'' SIG '' AAAFQzANBgkqhkiG9w0BAQsFADB+MQswCQYDVQQGEwJV
'' SIG '' UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
'' SIG '' UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
'' SIG '' cmF0aW9uMSgwJgYDVQQDEx9NaWNyb3NvZnQgQ29kZSBT
'' SIG '' aWduaW5nIFBDQSAyMDEwMB4XDTIzMDgwODE4MzQyNVoX
'' SIG '' DTI0MDgwNzE4MzQyNVowfzELMAkGA1UEBhMCVVMxEzAR
'' SIG '' BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
'' SIG '' bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlv
'' SIG '' bjEpMCcGA1UEAxMgTWljcm9zb2Z0IFdpbmRvd3MgS2l0
'' SIG '' cyBQdWJsaXNoZXIwggEiMA0GCSqGSIb3DQEBAQUAA4IB
'' SIG '' DwAwggEKAoIBAQCx6rzkeW9LObCUZ5giSL68ejuGdxP6
'' SIG '' +L67KOEDQsg6Szpk1Pl9hq3PSaFuZkeY2hZVBTdaDy9o
'' SIG '' dwpQIsCntOoxPRBWMrYDRKCzrXS2o9izC+GBlC6UN7qF
'' SIG '' 0uahyVaF7eD9K6EvlToEXDUR043BkRnmTuJNvNcRLDBW
'' SIG '' 2KUicG6Jjp45yEwzYlX95jSA0SZpt4WFpS7Nzvzu2yx+
'' SIG '' YWxNm7hFjb5sbw3gSfWymgb/AOX5eY4GFhCOUSuSj4UY
'' SIG '' yJ9I9wXKVOYJUDhU2tVP6hXmKoquHRCPCW403qPhaKD7
'' SIG '' jTn5TSpEhq6UnrhDkCFxmwScbsq1z99v4BSTB9j9wS/D
'' SIG '' Fy5pAgMBAAGjggFuMIIBajAfBgNVHSUEGDAWBgorBgEE
'' SIG '' AYI3CgMUBggrBgEFBQcDAzAdBgNVHQ4EFgQUVuFU7mrG
'' SIG '' 0jRtO2duLIA1FdXJqlUwRQYDVR0RBD4wPKQ6MDgxHjAc
'' SIG '' BgNVBAsTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEWMBQG
'' SIG '' A1UEBRMNMjI5OTAzKzUwMTQxMzAfBgNVHSMEGDAWgBTm
'' SIG '' /F97uyIAWORyTrX0IXQjMubvrDBWBgNVHR8ETzBNMEug
'' SIG '' SaBHhkVodHRwOi8vY3JsLm1pY3Jvc29mdC5jb20vcGtp
'' SIG '' L2NybC9wcm9kdWN0cy9NaWNDb2RTaWdQQ0FfMjAxMC0w
'' SIG '' Ny0wNi5jcmwwWgYIKwYBBQUHAQEETjBMMEoGCCsGAQUF
'' SIG '' BzAChj5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtp
'' SIG '' L2NlcnRzL01pY0NvZFNpZ1BDQV8yMDEwLTA3LTA2LmNy
'' SIG '' dDAMBgNVHRMBAf8EAjAAMA0GCSqGSIb3DQEBCwUAA4IB
'' SIG '' AQCwAplxus4qwbfYCdvxjgN/1QXNAEud2bbOdnPK5yvf
'' SIG '' 5T7Xj/S+056f78ozwwNStH5k/apaja1GY6MCnyKP6iFb
'' SIG '' b8UyF0U+7eIPV+I5tMIw2Ji1oSQZ+96ouATxW2R4Yps4
'' SIG '' D/34XaUSnZ+Qa5R5yy6ZzEtnLa950xl5fvWr/cr16+np
'' SIG '' gTbBUEZRWmM3jRw+lmU0Jz1Wrd4GD8pNrH2Ebj4h219k
'' SIG '' f5Ib+46L09etT++fqFSkFI5JFD1aqXChIVdwLh7gkeZP
'' SIG '' yVzn3n4uswXKwuktvsY2bDbY6YZ7rltTcFg/k6P35tgc
'' SIG '' wb4+bw361nrdO5gCzN7TaVBIzaxH1jAX18tdMIIGcDCC
'' SIG '' BFigAwIBAgIKYQxSTAAAAAAAAzANBgkqhkiG9w0BAQsF
'' SIG '' ADCBiDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hp
'' SIG '' bmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoT
'' SIG '' FU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEyMDAGA1UEAxMp
'' SIG '' TWljcm9zb2Z0IFJvb3QgQ2VydGlmaWNhdGUgQXV0aG9y
'' SIG '' aXR5IDIwMTAwHhcNMTAwNzA2MjA0MDE3WhcNMjUwNzA2
'' SIG '' MjA1MDE3WjB+MQswCQYDVQQGEwJVUzETMBEGA1UECBMK
'' SIG '' V2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwG
'' SIG '' A1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSgwJgYD
'' SIG '' VQQDEx9NaWNyb3NvZnQgQ29kZSBTaWduaW5nIFBDQSAy
'' SIG '' MDEwMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKC
'' SIG '' AQEA6Q5kUHlntcTj/QkATJ6UrPdWaOpE2M/FWE+ppXZ8
'' SIG '' bUW60zmStKQe+fllguQX0o/9RJwI6GWTzixVhL99COMu
'' SIG '' K6hBKxi3oktuSUxrFQfe0dLCiR5xlM21f0u0rwjYzIjW
'' SIG '' axeUOpPOJj/s5v40mFfVHV1J9rIqLtWFu1k/+JC0K4N0
'' SIG '' yiuzO0bj8EZJwRdmVMkcvR3EVWJXcvhnuSUgNN5dpqWV
'' SIG '' XqsogM3Vsp7lA7Vj07IUyMHIiiYKWX8H7P8O7YASNUwS
'' SIG '' pr5SW/Wm2uCLC0h31oVH1RC5xuiq7otqLQVcYMa0Kluc
'' SIG '' IxxfReMaFB5vN8sZM4BqiU2jamZjeJPVMM+VHwIDAQAB
'' SIG '' o4IB4zCCAd8wEAYJKwYBBAGCNxUBBAMCAQAwHQYDVR0O
'' SIG '' BBYEFOb8X3u7IgBY5HJOtfQhdCMy5u+sMBkGCSsGAQQB
'' SIG '' gjcUAgQMHgoAUwB1AGIAQwBBMAsGA1UdDwQEAwIBhjAP
'' SIG '' BgNVHRMBAf8EBTADAQH/MB8GA1UdIwQYMBaAFNX2VsuP
'' SIG '' 6KJcYmjRPZSQW9fOmhjEMFYGA1UdHwRPME0wS6BJoEeG
'' SIG '' RWh0dHA6Ly9jcmwubWljcm9zb2Z0LmNvbS9wa2kvY3Js
'' SIG '' L3Byb2R1Y3RzL01pY1Jvb0NlckF1dF8yMDEwLTA2LTIz
'' SIG '' LmNybDBaBggrBgEFBQcBAQROMEwwSgYIKwYBBQUHMAKG
'' SIG '' Pmh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9wa2kvY2Vy
'' SIG '' dHMvTWljUm9vQ2VyQXV0XzIwMTAtMDYtMjMuY3J0MIGd
'' SIG '' BgNVHSAEgZUwgZIwgY8GCSsGAQQBgjcuAzCBgTA9Bggr
'' SIG '' BgEFBQcCARYxaHR0cDovL3d3dy5taWNyb3NvZnQuY29t
'' SIG '' L1BLSS9kb2NzL0NQUy9kZWZhdWx0Lmh0bTBABggrBgEF
'' SIG '' BQcCAjA0HjIgHQBMAGUAZwBhAGwAXwBQAG8AbABpAGMA
'' SIG '' eQBfAFMAdABhAHQAZQBtAGUAbgB0AC4gHTANBgkqhkiG
'' SIG '' 9w0BAQsFAAOCAgEAGnTvV08pe8QWhXi4UNMi/AmdrIKX
'' SIG '' +DT/KiyXlRLl5L/Pv5PI4zSp24G43B4AvtI1b6/lf3mV
'' SIG '' d+UC1PHr2M1OHhthosJaIxrwjKhiUUVnCOM/PB6T+DCF
'' SIG '' F8g5QKbXDrMhKeWloWmMIpPMdJjnoUdD8lOswA8waX/+
'' SIG '' 0iUgbW9h098H1dlyACxphnY9UdumOUjJN2FtB91TGcun
'' SIG '' 1mHCv+KDqw/ga5uV1n0oUbCJSlGkmmzItx9KGg5pqdfc
'' SIG '' wX7RSXCqtq27ckdjF/qm1qKmhuyoEESbY7ayaYkGx0aG
'' SIG '' ehg/6MUdIdV7+QIjLcVBy78dTMgW77Gcf/wiS0mKbhXj
'' SIG '' pn92W9FTeZGFndXS2z1zNfM8rlSyUkdqwKoTldKOEdqZ
'' SIG '' Z14yjPs3hdHcdYWch8ZaV4XCv90Nj4ybLeu07s8n07Ve
'' SIG '' afqkFgQBpyRnc89NT7beBVaXevfpUk30dwVPhcbYC/GO
'' SIG '' 7UIJ0Q124yNWeCImNr7KsYxuqh3khdpHM2KPpMmRM19x
'' SIG '' HkCvmGXJIuhCISWKHC1g2TeJQYkqFg/XYTyUaGBS79ZH
'' SIG '' maCAQO4VgXc+nOBTGBpQHTiVmx5mMxMnORd4hzbOTsNf
'' SIG '' svU9R1O24OXbC2E9KteSLM43Wj5AQjGkHxAIwlacvyRd
'' SIG '' UQKdannSF9PawZSOB3slcUSrBmrm1MbfI5qWdcUxghn2
'' SIG '' MIIZ8gIBATCBlTB+MQswCQYDVQQGEwJVUzETMBEGA1UE
'' SIG '' CBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEe
'' SIG '' MBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSgw
'' SIG '' JgYDVQQDEx9NaWNyb3NvZnQgQ29kZSBTaWduaW5nIFBD
'' SIG '' QSAyMDEwAhMzAAAFQ3U4LBN0+b0lAAAAAAVDMA0GCWCG
'' SIG '' SAFlAwQCAQUAoIIBBDAZBgkqhkiG9w0BCQMxDAYKKwYB
'' SIG '' BAGCNwIBBDAcBgorBgEEAYI3AgELMQ4wDAYKKwYBBAGC
'' SIG '' NwIBFTAvBgkqhkiG9w0BCQQxIgQggN866NpS7HixjtjP
'' SIG '' 92kpjmQFYaHpBAujo7+KZVwNlocwPAYKKwYBBAGCNwoD
'' SIG '' HDEuDCxzUFk3eFBCN2hUNWc1SEhyWXQ4ckRMU005VnVa
'' SIG '' UnVXWmFlZjJlMjJSczU0PTBaBgorBgEEAYI3AgEMMUww
'' SIG '' SqAkgCIATQBpAGMAcgBvAHMAbwBmAHQAIABXAGkAbgBk
'' SIG '' AG8AdwBzoSKAIGh0dHA6Ly93d3cubWljcm9zb2Z0LmNv
'' SIG '' bS93aW5kb3dzMA0GCSqGSIb3DQEBAQUABIIBAHFl55jR
'' SIG '' Jsbv0OxpYq5yuKyJ3zprsx5d/i/bCwFTGb6RWf1gMNBE
'' SIG '' 5Hn39YelogzHD2PnsVXoNDwkqYtTHokSBdtGmm2b02oX
'' SIG '' 1YflQHp6cj7RFMZN1T2n/0WS2X3IsgXgQe8gIvqzOCyU
'' SIG '' LGRBcjcY7sBiLqiOapUFuGIxWhCZ8G5J7lVK9360Ezhk
'' SIG '' mmYwlP/UPWU6fSMF8TOQIsvXmWgvZzrF70O+djzsTD6I
'' SIG '' m5x3AdH3lI9M/ecBIkzrmg+d+vv7w+LejjDUfy7BPm1n
'' SIG '' l6k4lFWonQx80w0X0FgLb5Jm9aF8TsW+e7aWhfdFgu+E
'' SIG '' 79EFhQE/ahzzsjVBuymHyulLSWihghcpMIIXJQYKKwYB
'' SIG '' BAGCNwMDATGCFxUwghcRBgkqhkiG9w0BBwKgghcCMIIW
'' SIG '' /gIBAzEPMA0GCWCGSAFlAwQCAQUAMIIBWQYLKoZIhvcN
'' SIG '' AQkQAQSgggFIBIIBRDCCAUACAQEGCisGAQQBhFkKAwEw
'' SIG '' MTANBglghkgBZQMEAgEFAAQgvME8C/OaQqHjtX4xDt5T
'' SIG '' 7uJ1P5SFLzbwxRYJaH9EldACBmULqjiVfhgTMjAyMzA5
'' SIG '' MzAxMDE0MTkuOTg5WjAEgAIB9KCB2KSB1TCB0jELMAkG
'' SIG '' A1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAO
'' SIG '' BgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29m
'' SIG '' dCBDb3Jwb3JhdGlvbjEtMCsGA1UECxMkTWljcm9zb2Z0
'' SIG '' IElyZWxhbmQgT3BlcmF0aW9ucyBMaW1pdGVkMSYwJAYD
'' SIG '' VQQLEx1UaGFsZXMgVFNTIEVTTjpEMDgyLTRCRkQtRUVC
'' SIG '' QTElMCMGA1UEAxMcTWljcm9zb2Z0IFRpbWUtU3RhbXAg
'' SIG '' U2VydmljZaCCEXgwggcnMIIFD6ADAgECAhMzAAABuh8/
'' SIG '' GffBdb18AAEAAAG6MA0GCSqGSIb3DQEBCwUAMHwxCzAJ
'' SIG '' BgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAw
'' SIG '' DgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3Nv
'' SIG '' ZnQgQ29ycG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29m
'' SIG '' dCBUaW1lLVN0YW1wIFBDQSAyMDEwMB4XDTIyMDkyMDIw
'' SIG '' MjIxOVoXDTIzMTIxNDIwMjIxOVowgdIxCzAJBgNVBAYT
'' SIG '' AlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQH
'' SIG '' EwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29y
'' SIG '' cG9yYXRpb24xLTArBgNVBAsTJE1pY3Jvc29mdCBJcmVs
'' SIG '' YW5kIE9wZXJhdGlvbnMgTGltaXRlZDEmMCQGA1UECxMd
'' SIG '' VGhhbGVzIFRTUyBFU046RDA4Mi00QkZELUVFQkExJTAj
'' SIG '' BgNVBAMTHE1pY3Jvc29mdCBUaW1lLVN0YW1wIFNlcnZp
'' SIG '' Y2UwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoIC
'' SIG '' AQCIThWDM5I1gBPVFZ1xfYURr9MQUcXPiOR7t4cVRV8i
'' SIG '' t7t/MbrBG9KS5MI4BrQ7Giy265TMal97RW/9wYBDxAty
'' SIG '' 9MF++oA/Mx7fsIgVeZquQVqKdvaka4DCSigj3KUJ0o7P
'' SIG '' Qf+FzBRb66XT4nGQ7+NxS4M/Xx6jKtCyQ8OSQBxg0t9E
'' SIG '' wmPTheNz+HeOGfZROwmlUtqSTBdy+OdzFwecmCvyg24p
'' SIG '' YRET9Y8Z9spfrRgkYLiALDBtKHjoV2sPLkhjoUugAkh2
'' SIG '' /nm4tNN/DBR8qEzYSn/kmKODqUmN8T+PrMAQUyg6GD9c
'' SIG '' B/gn8RuofX8pgSUD0GWqn5dK4ogy45g7p0LR9Rg+uAIq
'' SIG '' +ZPSXcIaucC5kll48hVS/iA3zqXYsSen+aPjIROh+Ld9
'' SIG '' cPqa8oB5ndlB0Oue1BsehTbs8AvkqQB5le+jGWGnOLgI
'' SIG '' U4Gj+Oz9nnktaHJL8oZfcmvvScz3zJLoN8Xr8xQA1oi0
'' SIG '' TK9OuhDFe6tyUkQLJwkvRkNPAuBSj20ofDjzN9y54NH3
'' SIG '' 8QDZxwAF/wxO3B3Me5fY2ldwHJpI+6Koq+BIdruWMcIm
'' SIG '' kxN+12jLpl9hEtzyeTQWl6u2HSycMkg/lPaZP7ZeHUNb
'' SIG '' fxHqO7g05YjskJA/CO+MaVQdE99f+uyh35AZBVb8usMn
'' SIG '' ttVfvSAvLkg/vkYA90cLTdpBPwIDAQABo4IBSTCCAUUw
'' SIG '' HQYDVR0OBBYEFIpi5vEDHiWtuY/TFnmmyNh0r2TlMB8G
'' SIG '' A1UdIwQYMBaAFJ+nFV0AXmJdg/Tl0mWnG1M1GelyMF8G
'' SIG '' A1UdHwRYMFYwVKBSoFCGTmh0dHA6Ly93d3cubWljcm9z
'' SIG '' b2Z0LmNvbS9wa2lvcHMvY3JsL01pY3Jvc29mdCUyMFRp
'' SIG '' bWUtU3RhbXAlMjBQQ0ElMjAyMDEwKDEpLmNybDBsBggr
'' SIG '' BgEFBQcBAQRgMF4wXAYIKwYBBQUHMAKGUGh0dHA6Ly93
'' SIG '' d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvY2VydHMvTWlj
'' SIG '' cm9zb2Z0JTIwVGltZS1TdGFtcCUyMFBDQSUyMDIwMTAo
'' SIG '' MSkuY3J0MAwGA1UdEwEB/wQCMAAwFgYDVR0lAQH/BAww
'' SIG '' CgYIKwYBBQUHAwgwDgYDVR0PAQH/BAQDAgeAMA0GCSqG
'' SIG '' SIb3DQEBCwUAA4ICAQBfyPFOoW2Ybw3J/ep2erZG0hI1
'' SIG '' z7ymesK6Gl3ILLRIaYGnhMJXi7j1xy8xFrbibmM+HrIZ
'' SIG '' oV6ha+PZWwHF+Ujef3BLD9MXRWsm+1OT/eCWXdx4xb6V
'' SIG '' kTaDQYRd0gzNAN/LCNh/oY4Qf1X19V3GYnotUTjwMgh3
'' SIG '' AYBy8kKxLupp29x4WyHa/IdE2u1hcpRoS0hVusJsyrrD
'' SIG '' +mjpZpxkmnOTTH5WupUb02B3dvK22woH0ptUYU4KGY/l
'' SIG '' vA0yrYhDMLmxyd5iDypqPMbSSFlz516ulyoJXay+XMpy
'' SIG '' zF/9Fl+uTrlmx1eRkxC3X1rxldw2maxz1EP1D99Snqm9
'' SIG '' sY1Qm99C1cIG4yL2Eu+zdXQEZDfBf/aSdYDuCL2VjMMj
'' SIG '' JSihRqIztX9cG40lnAP+e7bHPrdm5azFoEjR4Mw69NY2
'' SIG '' z0rqUY8tx7fWWbOMTdNnol93htveza7QupeHP4M59tHq
'' SIG '' qKlsf7h1sZk4AdBeaLAbkxznu+w8hANLoQKxpYCj/dY4
'' SIG '' IYLfzlR6B+uYNEKgrYGft+ppwhIOiDoRaBawnNHyRRlZ
'' SIG '' m9fte4BHvh0TDO4wZODtOifiKKBayN3tzyYz60Gp6PzM
'' SIG '' hN4fswLgVhjA0XFJTSgg1O3Rp1rx911sC6wgiHM/txsE
'' SIG '' VDLC7A3T1tjlb+79XhCYjEiGdj/jOy9tEPGs51ODgDCC
'' SIG '' B3EwggVZoAMCAQICEzMAAAAVxedrngKbSZkAAAAAABUw
'' SIG '' DQYJKoZIhvcNAQELBQAwgYgxCzAJBgNVBAYTAlVTMRMw
'' SIG '' EQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRt
'' SIG '' b25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRp
'' SIG '' b24xMjAwBgNVBAMTKU1pY3Jvc29mdCBSb290IENlcnRp
'' SIG '' ZmljYXRlIEF1dGhvcml0eSAyMDEwMB4XDTIxMDkzMDE4
'' SIG '' MjIyNVoXDTMwMDkzMDE4MzIyNVowfDELMAkGA1UEBhMC
'' SIG '' VVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcT
'' SIG '' B1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jw
'' SIG '' b3JhdGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRpbWUt
'' SIG '' U3RhbXAgUENBIDIwMTAwggIiMA0GCSqGSIb3DQEBAQUA
'' SIG '' A4ICDwAwggIKAoICAQDk4aZM57RyIQt5osvXJHm9DtWC
'' SIG '' 0/3unAcH0qlsTnXIyjVX9gF/bErg4r25PhdgM/9cT8dm
'' SIG '' 95VTcVrifkpa/rg2Z4VGIwy1jRPPdzLAEBjoYH1qUoNE
'' SIG '' t6aORmsHFPPFdvWGUNzBRMhxXFExN6AKOG6N7dcP2CZT
'' SIG '' fDlhAnrEqv1yaa8dq6z2Nr41JmTamDu6GnszrYBbfowQ
'' SIG '' HJ1S/rboYiXcag/PXfT+jlPP1uyFVk3v3byNpOORj7I5
'' SIG '' LFGc6XBpDco2LXCOMcg1KL3jtIckw+DJj361VI/c+gVV
'' SIG '' mG1oO5pGve2krnopN6zL64NF50ZuyjLVwIYwXE8s4mKy
'' SIG '' zbnijYjklqwBSru+cakXW2dg3viSkR4dPf0gz3N9QZpG
'' SIG '' dc3EXzTdEonW/aUgfX782Z5F37ZyL9t9X4C626p+Nuw2
'' SIG '' TPYrbqgSUei/BQOj0XOmTTd0lBw0gg/wEPK3Rxjtp+iZ
'' SIG '' fD9M269ewvPV2HM9Q07BMzlMjgK8QmguEOqEUUbi0b1q
'' SIG '' GFphAXPKZ6Je1yh2AuIzGHLXpyDwwvoSCtdjbwzJNmSL
'' SIG '' W6CmgyFdXzB0kZSU2LlQ+QuJYfM2BjUYhEfb3BvR/bLU
'' SIG '' HMVr9lxSUV0S2yW6r1AFemzFER1y7435UsSFF5PAPBXb
'' SIG '' GjfHCBUYP3irRbb1Hode2o+eFnJpxq57t7c+auIurQID
'' SIG '' AQABo4IB3TCCAdkwEgYJKwYBBAGCNxUBBAUCAwEAATAj
'' SIG '' BgkrBgEEAYI3FQIEFgQUKqdS/mTEmr6CkTxGNSnPEP8v
'' SIG '' BO4wHQYDVR0OBBYEFJ+nFV0AXmJdg/Tl0mWnG1M1Gely
'' SIG '' MFwGA1UdIARVMFMwUQYMKwYBBAGCN0yDfQEBMEEwPwYI
'' SIG '' KwYBBQUHAgEWM2h0dHA6Ly93d3cubWljcm9zb2Z0LmNv
'' SIG '' bS9wa2lvcHMvRG9jcy9SZXBvc2l0b3J5Lmh0bTATBgNV
'' SIG '' HSUEDDAKBggrBgEFBQcDCDAZBgkrBgEEAYI3FAIEDB4K
'' SIG '' AFMAdQBiAEMAQTALBgNVHQ8EBAMCAYYwDwYDVR0TAQH/
'' SIG '' BAUwAwEB/zAfBgNVHSMEGDAWgBTV9lbLj+iiXGJo0T2U
'' SIG '' kFvXzpoYxDBWBgNVHR8ETzBNMEugSaBHhkVodHRwOi8v
'' SIG '' Y3JsLm1pY3Jvc29mdC5jb20vcGtpL2NybC9wcm9kdWN0
'' SIG '' cy9NaWNSb29DZXJBdXRfMjAxMC0wNi0yMy5jcmwwWgYI
'' SIG '' KwYBBQUHAQEETjBMMEoGCCsGAQUFBzAChj5odHRwOi8v
'' SIG '' d3d3Lm1pY3Jvc29mdC5jb20vcGtpL2NlcnRzL01pY1Jv
'' SIG '' b0NlckF1dF8yMDEwLTA2LTIzLmNydDANBgkqhkiG9w0B
'' SIG '' AQsFAAOCAgEAnVV9/Cqt4SwfZwExJFvhnnJL/Klv6lwU
'' SIG '' tj5OR2R4sQaTlz0xM7U518JxNj/aZGx80HU5bbsPMeTC
'' SIG '' j/ts0aGUGCLu6WZnOlNN3Zi6th542DYunKmCVgADsAW+
'' SIG '' iehp4LoJ7nvfam++Kctu2D9IdQHZGN5tggz1bSNU5HhT
'' SIG '' dSRXud2f8449xvNo32X2pFaq95W2KFUn0CS9QKC/GbYS
'' SIG '' EhFdPSfgQJY4rPf5KYnDvBewVIVCs/wMnosZiefwC2qB
'' SIG '' woEZQhlSdYo2wh3DYXMuLGt7bj8sCXgU6ZGyqVvfSaN0
'' SIG '' DLzskYDSPeZKPmY7T7uG+jIa2Zb0j/aRAfbOxnT99kxy
'' SIG '' bxCrdTDFNLB62FD+CljdQDzHVG2dY3RILLFORy3BFARx
'' SIG '' v2T5JL5zbcqOCb2zAVdJVGTZc9d/HltEAY5aGZFrDZ+k
'' SIG '' KNxnGSgkujhLmm77IVRrakURR6nxt67I6IleT53S0Ex2
'' SIG '' tVdUCbFpAUR+fKFhbHP+CrvsQWY9af3LwUFJfn6Tvsv4
'' SIG '' O+S3Fb+0zj6lMVGEvL8CwYKiexcdFYmNcP7ntdAoGokL
'' SIG '' jzbaukz5m/8K6TT4JDVnK+ANuOaMmdbhIurwJ0I9JZTm
'' SIG '' dHRbatGePu1+oDEzfbzL6Xu/OHBE0ZDxyKs6ijoIYn/Z
'' SIG '' cGNTTY3ugm2lBRDBcQZqELQdVTNYs6FwZvKhggLUMIIC
'' SIG '' PQIBATCCAQChgdikgdUwgdIxCzAJBgNVBAYTAlVTMRMw
'' SIG '' EQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRt
'' SIG '' b25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRp
'' SIG '' b24xLTArBgNVBAsTJE1pY3Jvc29mdCBJcmVsYW5kIE9w
'' SIG '' ZXJhdGlvbnMgTGltaXRlZDEmMCQGA1UECxMdVGhhbGVz
'' SIG '' IFRTUyBFU046RDA4Mi00QkZELUVFQkExJTAjBgNVBAMT
'' SIG '' HE1pY3Jvc29mdCBUaW1lLVN0YW1wIFNlcnZpY2WiIwoB
'' SIG '' ATAHBgUrDgMCGgMVAHajR3tdd4AifO2mSBmuUAVKiMLy
'' SIG '' oIGDMIGApH4wfDELMAkGA1UEBhMCVVMxEzARBgNVBAgT
'' SIG '' Cldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAc
'' SIG '' BgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQG
'' SIG '' A1UEAxMdTWljcm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIw
'' SIG '' MTAwDQYJKoZIhvcNAQEFBQACBQDowVztMCIYDzIwMjMw
'' SIG '' OTI5MjIyNTQ5WhgPMjAyMzA5MzAyMjI1NDlaMHQwOgYK
'' SIG '' KwYBBAGEWQoEATEsMCowCgIFAOjBXO0CAQAwBwIBAAIC
'' SIG '' AmQwBwIBAAICEaYwCgIFAOjCrm0CAQAwNgYKKwYBBAGE
'' SIG '' WQoEAjEoMCYwDAYKKwYBBAGEWQoDAqAKMAgCAQACAweh
'' SIG '' IKEKMAgCAQACAwGGoDANBgkqhkiG9w0BAQUFAAOBgQBa
'' SIG '' pQ1PYPVC51zkd+6Gj/JwnHrvL5X8iLpEsBkPR935d/OH
'' SIG '' xlj2LAUuXVE3OZPUzuKKT989b+qjBzlajGPkzjHlNurg
'' SIG '' xOeTpjd6PUcFB5TrKJB4dSeJVZMveK/WHkzFvGLEhelb
'' SIG '' vsEWqfdooUl/eo+ZKsW9FYrMice7Ms56CqRQVzGCBA0w
'' SIG '' ggQJAgEBMIGTMHwxCzAJBgNVBAYTAlVTMRMwEQYDVQQI
'' SIG '' EwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4w
'' SIG '' HAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xJjAk
'' SIG '' BgNVBAMTHU1pY3Jvc29mdCBUaW1lLVN0YW1wIFBDQSAy
'' SIG '' MDEwAhMzAAABuh8/GffBdb18AAEAAAG6MA0GCWCGSAFl
'' SIG '' AwQCAQUAoIIBSjAaBgkqhkiG9w0BCQMxDQYLKoZIhvcN
'' SIG '' AQkQAQQwLwYJKoZIhvcNAQkEMSIEIAUXp81ALV5V5eGa
'' SIG '' 60udUSLsSSFEiXdkZwsph8YbWqS3MIH6BgsqhkiG9w0B
'' SIG '' CRACLzGB6jCB5zCB5DCBvQQgKVW9PDNucPrWBlrJpRra
'' SIG '' dYMtZz3Kln6oDBd55VmFcwUwgZgwgYCkfjB8MQswCQYD
'' SIG '' VQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4G
'' SIG '' A1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0
'' SIG '' IENvcnBvcmF0aW9uMSYwJAYDVQQDEx1NaWNyb3NvZnQg
'' SIG '' VGltZS1TdGFtcCBQQ0EgMjAxMAITMwAAAbofPxn3wXW9
'' SIG '' fAABAAABujAiBCDJEqCbReGezBw0ar6aEpa22sUGTczU
'' SIG '' +DZTI4Z1PhhmgTANBgkqhkiG9w0BAQsFAASCAgAvLpsl
'' SIG '' CWsM2ElrJzYtLT1wSKwH/Qf1bt4glL+a7xOqpXHQDxTj
'' SIG '' JZ35W5hOprujZHis39UktHZ3Uanl8aUgbQvbsQjNbAHu
'' SIG '' BFZHUw1SfByTKY/AQGVnhHB0MKtTdbpaG8vrg+KeYYFF
'' SIG '' bFpnb5PmBWOUy/qWeRav+H2kl1XcJ+bAYbXSYG4qUXOQ
'' SIG '' gVvrXxJDk2ljVwL/BGPYrkos19KMfZF7Oc6OhB99d34E
'' SIG '' cbxfrY1/845OdqWongY1DvGgzXgKS9Tm2N9gGzT/y4Eb
'' SIG '' VrK35oeKXFnvQoeR/hwXZPDnyCHcIDcrWTmhYPGpWM/c
'' SIG '' zy2z+qNIz1MYV5ytagmq1pGEqSIhFhAynzZzNffKl0PK
'' SIG '' K7IDHuVwmwYpq2nmB6nCewVZMEvjyTmIB0pxQKsR1H7G
'' SIG '' jmCx77g4LTeH2IQMrk+ZzDBKNv47ZipEf6FEW4tLBbwD
'' SIG '' BHcefDsBHIGIPa+XDISVyyP3h/Fr1N2XB8H6F4LxaehP
'' SIG '' schdgiNO93OfN0hTKQ4tdc50Z6+y7ssjRsNPAwQUmLi+
'' SIG '' IgLZFKBVuRJuRBEcTHJ9Zyiqrku9MFmGI32YpsC/tXGT
'' SIG '' q6aZ5YJogCg88fB2iU+We59NFq+cHNvOdodDecKZ8QH9
'' SIG '' Lft3mfrTioVbqISUE3KmSgAycj67shDqsAr7tfQ1u7Lm
'' SIG '' jGX90imxCq0+bgOK2g==
'' SIG '' End signature block