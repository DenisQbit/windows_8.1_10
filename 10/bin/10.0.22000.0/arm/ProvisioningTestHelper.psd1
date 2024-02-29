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
# MIImCgYJKoZIhvcNAQcCoIIl+zCCJfcCAQExDzANBglghkgBZQMEAgEFADB5Bgor
# BgEEAYI3AgEEoGswaTA0BgorBgEEAYI3AgEeMCYCAwEAAAQQH8w7YFlLCE63JNLG
# KX7zUQIBAAIBAAIBAAIBAAIBADAxMA0GCWCGSAFlAwQCAQUABCBdRENz7HwBWl79
# TY9Bi7C9LuskbStNom+zvJCohxQKEKCCC30wggUFMIID7aADAgECAhMzAAAEby9p
# TlK6b01kAAAAAARvMA0GCSqGSIb3DQEBCwUAMH4xCzAJBgNVBAYTAlVTMRMwEQYD
# VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy
# b3NvZnQgQ29ycG9yYXRpb24xKDAmBgNVBAMTH01pY3Jvc29mdCBDb2RlIFNpZ25p
# bmcgUENBIDIwMTAwHhcNMjIwMTI3MTkzMjIwWhcNMjMwMTI2MTkzMjIwWjB/MQsw
# CQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9u
# ZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSkwJwYDVQQDEyBNaWNy
# b3NvZnQgV2luZG93cyBLaXRzIFB1Ymxpc2hlcjCCASIwDQYJKoZIhvcNAQEBBQAD
# ggEPADCCAQoCggEBAKRi1/B/MfwMraGQaC78jz/11xGVj/UQDQBgTg6tdw2ZNyul
# we0yifh3k74U8dgfymr+Uhd56Zy8HWg3bwf5WrJd53ZH88sD9RZDe0Sk0/HW3rIw
# jfARr1y3hQgKzd+21TCFCYhyHHYA9Ub46qYVt1K/8zvkpd1hUg7vRdSF2JuwFyWU
# 5LvJIjBzvDidqTxLHG4QX0YXcCCQsuzaZ3sndkRfXt1zxNN4YMS/BnULxzAdPtYI
# 8uN5xI0ZLf+7aVGi4sH1x5vD5yelL4pbo51u25YWEk3Tos7kMCCDppl6ls0R/3bu
# w1QVyihBm2xbg0Uz6COkzSzsbuQEPOuidOS9/FsCAwEAAaOCAXkwggF1MB8GA1Ud
# JQQYMBYGCisGAQQBgjcKAxQGCCsGAQUFBwMDMB0GA1UdDgQWBBQr6V0Fiza9qW/T
# sb0b6VSLEqSxzDBQBgNVHREESTBHpEUwQzEpMCcGA1UECxMgTWljcm9zb2Z0IE9w
# ZXJhdGlvbnMgUHVlcnRvIFJpY28xFjAUBgNVBAUTDTIyOTkwMys0NjkwNjEwHwYD
# VR0jBBgwFoAU5vxfe7siAFjkck619CF0IzLm76wwVgYDVR0fBE8wTTBLoEmgR4ZF
# aHR0cDovL2NybC5taWNyb3NvZnQuY29tL3BraS9jcmwvcHJvZHVjdHMvTWljQ29k
# U2lnUENBXzIwMTAtMDctMDYuY3JsMFoGCCsGAQUFBwEBBE4wTDBKBggrBgEFBQcw
# AoY+aHR0cDovL3d3dy5taWNyb3NvZnQuY29tL3BraS9jZXJ0cy9NaWNDb2RTaWdQ
# Q0FfMjAxMC0wNy0wNi5jcnQwDAYDVR0TAQH/BAIwADANBgkqhkiG9w0BAQsFAAOC
# AQEAUhslh98SmQ5Tc/IZPDdOhIfJQv7Ihqs9nlviNokczb9+npbnxv5jQqSxAj5z
# J5hQn9iMEi3QoTO2Caeg3noigbU556QFP9mHndPx8T5MhkeM7oPuxxgRMQ0aveCs
# RwMU3LzNVk+jgOtdY8m3kgqr5Of1DYCx/ncyrSy6dl/erpVXq2ybOBMKCLE9h6HS
# lIoaomK3Z/2MGGhBsNdxDVNSNDft5ruuHgJIS4ox9R09oe38LaUJj9hlzEPPjWjQ
# 6MtSBUCsCQvmMXopm1Zq5YweCNEYSFL0wyT8WA4luTEckDpFK2jmb+6PFqQYEAmT
# 0cz/zUpn9GdAGVN7yHVF4F6ttDCCBnAwggRYoAMCAQICCmEMUkwAAAAAAAMwDQYJ
# KoZIhvcNAQELBQAwgYgxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9u
# MRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRp
# b24xMjAwBgNVBAMTKU1pY3Jvc29mdCBSb290IENlcnRpZmljYXRlIEF1dGhvcml0
# eSAyMDEwMB4XDTEwMDcwNjIwNDAxN1oXDTI1MDcwNjIwNTAxN1owfjELMAkGA1UE
# BhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAc
# BgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEoMCYGA1UEAxMfTWljcm9zb2Z0
# IENvZGUgU2lnbmluZyBQQ0EgMjAxMDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCC
# AQoCggEBAOkOZFB5Z7XE4/0JAEyelKz3VmjqRNjPxVhPqaV2fG1FutM5krSkHvn5
# ZYLkF9KP/UScCOhlk84sVYS/fQjjLiuoQSsYt6JLbklMaxUH3tHSwokecZTNtX9L
# tK8I2MyI1msXlDqTziY/7Ob+NJhX1R1dSfayKi7VhbtZP/iQtCuDdMorsztG4/BG
# ScEXZlTJHL0dxFViV3L4Z7klIDTeXaallV6rKIDN1bKe5QO1Y9OyFMjByIomCll/
# B+z/Du2AEjVMEqa+Ulv1ptrgiwtId9aFR9UQucboqu6Lai0FXGDGtCpbnCMcX0Xj
# GhQebzfLGTOAaolNo2pmY3iT1TDPlR8CAwEAAaOCAeMwggHfMBAGCSsGAQQBgjcV
# AQQDAgEAMB0GA1UdDgQWBBTm/F97uyIAWORyTrX0IXQjMubvrDAZBgkrBgEEAYI3
# FAIEDB4KAFMAdQBiAEMAQTALBgNVHQ8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAf
# BgNVHSMEGDAWgBTV9lbLj+iiXGJo0T2UkFvXzpoYxDBWBgNVHR8ETzBNMEugSaBH
# hkVodHRwOi8vY3JsLm1pY3Jvc29mdC5jb20vcGtpL2NybC9wcm9kdWN0cy9NaWNS
# b29DZXJBdXRfMjAxMC0wNi0yMy5jcmwwWgYIKwYBBQUHAQEETjBMMEoGCCsGAQUF
# BzAChj5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpL2NlcnRzL01pY1Jvb0Nl
# ckF1dF8yMDEwLTA2LTIzLmNydDCBnQYDVR0gBIGVMIGSMIGPBgkrBgEEAYI3LgMw
# gYEwPQYIKwYBBQUHAgEWMWh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9QS0kvZG9j
# cy9DUFMvZGVmYXVsdC5odG0wQAYIKwYBBQUHAgIwNB4yIB0ATABlAGcAYQBsAF8A
# UABvAGwAaQBjAHkAXwBTAHQAYQB0AGUAbQBlAG4AdAAuIB0wDQYJKoZIhvcNAQEL
# BQADggIBABp071dPKXvEFoV4uFDTIvwJnayCl/g0/yosl5US5eS/z7+TyOM0qduB
# uNweAL7SNW+v5X95lXflAtTx69jNTh4bYaLCWiMa8IyoYlFFZwjjPzwek/gwhRfI
# OUCm1w6zISnlpaFpjCKTzHSY56FHQ/JTrMAPMGl//tIlIG1vYdPfB9XZcgAsaYZ2
# PVHbpjlIyTdhbQfdUxnLp9Zhwr/ig6sP4GubldZ9KFGwiUpRpJpsyLcfShoOaanX
# 3MF+0Ulwqratu3JHYxf6ptaipobsqBBEm2O2smmJBsdGhnoYP+jFHSHVe/kCIy3F
# Qcu/HUzIFu+xnH/8IktJim4V46Z/dlvRU3mRhZ3V0ts9czXzPK5UslJHasCqE5XS
# jhHamWdeMoz7N4XR3HWFnIfGWleFwr/dDY+Mmy3rtO7PJ9O1Xmn6pBYEAackZ3PP
# TU+23gVWl3r36VJN9HcFT4XG2Avxju1CCdENduMjVngiJja+yrGMbqod5IXaRzNi
# j6TJkTNfcR5Ar5hlySLoQiElihwtYNk3iUGJKhYP12E8lGhgUu/WR5mggEDuFYF3
# PpzgUxgaUB04lZseZjMTJzkXeIc2zk7DX7L1PUdTtuDl2wthPSrXkizON1o+QEIx
# pB8QCMJWnL8kXVECnWp50hfT2sGUjgd7JXFEqwZq5tTG3yOalnXFMYIZ4zCCGd8C
# AQEwgZUwfjELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNV
# BAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEoMCYG
# A1UEAxMfTWljcm9zb2Z0IENvZGUgU2lnbmluZyBQQ0EgMjAxMAITMwAABG8vaU5S
# um9NZAAAAAAEbzANBglghkgBZQMEAgEFAKCCAQQwGQYJKoZIhvcNAQkDMQwGCisG
# AQQBgjcCAQQwHAYKKwYBBAGCNwIBCzEOMAwGCisGAQQBgjcCARUwLwYJKoZIhvcN
# AQkEMSIEIBiRnAcyMZg5fN1keQFu4m3cJS9jciOzXWrtnqzZNCblMDwGCisGAQQB
# gjcKAxwxLgwsYjFQZGhNbFZQQ0x4Y3NQZFVSMHdZOFFZelBxR00wYU5sbHQ3c2lS
# cHdmRT0wWgYKKwYBBAGCNwIBDDFMMEqgJIAiAE0AaQBjAHIAbwBzAG8AZgB0ACAA
# VwBpAG4AZABvAHcAc6EigCBodHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vd2luZG93
# czANBgkqhkiG9w0BAQEFAASCAQAi2YBxprFQbZDODQv1VMB1fsGnyKp7T+DymyqO
# cEgz1ixpU+HjLJ9qLKI9LNdL8G/hGMo87fuB2byP2VhQNUerJrM/aA0S9sjZBHzd
# TXCITVxIXL+RlQ211HwgpC6iyrOKr80z8aAeYU6vmTliHiu9u9uuTJbhiYLzJDCK
# aISRqNU8qbBFLNJyERhjcxS0YW2JYzQfu16D0w1uSQJ4bx0M88vM5Thaf3JTTn3x
# W/f4d010+zTlcTM2mBd5eLrPIanJmsmtqSzLxryosWKtXFxn91KT9yTYPd7Pc5yv
# Lgyba9dshnzhTAROM/3X8aEF0GxIamDi05iRUh4OzLzC5sJuoYIXFjCCFxIGCisG
# AQQBgjcDAwExghcCMIIW/gYJKoZIhvcNAQcCoIIW7zCCFusCAQMxDzANBglghkgB
# ZQMEAgEFADCCAVkGCyqGSIb3DQEJEAEEoIIBSASCAUQwggFAAgEBBgorBgEEAYRZ
# CgMBMDEwDQYJYIZIAWUDBAIBBQAEIEsi207QMdBJmclQul3CsoGim01sE4QHCZVv
# DVexzol8AgZiu0Z9OtsYEzIwMjIwNzE2MDAzNjQwLjM1OFowBIACAfSggdikgdUw
# gdIxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdS
# ZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xLTArBgNVBAsT
# JE1pY3Jvc29mdCBJcmVsYW5kIE9wZXJhdGlvbnMgTGltaXRlZDEmMCQGA1UECxMd
# VGhhbGVzIFRTUyBFU046QTI0MC00QjgyLTEzMEUxJTAjBgNVBAMTHE1pY3Jvc29m
# dCBUaW1lLVN0YW1wIFNlcnZpY2WgghFlMIIHFDCCBPygAwIBAgITMwAAAY16VS54
# dJkqtwABAAABjTANBgkqhkiG9w0BAQsFADB8MQswCQYDVQQGEwJVUzETMBEGA1UE
# CBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9z
# b2Z0IENvcnBvcmF0aW9uMSYwJAYDVQQDEx1NaWNyb3NvZnQgVGltZS1TdGFtcCBQ
# Q0EgMjAxMDAeFw0yMTEwMjgxOTI3NDVaFw0yMzAxMjYxOTI3NDVaMIHSMQswCQYD
# VQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEe
# MBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMS0wKwYDVQQLEyRNaWNyb3Nv
# ZnQgSXJlbGFuZCBPcGVyYXRpb25zIExpbWl0ZWQxJjAkBgNVBAsTHVRoYWxlcyBU
# U1MgRVNOOkEyNDAtNEI4Mi0xMzBFMSUwIwYDVQQDExxNaWNyb3NvZnQgVGltZS1T
# dGFtcCBTZXJ2aWNlMIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEA2jRI
# LZg+O6U7dLcuwBPMB+0tJUz0wHLqJ5f7KJXQsTzWToADUMYV4xVZnp9mPTWojUJ/
# l3O4XqegLDNduFAObcitrLyY5HDsxAfUG1/2YilcSkSP6CcMqWfsSwULGX5zlsVK
# HJ7tvwg26y6eLklUdFMpiq294T4uJQdXd5O7mFy0vVkaGPGxNWLbZxKNzqKtFnWQ
# 7jMtZ05XvafkIWZrNTFv8GGpAlHtRsZ1A8KDo6IDSGVNZZXbQs+fOwMOGp/Bzod8
# f1YI8Gb2oN/mx2ccvdGr9la55QZeVsM7LfTaEPQxbgAcLgWDlIPcmTzcBksEzLOQ
# sSpBzsqPaWI9ykVw5ofmrkFKMbpQT5EMki2suJoVM5xGgdZWnt/tz00xubPSKFi4
# B4IMFUB9mcANUq9cHaLsHbDJ+AUsVO0qnVjwzXPYJeR7C/B8X0Ul6UkIdplZmncQ
# ZSBK3yZQy+oGsuJKXFAq3BlxT6kDuhYYvO7itLrPeY0knut1rKkxom+ui6vCdthC
# fnAiyknyRC2lknqzz8x1mDkQ5Q6Ox9p6/lduFupSJMtgsCPN9fIvrfppMDFIvRoU
# LsHOdLJjrRli8co5M+vZmf20oTxYuXzM0tbRurEJycB5ZMbwznsFHymOkgyx8OeF
# nXV3car45uejI1B1iqUDbeSNxnvczuOhcpzwackCAwEAAaOCATYwggEyMB0GA1Ud
# DgQWBBR4zJFuh59GwpTuSju4STcflihmkzAfBgNVHSMEGDAWgBSfpxVdAF5iXYP0
# 5dJlpxtTNRnpcjBfBgNVHR8EWDBWMFSgUqBQhk5odHRwOi8vd3d3Lm1pY3Jvc29m
# dC5jb20vcGtpb3BzL2NybC9NaWNyb3NvZnQlMjBUaW1lLVN0YW1wJTIwUENBJTIw
# MjAxMCgxKS5jcmwwbAYIKwYBBQUHAQEEYDBeMFwGCCsGAQUFBzAChlBodHRwOi8v
# d3d3Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2NlcnRzL01pY3Jvc29mdCUyMFRpbWUt
# U3RhbXAlMjBQQ0ElMjAyMDEwKDEpLmNydDAMBgNVHRMBAf8EAjAAMBMGA1UdJQQM
# MAoGCCsGAQUFBwMIMA0GCSqGSIb3DQEBCwUAA4ICAQA1r3Oz0lEq3VvpdFlh3YBx
# c4hnYkALyYPDa9FO4XgqwkBm8Lsb+lK3tbGGgpi6QJbK3iM3BK0ObBcwRaJVCxGL
# Gtr6Jz9hRumRyF8o4n2y3YiKv4olBxNjFShSGc9E29JmVjBmLgmfjRqPc/2rD25q
# 4ow4uA3rc9ekiaufgGhcSAdek/l+kASbzohOt/5z2+IlgT4e3auSUzt2GAKfKZB0
# 2ZDGWKKeCY3pELj1tuh6yfrOJPPInO4ZZLW3vgKavtL8e6FJZyJoDFMewJ59oEL+
# AK3e2M2I4IFE9n6LVS8bS9UbMUMvrAlXN5ZM2I8GdHB9TbfI17Wm/9Uf4qu588PJ
# N7vCJj9s+KxZqXc5sGScLgqiPqIbbNTE+/AEZ/eTixc9YLgTyMqakZI59wGqjrON
# QSY7u0VEDkEE6ikz+FSFRKKzpySb0WTgMvWxsLvbnN8ACmISPnBHYZoGssPAL7fo
# GGKFLdABTQC2PX19WjrfyrshHdiqSlCspqIGBTxRaHtyPMro3B/26gPfCl3MC3rC
# 3NGq4xGnIHDZGSizUmGg8TkQAloVdU5dJ1v910gjxaxaUraGhP8IttE0RWnU5XRp
# /sGaNmDcMwbyHuSpaFsn3Q21OzitP4BnN5tprHangAC7joe4zmLnmRnAiUc9sRqQ
# 2bmsMAvUpsO8nlOFmiM1LzCCB3EwggVZoAMCAQICEzMAAAAVxedrngKbSZkAAAAA
# ABUwDQYJKoZIhvcNAQELBQAwgYgxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNo
# aW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29y
# cG9yYXRpb24xMjAwBgNVBAMTKU1pY3Jvc29mdCBSb290IENlcnRpZmljYXRlIEF1
# dGhvcml0eSAyMDEwMB4XDTIxMDkzMDE4MjIyNVoXDTMwMDkzMDE4MzIyNVowfDEL
# MAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
# bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQGA1UEAxMdTWlj
# cm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIwMTAwggIiMA0GCSqGSIb3DQEBAQUAA4IC
# DwAwggIKAoICAQDk4aZM57RyIQt5osvXJHm9DtWC0/3unAcH0qlsTnXIyjVX9gF/
# bErg4r25PhdgM/9cT8dm95VTcVrifkpa/rg2Z4VGIwy1jRPPdzLAEBjoYH1qUoNE
# t6aORmsHFPPFdvWGUNzBRMhxXFExN6AKOG6N7dcP2CZTfDlhAnrEqv1yaa8dq6z2
# Nr41JmTamDu6GnszrYBbfowQHJ1S/rboYiXcag/PXfT+jlPP1uyFVk3v3byNpOOR
# j7I5LFGc6XBpDco2LXCOMcg1KL3jtIckw+DJj361VI/c+gVVmG1oO5pGve2krnop
# N6zL64NF50ZuyjLVwIYwXE8s4mKyzbnijYjklqwBSru+cakXW2dg3viSkR4dPf0g
# z3N9QZpGdc3EXzTdEonW/aUgfX782Z5F37ZyL9t9X4C626p+Nuw2TPYrbqgSUei/
# BQOj0XOmTTd0lBw0gg/wEPK3Rxjtp+iZfD9M269ewvPV2HM9Q07BMzlMjgK8Qmgu
# EOqEUUbi0b1qGFphAXPKZ6Je1yh2AuIzGHLXpyDwwvoSCtdjbwzJNmSLW6CmgyFd
# XzB0kZSU2LlQ+QuJYfM2BjUYhEfb3BvR/bLUHMVr9lxSUV0S2yW6r1AFemzFER1y
# 7435UsSFF5PAPBXbGjfHCBUYP3irRbb1Hode2o+eFnJpxq57t7c+auIurQIDAQAB
# o4IB3TCCAdkwEgYJKwYBBAGCNxUBBAUCAwEAATAjBgkrBgEEAYI3FQIEFgQUKqdS
# /mTEmr6CkTxGNSnPEP8vBO4wHQYDVR0OBBYEFJ+nFV0AXmJdg/Tl0mWnG1M1Gely
# MFwGA1UdIARVMFMwUQYMKwYBBAGCN0yDfQEBMEEwPwYIKwYBBQUHAgEWM2h0dHA6
# Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvRG9jcy9SZXBvc2l0b3J5Lmh0bTAT
# BgNVHSUEDDAKBggrBgEFBQcDCDAZBgkrBgEEAYI3FAIEDB4KAFMAdQBiAEMAQTAL
# BgNVHQ8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAfBgNVHSMEGDAWgBTV9lbLj+ii
# XGJo0T2UkFvXzpoYxDBWBgNVHR8ETzBNMEugSaBHhkVodHRwOi8vY3JsLm1pY3Jv
# c29mdC5jb20vcGtpL2NybC9wcm9kdWN0cy9NaWNSb29DZXJBdXRfMjAxMC0wNi0y
# My5jcmwwWgYIKwYBBQUHAQEETjBMMEoGCCsGAQUFBzAChj5odHRwOi8vd3d3Lm1p
# Y3Jvc29mdC5jb20vcGtpL2NlcnRzL01pY1Jvb0NlckF1dF8yMDEwLTA2LTIzLmNy
# dDANBgkqhkiG9w0BAQsFAAOCAgEAnVV9/Cqt4SwfZwExJFvhnnJL/Klv6lwUtj5O
# R2R4sQaTlz0xM7U518JxNj/aZGx80HU5bbsPMeTCj/ts0aGUGCLu6WZnOlNN3Zi6
# th542DYunKmCVgADsAW+iehp4LoJ7nvfam++Kctu2D9IdQHZGN5tggz1bSNU5HhT
# dSRXud2f8449xvNo32X2pFaq95W2KFUn0CS9QKC/GbYSEhFdPSfgQJY4rPf5KYnD
# vBewVIVCs/wMnosZiefwC2qBwoEZQhlSdYo2wh3DYXMuLGt7bj8sCXgU6ZGyqVvf
# SaN0DLzskYDSPeZKPmY7T7uG+jIa2Zb0j/aRAfbOxnT99kxybxCrdTDFNLB62FD+
# CljdQDzHVG2dY3RILLFORy3BFARxv2T5JL5zbcqOCb2zAVdJVGTZc9d/HltEAY5a
# GZFrDZ+kKNxnGSgkujhLmm77IVRrakURR6nxt67I6IleT53S0Ex2tVdUCbFpAUR+
# fKFhbHP+CrvsQWY9af3LwUFJfn6Tvsv4O+S3Fb+0zj6lMVGEvL8CwYKiexcdFYmN
# cP7ntdAoGokLjzbaukz5m/8K6TT4JDVnK+ANuOaMmdbhIurwJ0I9JZTmdHRbatGe
# Pu1+oDEzfbzL6Xu/OHBE0ZDxyKs6ijoIYn/ZcGNTTY3ugm2lBRDBcQZqELQdVTNY
# s6FwZvKhggLUMIICPQIBATCCAQChgdikgdUwgdIxCzAJBgNVBAYTAlVTMRMwEQYD
# VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy
# b3NvZnQgQ29ycG9yYXRpb24xLTArBgNVBAsTJE1pY3Jvc29mdCBJcmVsYW5kIE9w
# ZXJhdGlvbnMgTGltaXRlZDEmMCQGA1UECxMdVGhhbGVzIFRTUyBFU046QTI0MC00
# QjgyLTEzMEUxJTAjBgNVBAMTHE1pY3Jvc29mdCBUaW1lLVN0YW1wIFNlcnZpY2Wi
# IwoBATAHBgUrDgMCGgMVAIBzlZM9TRND4PgtpLWQZkSPYVcJoIGDMIGApH4wfDEL
# MAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
# bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEmMCQGA1UEAxMdTWlj
# cm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIwMTAwDQYJKoZIhvcNAQEFBQACBQDmfC3X
# MCIYDzIwMjIwNzE2MDIxNzU5WhgPMjAyMjA3MTcwMjE3NTlaMHQwOgYKKwYBBAGE
# WQoEATEsMCowCgIFAOZ8LdcCAQAwBwIBAAICBW4wBwIBAAICEdcwCgIFAOZ9f1cC
# AQAwNgYKKwYBBAGEWQoEAjEoMCYwDAYKKwYBBAGEWQoDAqAKMAgCAQACAwehIKEK
# MAgCAQACAwGGoDANBgkqhkiG9w0BAQUFAAOBgQB0OdmSvffz4U/5yRczRXfm43TR
# UxBCl8wOix8H7nMZmaoGjvV5MOXpXKtTVPuXK7YjZhLkVfzaHGV3XmNiu2w/CS02
# 4cjSbrvq3CtYWX7XCvCCfYfDiuwt83wRWKrR0MB2dP6iYCALFux33R+x54xqSIxp
# /4dJ7Cq89oStvnl6jTGCBA0wggQJAgEBMIGTMHwxCzAJBgNVBAYTAlVTMRMwEQYD
# VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy
# b3NvZnQgQ29ycG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBUaW1lLVN0YW1w
# IFBDQSAyMDEwAhMzAAABjXpVLnh0mSq3AAEAAAGNMA0GCWCGSAFlAwQCAQUAoIIB
# SjAaBgkqhkiG9w0BCQMxDQYLKoZIhvcNAQkQAQQwLwYJKoZIhvcNAQkEMSIEICk2
# g1Dgcq0Xxf3L7F799kvhN9EKYGs5URS9kjH7pSgGMIH6BgsqhkiG9w0BCRACLzGB
# 6jCB5zCB5DCBvQQgnpYRM/odXkDAnzf2udL569W8cfGTgwVuenQ8ttIYzX8wgZgw
# gYCkfjB8MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UE
# BxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMSYwJAYD
# VQQDEx1NaWNyb3NvZnQgVGltZS1TdGFtcCBQQ0EgMjAxMAITMwAAAY16VS54dJkq
# twABAAABjTAiBCCYWpJyGh2p5hxiti4tlzMlDWy73623Egu1j+gK73/C/zANBgkq
# hkiG9w0BAQsFAASCAgBWjlGHdbi5UtBi8DoLLlBg1tGSQT04Dn/odR4tZXwb823N
# 3EQy5yd3lLrnhixBWeSjrEfWu+GVfV/5IKtOP155hTquENy/yiwMgK3x1yoX6emm
# w95nmw4TvbGJO59H+r5a4aOMPK+LRNs1S8o4pP0lteLMkZ1AtIIEC3wMiunns4cG
# MIkJgcROykBD0TnrosroTTLIaM5WunanGxUc7JOIJfYB4wcN6A3cz6S9gyybOnMd
# Yjn9UlkYjotxfCuW1y48Cp3+WHmIeqc6uZiktDbxV2wpJPhoRY2/NfPR0W7/uswa
# X0uFlN/vo/i3yF3Aga681os5ACTzhibm7fVvhNCA/TYNDrrLxyi9T5JNl54HCoDx
# 2eFLEi58QHhya1hD976iXyx1UnqmuZkMxjmfe3n82twq+6cc46TYFKHaFqdpzNxK
# uQlljW5VM9ZHoN8XzYnMDIlaJzG5lkpHdnz2qgk2IcgpF/noYFrl6a745yJfSHUW
# WtW0kM1ez1eSeEPVM10KnbepiBA5zITdFRkPTARQvEyKvQE9ik1NK8jRvi+NdGto
# rGzk0sYid9tmgSnO7+IHiOZxL0LK+4bzSdlar2sqDi5JdkytPIhRIMrKmwNZXCpR
# SUFYokEYN/1xKHp7SPOoiiB7B2mI23hiQd0k9/9qojRWqe0Lok1iMSrdCFcaYw==
# SIG # End signature block