// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Notifications_Preview_0_H
#define WINRT_Windows_UI_Notifications_Preview_0_H
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct WindowId;
}
WINRT_EXPORT namespace winrt::Windows::UI::Notifications::Preview
{
    struct IToastOcclusionManagerPreviewStatics;
    struct ToastOcclusionManagerPreview;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Notifications::Preview::IToastOcclusionManagerPreviewStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Notifications::Preview::ToastOcclusionManagerPreview>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Notifications::Preview::ToastOcclusionManagerPreview> = L"Windows.UI.Notifications.Preview.ToastOcclusionManagerPreview";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Notifications::Preview::IToastOcclusionManagerPreviewStatics> = L"Windows.UI.Notifications.Preview.IToastOcclusionManagerPreviewStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Notifications::Preview::IToastOcclusionManagerPreviewStatics>{ 0x507E5C83,0x50F9,0x5412,{ 0x89,0x53,0xB6,0x5C,0x18,0xCF,0xAB,0x12 } }; // 507E5C83-50F9-5412-8953-B65C18CFAB12
    template <> struct abi<winrt::Windows::UI::Notifications::Preview::IToastOcclusionManagerPreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetToastWindowMargin(struct struct_Windows_UI_WindowId, double) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Notifications_Preview_IToastOcclusionManagerPreviewStatics
    {
        WINRT_IMPL_AUTO(void) SetToastWindowMargin(winrt::Windows::UI::WindowId const& appWindowId, double margin) const;
    };
    template <> struct consume<winrt::Windows::UI::Notifications::Preview::IToastOcclusionManagerPreviewStatics>
    {
        template <typename D> using type = consume_Windows_UI_Notifications_Preview_IToastOcclusionManagerPreviewStatics<D>;
    };
}
#endif
