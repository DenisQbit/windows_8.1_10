// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Input_Inking_Preview_0_H
#define WINRT_Windows_UI_Input_Inking_Preview_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Rect;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct Visual;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Preview
{
    struct IPalmRejectionDelayZonePreview;
    struct IPalmRejectionDelayZonePreviewStatics;
    struct PalmRejectionDelayZonePreview;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview> = L"Windows.UI.Input.Inking.Preview.PalmRejectionDelayZonePreview";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview> = L"Windows.UI.Input.Inking.Preview.IPalmRejectionDelayZonePreview";
    template <> inline constexpr auto& name_v<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics> = L"Windows.UI.Input.Inking.Preview.IPalmRejectionDelayZonePreviewStatics";
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview>{ 0x62B496CB,0x539D,0x5343,{ 0xA6,0x5F,0x41,0xF5,0x30,0x0E,0xC7,0x0C } }; // 62B496CB-539D-5343-A65F-41F5300EC70C
    template <> inline constexpr guid guid_v<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics>{ 0xCDEF5EE0,0x93D0,0x53A9,{ 0x8F,0x0E,0x9A,0x37,0x9F,0x8F,0x75,0x30 } }; // CDEF5EE0-93D0-53A9-8F0E-9A379F8F7530
    template <> struct default_interface<Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview>{ using type = Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview; };
    template <> struct abi<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForVisual(void*, Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForVisualWithViewportClip(void*, Windows::Foundation::Rect, void*, Windows::Foundation::Rect, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreview
    {
    };
    template <> struct consume<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreview<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreviewStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview) CreateForVisual(Windows::UI::Composition::Visual const& inputPanelVisual, Windows::Foundation::Rect const& inputPanelRect) const;
        WINRT_IMPL_AUTO(Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview) CreateForVisual(Windows::UI::Composition::Visual const& inputPanelVisual, Windows::Foundation::Rect const& inputPanelRect, Windows::UI::Composition::Visual const& viewportVisual, Windows::Foundation::Rect const& viewportRect) const;
    };
    template <> struct consume<Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreviewStatics<D>;
    };
}
#endif
