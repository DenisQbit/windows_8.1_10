# Copyright (C) Microsoft Corporation. All rights reserved.
#
# Module manifest for module 'ProvisioningTestModule'
#

@{

# Version number of this module.
ModuleVersion = '1.0'

# ID used to uniquely identify this module
GUID = '05218365-87aa-4f63-80d3-2f5af78231a0'

# Author of this module
Author = 'Microsoft'

# Company or vendor of this module
CompanyName = 'Microsoft Corporation'

# Copyright statement for this module
Copyright = 'Copyright (C) Microsoft Corporation. All rights reserved.'

# Modules to import as nested modules of the module specified in RootModule/ModuleToProcess
NestedModules = @('ProvisioningTestHelper.dll')

# Functions to export from this module
FunctionsToExport = @('Install-TestEVCert', 'ConvertTo-SignedXml', 'Test-SignedXml', 'Install-RootCertFromFile')

}



# SIG # Begin signature block
# MIIl+QYJKoZIhvcNAQcCoIIl6jCCJeYCAQExDzANBglghkgBZQMEAgEFADB5Bgor
# BgEEAYI3AgEEoGswaTA0BgorBgEEAYI3AgEeMCYCAwEAAAQQH8w7YFlLCE63JNLG
# KX7zUQIBAAIBAAIBAAIBAAIBADAxMA0GCWCGSAFlAwQCAQUABCBdRENz7HwBWl79
# TY9Bi7C9LuskbStNom+zvJCohxQKEKCCC3YwggT+MIID5qADAgECAhMzAAAEOnXl
# L54LKZgeAAAAAAQ6MA0GCSqGSIb3DQEBCwUAMH4xCzAJBgNVBAYTAlVTMRMwEQYD
# VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy
# b3NvZnQgQ29ycG9yYXRpb24xKDAmBgNVBAMTH01pY3Jvc29mdCBDb2RlIFNpZ25p
# bmcgUENBIDIwMTAwHhcNMjEwOTAyMTgyNTU5WhcNMjIwOTAxMTgyNTU5WjB0MQsw
# CQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9u
# ZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMR4wHAYDVQQDExVNaWNy
# b3NvZnQgQ29ycG9yYXRpb24wggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIB
# AQCY3ZRqR2tCWlzzYBfCE+xMH9h9GCeu04bOvwI1CsmGgdlQ1B5fbCPJ8pV/VDm6
# z4AcpCyzFY9IjHTLvvQ/cWDJ9xurqK/7x2d+LjTUoNne2hvDs0ZPLhmRRPE9F23b
# w10OqgRQYk0OxDbQTWywWuMRc0VQ/RzoxwFZqISKEauTYExug0yD92+EWxzaP7BZ
# 72OEyl8pgCZQZhgWae0LjPTJ1WSqWYYgtt9ufFPDgo1C5c48+bIoXY0/Ata8xrpH
# 3EH3xDCjvML0c54l5sxNCLNvFvlZ1bXGfxrEXvQz4yQryw6Pzfl8w7C28tJeH4P6
# DCj23HctVLUY4IvBD6S96sP9AgMBAAGjggF9MIIBeTAfBgNVHSUEGDAWBgorBgEE
# AYI3PQYBBggrBgEFBQcDAzAdBgNVHQ4EFgQUT6htXeJskyl+QI1fDZCM77mf3Ssw
# VAYDVR0RBE0wS6RJMEcxLTArBgNVBAsTJE1pY3Jvc29mdCBJcmVsYW5kIE9wZXJh
# dGlvbnMgTGltaXRlZDEWMBQGA1UEBRMNMjMwODY1KzQ2NzM5OTAfBgNVHSMEGDAW
# gBTm/F97uyIAWORyTrX0IXQjMubvrDBWBgNVHR8ETzBNMEugSaBHhkVodHRwOi8v
# Y3JsLm1pY3Jvc29mdC5jb20vcGtpL2NybC9wcm9kdWN0cy9NaWNDb2RTaWdQQ0Ff
# MjAxMC0wNy0wNi5jcmwwWgYIKwYBBQUHAQEETjBMMEoGCCsGAQUFBzAChj5odHRw
# Oi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpL2NlcnRzL01pY0NvZFNpZ1BDQV8yMDEw
# LTA3LTA2LmNydDAMBgNVHRMBAf8EAjAAMA0GCSqGSIb3DQEBCwUAA4IBAQBZbJS5
# 9zc0vbkPcmCYIph5c1ew/OKA/n3lTKQnchxnFw7MPLy2lG9q79wbdZ63EjiCF/8K
# B/XWBx6dAAk4P1yUjOeNCIJ6j9cNjEQ0xbw56uJkB16lV6q90OWmCj0319qJ0xw6
# tia0rR5c9y0NS0w91S86ztLC6O/ws+w2303OCmUNH0Bsbfs+YIwdvjgFimIcSqMf
# wpwszhSa/FXu8/wUvL+EAAE+ztz08rXM58/04/GIJ9a90mPE9fcrZDrOxOf53b+t
# jBebeOx7ncKvfvc6q2uT+uhjICZNOBMrXiYVD4i50HxUKBd9TaclXq5t3Pg6TIWN
# v0YXWqWodTiZ9KEQMIIGcDCCBFigAwIBAgIKYQxSTAAAAAAAAzANBgkqhkiG9w0B
# AQsFADCBiDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNV
# BAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEyMDAG
# A1UEAxMpTWljcm9zb2Z0IFJvb3QgQ2VydGlmaWNhdGUgQXV0aG9yaXR5IDIwMTAw
# HhcNMTAwNzA2MjA0MDE3WhcNMjUwNzA2MjA1MDE3WjB+MQswCQYDVQQGEwJVUzET
# MBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMV
# TWljcm9zb2Z0IENvcnBvcmF0aW9uMSgwJgYDVQQDEx9NaWNyb3NvZnQgQ29kZSBT
# aWduaW5nIFBDQSAyMDEwMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA
# 6Q5kUHlntcTj/QkATJ6UrPdWaOpE2M/FWE+ppXZ8bUW60zmStKQe+fllguQX0o/9
# RJwI6GWTzixVhL99COMuK6hBKxi3oktuSUxrFQfe0dLCiR5xlM21f0u0rwjYzIjW
# axeUOpPOJj/s5v40mFfVHV1J9rIqLtWFu1k/+JC0K4N0yiuzO0bj8EZJwRdmVMkc
# vR3EVWJXcvhnuSUgNN5dpqWVXqsogM3Vsp7lA7Vj07IUyMHIiiYKWX8H7P8O7YAS
# NUwSpr5SW/Wm2uCLC0h31oVH1RC5xuiq7otqLQVcYMa0KlucIxxfReMaFB5vN8sZ
# M4BqiU2jamZjeJPVMM+VHwIDAQABo4IB4zCCAd8wEAYJKwYBBAGCNxUBBAMCAQAw
# HQYDVR0OBBYEFOb8X3u7IgBY5HJOtfQhdCMy5u+sMBkGCSsGAQQBgjcUAgQMHgoA
# UwB1AGIAQwBBMAsGA1UdDwQEAwIBhjAPBgNVHRMBAf8EBTADAQH/MB8GA1UdIwQY
# MBaAFNX2VsuP6KJcYmjRPZSQW9fOmhjEMFYGA1UdHwRPME0wS6BJoEeGRWh0dHA6
# Ly9jcmwubWljcm9zb2Z0LmNvbS9wa2kvY3JsL3Byb2R1Y3RzL01pY1Jvb0NlckF1
# dF8yMDEwLTA2LTIzLmNybDBaBggrBgEFBQcBAQROMEwwSgYIKwYBBQUHMAKGPmh0
# dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9wa2kvY2VydHMvTWljUm9vQ2VyQXV0XzIw
# MTAtMDYtMjMuY3J0MIGdBgNVHSAEgZUwgZIwgY8GCSsGAQQBgjcuAzCBgTA9Bggr
# BgEFBQcCARYxaHR0cDovL3d3dy5taWNyb3NvZnQuY29tL1BLSS9kb2NzL0NQUy9k
# ZWZhdWx0Lmh0bTBABggrBgEFBQcCAjA0HjIgHQBMAGUAZwBhAGwAXwBQAG8AbABp
# AGMAeQBfAFMAdABhAHQAZQBtAGUAbgB0AC4gHTANBgkqhkiG9w0BAQsFAAOCAgEA
# GnTvV08pe8QWhXi4UNMi/AmdrIKX+DT/KiyXlRLl5L/Pv5PI4zSp24G43B4AvtI1
# b6/lf3mVd+UC1PHr2M1OHhthosJaIxrwjKhiUUVnCOM/PB6T+DCFF8g5QKbXDrMh
# KeWloWmMIpPMdJjnoUdD8lOswA8waX/+0iUgbW9h098H1dlyACxphnY9UdumOUjJ
# N2FtB91TGcun1mHCv+KDqw/ga5uV1n0oUbCJSlGkmmzItx9KGg5pqdfcwX7RSXCq
# tq27ckdjF/qm1qKmhuyoEESbY7ayaYkGx0aGehg/6MUdIdV7+QIjLcVBy78dTMgW
# 77Gcf/wiS0mKbhXjpn92W9FTeZGFndXS2z1zNfM8rlSyUkdqwKoTldKOEdqZZ14y
# jPs3hdHcdYWch8ZaV4XCv90Nj4ybLeu07s8n07VeafqkFgQBpyRnc89NT7beBVaX
# evfpUk30dwVPhcbYC/GO7UIJ0Q124yNWeCImNr7KsYxuqh3khdpHM2KPpMmRM19x
# HkCvmGXJIuhCISWKHC1g2TeJQYkqFg/XYTyUaGBS79ZHmaCAQO4VgXc+nOBTGBpQ
# HTiVmx5mMxMnORd4hzbOTsNfsvU9R1O24OXbC2E9KteSLM43Wj5AQjGkHxAIwlac
# vyRdUQKdannSF9PawZSOB3slcUSrBmrm1MbfI5qWdcUxghnZMIIZ1QIBATCBlTB+
# MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVk
# bW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSgwJgYDVQQDEx9N
# aWNyb3NvZnQgQ29kZSBTaWduaW5nIFBDQSAyMDEwAhMzAAAEOnXlL54LKZgeAAAA
# AAQ6MA0GCWCGSAFlAwQCAQUAoIIBBDAZBgkqhkiG9w0BCQMxDAYKKwYBBAGCNwIB
# BDAcBgorBgEEAYI3AgELMQ4wDAYKKwYBBAGCNwIBFTAvBgkqhkiG9w0BCQQxIgQg
# GJGcBzIxmDl83WR5AW7ibdwlL2NyI7Ndau2erNk0JuUwPAYKKwYBBAGCNwoDHDEu
# DCxYOUl2MXk0akg4UFRWZDlrcFViZW0wbkpYUVBnbTU2cnEvcGVYMmJ2MXVzPTBa
# BgorBgEEAYI3AgEMMUwwSqAkgCIATQBpAGMAcgBvAHMAbwBmAHQAIABXAGkAbgBk
# AG8AdwBzoSKAIGh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS93aW5kb3dzMA0GCSqG
# SIb3DQEBAQUABIIBAHzn1NRYAGqlJsY15Oh+s87+MpRhtmzgKgs8P3yPkMamAD8L
# BqUsI6TUS2bzLdtWdY9XWV9eMralppY9zhLVpkeJAQfLE+tHsdGop6CCY66sr4yi
# e753TahhvRZ0KQaXXyi8C9nGhm9Yjkwl+anOsfe9EUtbgkvFOMMrm+crm1YW1cxs
# 2tTnpOeAA00YX0c5mRn7XSNt9iFRUPJa2Gqxq2KmkKyyZSHDrjfLLv/ISbEx/Fb7
# 07P6s3wyskZnEVUtSquMeZhlTkD4ODBkrrLJP0B9XslyxPtD5d7UujSt2M6SsHtp
# FBeqUReRunWzOutBHeKiJY9fUeeAUP3C8RnNQpyhghcMMIIXCAYKKwYBBAGCNwMD
# ATGCFvgwghb0BgkqhkiG9w0BBwKgghblMIIW4QIBAzEPMA0GCWCGSAFlAwQCAQUA
# MIIBVQYLKoZIhvcNAQkQAQSgggFEBIIBQDCCATwCAQEGCisGAQQBhFkKAwEwMTAN
# BglghkgBZQMEAgEFAAQglGWmPNqBeME6O8KXjVykGe1YxngclX3Op2Xrtqx+KZQC
# BmKyIu9b8xgTMjAyMjA3MTYwMDMwMDIuNzI2WjAEgAIB9KCB1KSB0TCBzjELMAkG
# A1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQx
# HjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEpMCcGA1UECxMgTWljcm9z
# b2Z0IE9wZXJhdGlvbnMgUHVlcnRvIFJpY28xJjAkBgNVBAsTHVRoYWxlcyBUU1Mg
# RVNOOjMyQkQtRTNENS0zQjFEMSUwIwYDVQQDExxNaWNyb3NvZnQgVGltZS1TdGFt
# cCBTZXJ2aWNloIIRXzCCBxAwggT4oAMCAQICEzMAAAGt/N9NWONdMukAAQAAAa0w
# DQYJKoZIhvcNAQELBQAwfDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0
# b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3Jh
# dGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIwMTAwHhcN
# MjIwMzAyMTg1MTM2WhcNMjMwNTExMTg1MTM2WjCBzjELMAkGA1UEBhMCVVMxEzAR
# BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1p
# Y3Jvc29mdCBDb3Jwb3JhdGlvbjEpMCcGA1UECxMgTWljcm9zb2Z0IE9wZXJhdGlv
# bnMgUHVlcnRvIFJpY28xJjAkBgNVBAsTHVRoYWxlcyBUU1MgRVNOOjMyQkQtRTNE
# NS0zQjFEMSUwIwYDVQQDExxNaWNyb3NvZnQgVGltZS1TdGFtcCBTZXJ2aWNlMIIC
# IjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEA6J5TKqVNKtUuG9jtM7y+AL5P
# k3/L8xd5Heg3ATSssjUSD+AzmD02E/4qqolz/u48vhOygAtv5FV/quhg2WXJCtia
# q5SPCyrbrYwPkv2X2tTWmXPa0w96E/xp11WU0iNggGHQ0LgLIwTq3FWmlCvt4V39
# tbRf22dnLVoNb7OhokHYVjyFqiSrlxE40Rbi6hWxNNewgKRtg4Bh98ggZqQwVdW8
# HfQ1yy6IOfq4OTzdddOzS2dKvwXHM+gPxKA88hxZpY8SMJAuvkjQHF91SWLA08cg
# 8SCWqiysKVGNcbutxlZtZ44OABOLSLoNSy/VafQs5biy8rj9a5z+/12Wa4itqa/3
# CFuALKRS5hnLwzFPOxCpTZHFybyHz0JcDmN/WTuTdmJotQnTTcyO1O01fOWBv6TU
# Dl4vXsbcLgSPDkChWIz5QEZC/G5PGkV5oahAWp44Ya0QrSqTTB1Rf2n/gC71eyV7
# kPl+/KkF2xxcGyVQFxPr4JirSRD2yaxPKFXgMr3Bv1mfs5sQ59PQBDKmkjqPDMGM
# eEAYXKspiMhuCUxoSLGNG/td02JzZW5grJLvUDSGzp1tsPH9XuENt2/ayu1nZVM7
# TLYT7hCoxEq0AG/gCCCNgrPlNga5DhVts9jx8E71eq9rcafHVkM5DecZUUofBqsY
# Nw10Hep6y+0lsgYmAmMCAwEAAaOCATYwggEyMB0GA1UdDgQWBBR9UHQdBLyqIVpu
# aoSo5X0ussbBWTAfBgNVHSMEGDAWgBSfpxVdAF5iXYP05dJlpxtTNRnpcjBfBgNV
# HR8EWDBWMFSgUqBQhk5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2Ny
# bC9NaWNyb3NvZnQlMjBUaW1lLVN0YW1wJTIwUENBJTIwMjAxMCgxKS5jcmwwbAYI
# KwYBBQUHAQEEYDBeMFwGCCsGAQUFBzAChlBodHRwOi8vd3d3Lm1pY3Jvc29mdC5j
# b20vcGtpb3BzL2NlcnRzL01pY3Jvc29mdCUyMFRpbWUtU3RhbXAlMjBQQ0ElMjAy
# MDEwKDEpLmNydDAMBgNVHRMBAf8EAjAAMBMGA1UdJQQMMAoGCCsGAQUFBwMIMA0G
# CSqGSIb3DQEBCwUAA4ICAQCL0B1FuzH+A5J0Fed3BF6NC661Cpx7eTduCzWyU+Nl
# LHoUNenUhnOM7JPUmj/d5RYMEUl2L4d67U2jIN0af28vqvGXLUvrwrgyd8sGb7Jv
# KM37FrV41rj7hw6g67ETYq3yO2ZlsiHHaO9jsX2pj+VqdHk9JtQrIKWE1CHGyc1S
# n8lJD6jucC5An7CwLA8KtdgTsL5O8oONrp7pZTQrhGIFcUZTXPoy3cr3CUwP9AZT
# j78gZkOYT79n+TQl8mNnLEICVyaF7euB2EPMCwbElirg9uUZlMF2vzCRDCk/aOCD
# IwxrAwzkOCDC9doNuuoJDyCSw2EJnNOp9LZ1uAsXSbsd/CVQytyfOL9t1NJFbMhe
# DlCwfW3ldpogf5NnW5kG3BcnwQ5evpL7YDqrxFBVjXQqcEfpikYT06Fc9+4i7zza
# a4UR2HgRds90BFRHUgxIjGDzySFIEL9gHBCEKmNOSyrkndn6PIdZngyddflHjaYB
# HnziJFhztqBi+6i0MSpwPRT2UiOBbfU+p+plDW25hlOIZwoT1Bxga9kUqdV2Sorx
# XQz176QXkKoM6swxhFXb4j8WHJCwkfEr8bncPQ7lu90iHaAOcQdEAWKF1mPb1ntb
# SloY+i0ZfSgHmv3Co2Mzetu+4R7oUnfbcw9jXH383WDXbpP9KiSoAMkFMqrIFg3j
# MzCCB3EwggVZoAMCAQICEzMAAAAVxedrngKbSZkAAAAAABUwDQYJKoZIhvcNAQEL
# BQAwgYgxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQH
# EwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xMjAwBgNV
# BAMTKU1pY3Jvc29mdCBSb290IENlcnRpZmljYXRlIEF1dGhvcml0eSAyMDEwMB4X
# DTIxMDkzMDE4MjIyNVoXDTMwMDkzMDE4MzIyNVowfDELMAkGA1UEBhMCVVMxEzAR
# BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1p
# Y3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRpbWUtU3Rh
# bXAgUENBIDIwMTAwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDk4aZM
# 57RyIQt5osvXJHm9DtWC0/3unAcH0qlsTnXIyjVX9gF/bErg4r25PhdgM/9cT8dm
# 95VTcVrifkpa/rg2Z4VGIwy1jRPPdzLAEBjoYH1qUoNEt6aORmsHFPPFdvWGUNzB
# RMhxXFExN6AKOG6N7dcP2CZTfDlhAnrEqv1yaa8dq6z2Nr41JmTamDu6GnszrYBb
# fowQHJ1S/rboYiXcag/PXfT+jlPP1uyFVk3v3byNpOORj7I5LFGc6XBpDco2LXCO
# Mcg1KL3jtIckw+DJj361VI/c+gVVmG1oO5pGve2krnopN6zL64NF50ZuyjLVwIYw
# XE8s4mKyzbnijYjklqwBSru+cakXW2dg3viSkR4dPf0gz3N9QZpGdc3EXzTdEonW
# /aUgfX782Z5F37ZyL9t9X4C626p+Nuw2TPYrbqgSUei/BQOj0XOmTTd0lBw0gg/w
# EPK3Rxjtp+iZfD9M269ewvPV2HM9Q07BMzlMjgK8QmguEOqEUUbi0b1qGFphAXPK
# Z6Je1yh2AuIzGHLXpyDwwvoSCtdjbwzJNmSLW6CmgyFdXzB0kZSU2LlQ+QuJYfM2
# BjUYhEfb3BvR/bLUHMVr9lxSUV0S2yW6r1AFemzFER1y7435UsSFF5PAPBXbGjfH
# CBUYP3irRbb1Hode2o+eFnJpxq57t7c+auIurQIDAQABo4IB3TCCAdkwEgYJKwYB
# BAGCNxUBBAUCAwEAATAjBgkrBgEEAYI3FQIEFgQUKqdS/mTEmr6CkTxGNSnPEP8v
# BO4wHQYDVR0OBBYEFJ+nFV0AXmJdg/Tl0mWnG1M1GelyMFwGA1UdIARVMFMwUQYM
# KwYBBAGCN0yDfQEBMEEwPwYIKwYBBQUHAgEWM2h0dHA6Ly93d3cubWljcm9zb2Z0
# LmNvbS9wa2lvcHMvRG9jcy9SZXBvc2l0b3J5Lmh0bTATBgNVHSUEDDAKBggrBgEF
# BQcDCDAZBgkrBgEEAYI3FAIEDB4KAFMAdQBiAEMAQTALBgNVHQ8EBAMCAYYwDwYD
# VR0TAQH/BAUwAwEB/zAfBgNVHSMEGDAWgBTV9lbLj+iiXGJo0T2UkFvXzpoYxDBW
# BgNVHR8ETzBNMEugSaBHhkVodHRwOi8vY3JsLm1pY3Jvc29mdC5jb20vcGtpL2Ny
# bC9wcm9kdWN0cy9NaWNSb29DZXJBdXRfMjAxMC0wNi0yMy5jcmwwWgYIKwYBBQUH
# AQEETjBMMEoGCCsGAQUFBzAChj5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtp
# L2NlcnRzL01pY1Jvb0NlckF1dF8yMDEwLTA2LTIzLmNydDANBgkqhkiG9w0BAQsF
# AAOCAgEAnVV9/Cqt4SwfZwExJFvhnnJL/Klv6lwUtj5OR2R4sQaTlz0xM7U518Jx
# Nj/aZGx80HU5bbsPMeTCj/ts0aGUGCLu6WZnOlNN3Zi6th542DYunKmCVgADsAW+
# iehp4LoJ7nvfam++Kctu2D9IdQHZGN5tggz1bSNU5HhTdSRXud2f8449xvNo32X2
# pFaq95W2KFUn0CS9QKC/GbYSEhFdPSfgQJY4rPf5KYnDvBewVIVCs/wMnosZiefw
# C2qBwoEZQhlSdYo2wh3DYXMuLGt7bj8sCXgU6ZGyqVvfSaN0DLzskYDSPeZKPmY7
# T7uG+jIa2Zb0j/aRAfbOxnT99kxybxCrdTDFNLB62FD+CljdQDzHVG2dY3RILLFO
# Ry3BFARxv2T5JL5zbcqOCb2zAVdJVGTZc9d/HltEAY5aGZFrDZ+kKNxnGSgkujhL
# mm77IVRrakURR6nxt67I6IleT53S0Ex2tVdUCbFpAUR+fKFhbHP+CrvsQWY9af3L
# wUFJfn6Tvsv4O+S3Fb+0zj6lMVGEvL8CwYKiexcdFYmNcP7ntdAoGokLjzbaukz5
# m/8K6TT4JDVnK+ANuOaMmdbhIurwJ0I9JZTmdHRbatGePu1+oDEzfbzL6Xu/OHBE
# 0ZDxyKs6ijoIYn/ZcGNTTY3ugm2lBRDBcQZqELQdVTNYs6FwZvKhggLSMIICOwIB
# ATCB/KGB1KSB0TCBzjELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24x
# EDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlv
# bjEpMCcGA1UECxMgTWljcm9zb2Z0IE9wZXJhdGlvbnMgUHVlcnRvIFJpY28xJjAk
# BgNVBAsTHVRoYWxlcyBUU1MgRVNOOjMyQkQtRTNENS0zQjFEMSUwIwYDVQQDExxN
# aWNyb3NvZnQgVGltZS1TdGFtcCBTZXJ2aWNloiMKAQEwBwYFKw4DAhoDFQBAktGt
# RVHhlsEOBY+O42pVy1TOkKCBgzCBgKR+MHwxCzAJBgNVBAYTAlVTMRMwEQYDVQQI
# EwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3Nv
# ZnQgQ29ycG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBUaW1lLVN0YW1wIFBD
# QSAyMDEwMA0GCSqGSIb3DQEBBQUAAgUA5nxEmTAiGA8yMDIyMDcxNTIzNTUwNVoY
# DzIwMjIwNzE2MjM1NTA1WjB3MD0GCisGAQQBhFkKBAExLzAtMAoCBQDmfESZAgEA
# MAoCAQACAihSAgH/MAcCAQACAhE/MAoCBQDmfZYZAgEAMDYGCisGAQQBhFkKBAIx
# KDAmMAwGCisGAQQBhFkKAwKgCjAIAgEAAgMHoSChCjAIAgEAAgMBhqAwDQYJKoZI
# hvcNAQEFBQADgYEAlT+zR4AFFyV+Lm1nYhx1l8wTYnuFmkhKzwi/jIvRpbINGPrH
# Ht//qQvguYRKRVWG9wYW2EVZnJA9X8sl8FDiq4r4j2289bngOqpgY1mOQWkGBN7g
# YjnD0r05j7HF5kxS+Yqx5yVVSrJ6QZa9StFkZD3BiJ41+Ozr5Obqp0EiDS8xggQN
# MIIECQIBATCBkzB8MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQ
# MA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9u
# MSYwJAYDVQQDEx1NaWNyb3NvZnQgVGltZS1TdGFtcCBQQ0EgMjAxMAITMwAAAa38
# 301Y410y6QABAAABrTANBglghkgBZQMEAgEFAKCCAUowGgYJKoZIhvcNAQkDMQ0G
# CyqGSIb3DQEJEAEEMC8GCSqGSIb3DQEJBDEiBCB9vksP4ELQU4CB4AY/Pkwi57D6
# 3segs4XwyPf3fQ2CbzCB+gYLKoZIhvcNAQkQAi8xgeowgecwgeQwgb0EIJ/qfD0J
# Hl7X4621yfXD33YqafxgxNj8NY8gd4xsy1CCMIGYMIGApH4wfDELMAkGA1UEBhMC
# VVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNV
# BAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRp
# bWUtU3RhbXAgUENBIDIwMTACEzMAAAGt/N9NWONdMukAAQAAAa0wIgQgqcJGnGcy
# UjeZwHVies/OtZ7J9cXXDg2AWtb7U84GdCAwDQYJKoZIhvcNAQELBQAEggIAPOin
# mVjBVRSLIVtaObTXy94uIMPJM5Z6ukpCLhyRHBSzHAYl1TZzRr1emqXrh1pdVYrr
# NGt4/feXu/ZjQWy2uY6BVa1x0DASGPbWRA+ToObHqkWLgZ6c9NvlrqG5Ap4RVmdi
# VUu3zpOqeqjDTrgmOW2S7z+jrcYgj290f91o9qJc2onIGPpz9Cyx2EpVYRySSIgM
# 4L+F1X5ckhGLuZM2EYRuXwtVwZMAtlPPwAa3/aHTNGeoOwoWj8dBQp7PoNVa6NoB
# KILSoPIbv5fes+AGy17XrvlFLegRpIdHjbnJC/HmhTkltaL5PD5iBSD06UlcuCom
# nYcWoH+f+8Cm4ZPoOvT2zR69UsocUyP9PIVS79NLK3EUrlaGoxRgUCJY51GIyZPH
# +sGZo+/x5WuQMQuh2om0/GmjnWeAgGJAcaugjfsHPI0wGtYM7LaH/qbUN185fTtt
# Y9SCX8avnyRi0v/61vzQUeTuQvUNgiYwnlqQwpOStCYfXYCF+atrc5ZveAGxgfxS
# 5uHEf+grxNshzKKwXaOdXtQaGUhfxer5HaX2HBiF3aUCm1cUnaZPV1clJwhaNL/U
# 0bzKX6ILyKrI7HKA82dLajXUXAVctWwHNzbRr6DbioBV12IB8vAS1eE0uGRA+XVi
# cHUVE1CqUhOT1C7uYEE7NDj5xGcrieXjpVgcYUo=
# SIG # End signature block
