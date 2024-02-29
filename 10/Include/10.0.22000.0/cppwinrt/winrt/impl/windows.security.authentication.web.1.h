// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Web_1_H
#define WINRT_Windows_Security_Authentication_Web_1_H
#include "winrt/impl/Windows.Security.Authentication.Web.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web
{
    struct __declspec(empty_bases) IWebAuthenticationBrokerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAuthenticationBrokerStatics>
    {
        IWebAuthenticationBrokerStatics(std::nullptr_t = nullptr) noexcept {}
        IWebAuthenticationBrokerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAuthenticationBrokerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAuthenticationBrokerStatics2>
    {
        IWebAuthenticationBrokerStatics2(std::nullptr_t = nullptr) noexcept {}
        IWebAuthenticationBrokerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAuthenticationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebAuthenticationResult>
    {
        IWebAuthenticationResult(std::nullptr_t = nullptr) noexcept {}
        IWebAuthenticationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
