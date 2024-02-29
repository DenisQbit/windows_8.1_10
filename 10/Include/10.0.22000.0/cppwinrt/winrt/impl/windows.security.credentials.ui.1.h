// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Credentials_UI_1_H
#define WINRT_Windows_Security_Credentials_UI_1_H
#include "winrt/impl/Windows.Security.Credentials.UI.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::Credentials::UI
{
    struct __declspec(empty_bases) ICredentialPickerOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICredentialPickerOptions>
    {
        ICredentialPickerOptions(std::nullptr_t = nullptr) noexcept {}
        ICredentialPickerOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICredentialPickerResults :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICredentialPickerResults>
    {
        ICredentialPickerResults(std::nullptr_t = nullptr) noexcept {}
        ICredentialPickerResults(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICredentialPickerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICredentialPickerStatics>
    {
        ICredentialPickerStatics(std::nullptr_t = nullptr) noexcept {}
        ICredentialPickerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserConsentVerifierStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserConsentVerifierStatics>
    {
        IUserConsentVerifierStatics(std::nullptr_t = nullptr) noexcept {}
        IUserConsentVerifierStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
