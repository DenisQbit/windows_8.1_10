// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Automation_Provider_0_H
#define WINRT_Windows_UI_Xaml_Automation_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Point;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation
{
    enum class AnnotationType : int32_t;
    struct AutomationProperty;
    enum class DockPosition : int32_t;
    enum class ExpandCollapseState : int32_t;
    enum class RowOrColumnMajor : int32_t;
    enum class ScrollAmount : int32_t;
    enum class SupportedTextSelection : int32_t;
    enum class SynchronizedInputType : int32_t;
    enum class ToggleState : int32_t;
    enum class WindowInteractionState : int32_t;
    enum class WindowVisualState : int32_t;
    enum class ZoomUnit : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Peers
{
    enum class AutomationNavigationDirection : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Text
{
    enum class TextPatternRangeEndpoint : int32_t;
    enum class TextUnit : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Provider
{
    struct IAnnotationProvider;
    struct ICustomNavigationProvider;
    struct IDockProvider;
    struct IDragProvider;
    struct IDropTargetProvider;
    struct IExpandCollapseProvider;
    struct IGridItemProvider;
    struct IGridProvider;
    struct IIRawElementProviderSimple;
    struct IInvokeProvider;
    struct IItemContainerProvider;
    struct IMultipleViewProvider;
    struct IObjectModelProvider;
    struct IRangeValueProvider;
    struct IScrollItemProvider;
    struct IScrollProvider;
    struct ISelectionItemProvider;
    struct ISelectionProvider;
    struct ISpreadsheetItemProvider;
    struct ISpreadsheetProvider;
    struct IStylesProvider;
    struct ISynchronizedInputProvider;
    struct ITableItemProvider;
    struct ITableProvider;
    struct ITextChildProvider;
    struct ITextEditProvider;
    struct ITextProvider;
    struct ITextProvider2;
    struct ITextRangeProvider;
    struct ITextRangeProvider2;
    struct IToggleProvider;
    struct ITransformProvider;
    struct ITransformProvider2;
    struct IValueProvider;
    struct IVirtualizedItemProvider;
    struct IWindowProvider;
    struct IRawElementProviderSimple;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IDockProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IDragProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IGridItemProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IGridProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IInvokeProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IScrollProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ISelectionProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IStylesProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITableItemProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITableProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextChildProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextEditProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextProvider2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IToggleProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITransformProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::ITransformProvider2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IValueProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IWindowProvider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple> = L"Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider> = L"Windows.UI.Xaml.Automation.Provider.IAnnotationProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider> = L"Windows.UI.Xaml.Automation.Provider.ICustomNavigationProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IDockProvider> = L"Windows.UI.Xaml.Automation.Provider.IDockProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IDragProvider> = L"Windows.UI.Xaml.Automation.Provider.IDragProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider> = L"Windows.UI.Xaml.Automation.Provider.IDropTargetProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider> = L"Windows.UI.Xaml.Automation.Provider.IExpandCollapseProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IGridItemProvider> = L"Windows.UI.Xaml.Automation.Provider.IGridItemProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IGridProvider> = L"Windows.UI.Xaml.Automation.Provider.IGridProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple> = L"Windows.UI.Xaml.Automation.Provider.IIRawElementProviderSimple";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IInvokeProvider> = L"Windows.UI.Xaml.Automation.Provider.IInvokeProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider> = L"Windows.UI.Xaml.Automation.Provider.IItemContainerProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider> = L"Windows.UI.Xaml.Automation.Provider.IMultipleViewProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider> = L"Windows.UI.Xaml.Automation.Provider.IObjectModelProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider> = L"Windows.UI.Xaml.Automation.Provider.IRangeValueProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider> = L"Windows.UI.Xaml.Automation.Provider.IScrollItemProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IScrollProvider> = L"Windows.UI.Xaml.Automation.Provider.IScrollProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider> = L"Windows.UI.Xaml.Automation.Provider.ISelectionItemProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ISelectionProvider> = L"Windows.UI.Xaml.Automation.Provider.ISelectionProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider> = L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetItemProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider> = L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IStylesProvider> = L"Windows.UI.Xaml.Automation.Provider.IStylesProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider> = L"Windows.UI.Xaml.Automation.Provider.ISynchronizedInputProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITableItemProvider> = L"Windows.UI.Xaml.Automation.Provider.ITableItemProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITableProvider> = L"Windows.UI.Xaml.Automation.Provider.ITableProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITextChildProvider> = L"Windows.UI.Xaml.Automation.Provider.ITextChildProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITextEditProvider> = L"Windows.UI.Xaml.Automation.Provider.ITextEditProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITextProvider> = L"Windows.UI.Xaml.Automation.Provider.ITextProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITextProvider2> = L"Windows.UI.Xaml.Automation.Provider.ITextProvider2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider> = L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2> = L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IToggleProvider> = L"Windows.UI.Xaml.Automation.Provider.IToggleProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITransformProvider> = L"Windows.UI.Xaml.Automation.Provider.ITransformProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::ITransformProvider2> = L"Windows.UI.Xaml.Automation.Provider.ITransformProvider2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IValueProvider> = L"Windows.UI.Xaml.Automation.Provider.IValueProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider> = L"Windows.UI.Xaml.Automation.Provider.IVirtualizedItemProvider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Provider::IWindowProvider> = L"Windows.UI.Xaml.Automation.Provider.IWindowProvider";
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider>{ 0x95BA1417,0x4437,0x451B,{ 0x94,0x61,0x05,0x0A,0x49,0xB5,0x9D,0x06 } }; // 95BA1417-4437-451B-9461-050A49B59D06
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider>{ 0x2BD8A6D0,0x2FA3,0x4717,{ 0xB2,0x8C,0x49,0x17,0xCE,0x54,0x92,0x8D } }; // 2BD8A6D0-2FA3-4717-B28C-4917CE54928D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IDockProvider>{ 0x48C243F8,0x78B1,0x44A0,{ 0xAC,0x5F,0x75,0x07,0x57,0xBC,0xDE,0x3C } }; // 48C243F8-78B1-44A0-AC5F-750757BCDE3C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IDragProvider>{ 0x2E7786A9,0x7FFC,0x4F57,{ 0xB9,0x65,0x1E,0xF1,0xF3,0x73,0xF5,0x46 } }; // 2E7786A9-7FFC-4F57-B965-1EF1F373F546
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider>{ 0x7A245BDD,0xB458,0x4FE0,{ 0x98,0xC8,0xAA,0xC8,0x9D,0xF5,0x6D,0x61 } }; // 7A245BDD-B458-4FE0-98C8-AAC89DF56D61
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider>{ 0x49AC8399,0xD626,0x4543,{ 0x94,0xB9,0xA6,0xD9,0xA9,0x59,0x3A,0xF6 } }; // 49AC8399-D626-4543-94B9-A6D9A9593AF6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IGridItemProvider>{ 0xFFF3683C,0x7407,0x45BB,{ 0xA9,0x36,0xDF,0x3E,0xD6,0xD3,0x83,0x7D } }; // FFF3683C-7407-45BB-A936-DF3ED6D3837D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IGridProvider>{ 0x8B62B7A0,0x932C,0x4490,{ 0x9A,0x13,0x02,0xFD,0xB3,0x9A,0x8F,0x5B } }; // 8B62B7A0-932C-4490-9A13-02FDB39A8F5B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple>{ 0xEC752224,0x9B77,0x4720,{ 0xBB,0x21,0x4A,0xC8,0x9F,0xDB,0x1A,0xFD } }; // EC752224-9B77-4720-BB21-4AC89FDB1AFD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IInvokeProvider>{ 0xF7D1A187,0xB13C,0x4540,{ 0xB0,0x9E,0x67,0x78,0xE2,0xDC,0x9B,0xA5 } }; // F7D1A187-B13C-4540-B09E-6778E2DC9BA5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider>{ 0xEF5CD845,0xE1D4,0x40F4,{ 0xBA,0xD5,0xC7,0xFA,0xD4,0x4A,0x70,0x3E } }; // EF5CD845-E1D4-40F4-BAD5-C7FAD44A703E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider>{ 0xD014E196,0x0E50,0x4843,{ 0xA5,0xD2,0xC2,0x28,0x97,0xC8,0x84,0x5A } }; // D014E196-0E50-4843-A5D2-C22897C8845A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider>{ 0xC3CA36B9,0x0793,0x4ED0,{ 0xBB,0xF4,0x9F,0xF4,0xE0,0xF9,0x8F,0x80 } }; // C3CA36B9-0793-4ED0-BBF4-9FF4E0F98F80
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider>{ 0x838A34A8,0x7D5F,0x4079,{ 0xAF,0x03,0xC3,0xD0,0x15,0xE9,0x34,0x13 } }; // 838A34A8-7D5F-4079-AF03-C3D015E93413
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider>{ 0x9A3EC090,0x5D2C,0x4E42,{ 0x9E,0xE6,0x9D,0x58,0xDB,0x10,0x0B,0x55 } }; // 9A3EC090-5D2C-4E42-9EE6-9D58DB100B55
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IScrollProvider>{ 0x374BF581,0x7716,0x4BBC,{ 0x82,0xEB,0xD9,0x97,0x00,0x6E,0xA9,0x99 } }; // 374BF581-7716-4BBC-82EB-D997006EA999
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider>{ 0x6A4977C1,0x830D,0x42D2,{ 0xBF,0x62,0x04,0x2E,0xBD,0xDE,0xCC,0x19 } }; // 6A4977C1-830D-42D2-BF62-042EBDDECC19
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ISelectionProvider>{ 0x1F018FCA,0xB944,0x4395,{ 0x8D,0xE1,0x88,0xF6,0x74,0xAF,0x51,0xD3 } }; // 1F018FCA-B944-4395-8DE1-88F674AF51D3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider>{ 0xEBDE8F92,0x6015,0x4826,{ 0xB7,0x19,0x47,0x52,0x1A,0x81,0xC6,0x7E } }; // EBDE8F92-6015-4826-B719-47521A81C67E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider>{ 0x15359093,0xBD99,0x4CFD,{ 0x9F,0x07,0x3B,0x14,0xB3,0x15,0xE2,0x3D } }; // 15359093-BD99-4CFD-9F07-3B14B315E23D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IStylesProvider>{ 0x1A5B7A17,0x7C01,0x4BEC,{ 0x9C,0xD4,0x2D,0xFA,0x7D,0xC2,0x46,0xCD } }; // 1A5B7A17-7C01-4BEC-9CD4-2DFA7DC246CD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider>{ 0x3D60CECB,0xDA54,0x4AA3,{ 0xB9,0x15,0xE3,0x24,0x44,0x27,0xD4,0xAC } }; // 3D60CECB-DA54-4AA3-B915-E3244427D4AC
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITableItemProvider>{ 0x3B2C49CD,0x1DE2,0x4EE2,{ 0xA3,0xE1,0xFB,0x55,0x35,0x59,0xD1,0x5D } }; // 3B2C49CD-1DE2-4EE2-A3E1-FB553559D15D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITableProvider>{ 0x7A8ED399,0x6824,0x4595,{ 0xBA,0xB3,0x46,0x4B,0xC9,0xA0,0x44,0x17 } }; // 7A8ED399-6824-4595-BAB3-464BC9A04417
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITextChildProvider>{ 0x1133C336,0xA89B,0x4130,{ 0x9B,0xE6,0x55,0xE3,0x33,0x34,0xF5,0x57 } }; // 1133C336-A89B-4130-9BE6-55E33334F557
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITextEditProvider>{ 0xEA3605B4,0x3A05,0x400E,{ 0xB5,0xF9,0x4E,0x91,0xB4,0x0F,0x61,0x76 } }; // EA3605B4-3A05-400E-B5F9-4E91B40F6176
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITextProvider>{ 0xDB5BBC9F,0x4807,0x4F2A,{ 0x86,0x78,0x1B,0x13,0xF3,0xC6,0x0E,0x22 } }; // DB5BBC9F-4807-4F2A-8678-1B13F3C60E22
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITextProvider2>{ 0xDF1D48BC,0x0487,0x4E7F,{ 0x9D,0x5E,0xF0,0x9E,0x77,0xE4,0x12,0x46 } }; // DF1D48BC-0487-4E7F-9D5E-F09E77E41246
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>{ 0x0274688D,0x06E9,0x4F66,{ 0x94,0x46,0x28,0xA5,0xBE,0x98,0xFB,0xD0 } }; // 0274688D-06E9-4F66-9446-28A5BE98FBD0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2>{ 0xD3BE3DFB,0x9F54,0x4642,{ 0xA7,0xA5,0x5C,0x18,0xD5,0xEE,0x2A,0x3F } }; // D3BE3DFB-9F54-4642-A7A5-5C18D5EE2A3F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IToggleProvider>{ 0x93B88290,0x656F,0x44F7,{ 0xAE,0xAF,0x78,0xB8,0xF9,0x44,0xD0,0x62 } }; // 93B88290-656F-44F7-AEAF-78B8F944D062
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITransformProvider>{ 0x79670FDD,0xF6A9,0x4A65,{ 0xAF,0x17,0x86,0x1D,0xB7,0x99,0xA2,0xDA } }; // 79670FDD-F6A9-4A65-AF17-861DB799A2DA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::ITransformProvider2>{ 0xA8B11756,0xA39F,0x4E97,{ 0x8C,0x7D,0xC1,0xEA,0x8D,0xD6,0x33,0xC5 } }; // A8B11756-A39F-4E97-8C7D-C1EA8DD633C5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IValueProvider>{ 0x2086B7A7,0xAC0E,0x47D1,{ 0xAB,0x9B,0x2A,0x64,0x29,0x2A,0xFD,0xF8 } }; // 2086B7A7-AC0E-47D1-AB9B-2A64292AFDF8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider>{ 0x17D4A04B,0xD658,0x48E0,{ 0xA5,0x74,0x5A,0x51,0x6C,0x58,0xDF,0xA7 } }; // 17D4A04B-D658-48E0-A574-5A516C58DFA7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Provider::IWindowProvider>{ 0x1BAA8B3D,0x38CF,0x415A,{ 0x85,0xD3,0x20,0xE4,0x3A,0x0E,0xC1,0xB1 } }; // 1BAA8B3D-38CF-415A-85D3-20E43A0EC1B1
    template <> struct default_interface<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>{ using type = Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple; };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnnotationTypeId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AnnotationTypeName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Author(void**) noexcept = 0;
            virtual int32_t __stdcall get_DateTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_Target(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall NavigateCustom(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IDockProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DockPosition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetDockPosition(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IDragProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsGrabbed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DropEffect(void**) noexcept = 0;
            virtual int32_t __stdcall get_DropEffects(uint32_t* __valueSize, void***) noexcept = 0;
            virtual int32_t __stdcall GetGrabbedItems(uint32_t* __resultSize, void***) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DropEffect(void**) noexcept = 0;
            virtual int32_t __stdcall get_DropEffects(uint32_t* __valueSize, void***) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExpandCollapseState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Collapse() noexcept = 0;
            virtual int32_t __stdcall Expand() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IGridItemProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Column(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ColumnSpan(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ContainingGrid(void**) noexcept = 0;
            virtual int32_t __stdcall get_Row(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RowSpan(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IGridProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColumnCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RowCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetItem(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IInvokeProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Invoke() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindItemByProperty(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentView(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetSupportedViews(uint32_t* __resultSize, int32_t**) noexcept = 0;
            virtual int32_t __stdcall GetViewName(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall SetCurrentView(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUnderlyingObjectModel(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsReadOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall get_LargeChange(double*) noexcept = 0;
            virtual int32_t __stdcall get_Maximum(double*) noexcept = 0;
            virtual int32_t __stdcall get_Minimum(double*) noexcept = 0;
            virtual int32_t __stdcall get_SmallChange(double*) noexcept = 0;
            virtual int32_t __stdcall get_Value(double*) noexcept = 0;
            virtual int32_t __stdcall SetValue(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ScrollIntoView() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IScrollProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontallyScrollable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalScrollPercent(double*) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalViewSize(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticallyScrollable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalScrollPercent(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalViewSize(double*) noexcept = 0;
            virtual int32_t __stdcall Scroll(int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall SetScrollPercent(double, double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSelected(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SelectionContainer(void**) noexcept = 0;
            virtual int32_t __stdcall AddToSelection() noexcept = 0;
            virtual int32_t __stdcall RemoveFromSelection() noexcept = 0;
            virtual int32_t __stdcall Select() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISelectionProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanSelectMultiple(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSelectionRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall GetSelection(uint32_t* __resultSize, void***) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Formula(void**) noexcept = 0;
            virtual int32_t __stdcall GetAnnotationObjects(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall GetAnnotationTypes(uint32_t* __resultSize, int32_t**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetItemByName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IStylesProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_FillColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_FillPatternColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_FillPatternStyle(void**) noexcept = 0;
            virtual int32_t __stdcall get_Shape(void**) noexcept = 0;
            virtual int32_t __stdcall get_StyleId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_StyleName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Cancel() noexcept = 0;
            virtual int32_t __stdcall StartListening(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITableItemProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetColumnHeaderItems(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall GetRowHeaderItems(uint32_t* __resultSize, void***) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITableProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RowOrColumnMajor(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetColumnHeaders(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall GetRowHeaders(uint32_t* __resultSize, void***) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextChildProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextContainer(void**) noexcept = 0;
            virtual int32_t __stdcall get_TextRange(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextEditProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetActiveComposition(void**) noexcept = 0;
            virtual int32_t __stdcall GetConversionTarget(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DocumentRange(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedTextSelection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetSelection(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall GetVisibleRanges(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall RangeFromChild(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RangeFromPoint(Windows::Foundation::Point, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextProvider2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RangeFromAnnotation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCaretRange(bool*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall Compare(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall CompareEndpoints(int32_t, void*, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall ExpandToEnclosingUnit(int32_t) noexcept = 0;
            virtual int32_t __stdcall FindAttribute(int32_t, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall FindText(void*, bool, bool, void**) noexcept = 0;
            virtual int32_t __stdcall GetAttributeValue(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetBoundingRectangles(uint32_t*, double**) noexcept = 0;
            virtual int32_t __stdcall GetEnclosingElement(void**) noexcept = 0;
            virtual int32_t __stdcall GetText(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall Move(int32_t, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall MoveEndpointByUnit(int32_t, int32_t, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall MoveEndpointByRange(int32_t, void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall Select() noexcept = 0;
            virtual int32_t __stdcall AddToSelection() noexcept = 0;
            virtual int32_t __stdcall RemoveFromSelection() noexcept = 0;
            virtual int32_t __stdcall ScrollIntoView(bool) noexcept = 0;
            virtual int32_t __stdcall GetChildren(uint32_t* __resultSize, void***) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowContextMenu() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IToggleProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ToggleState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Toggle() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITransformProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanMove(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanResize(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanRotate(bool*) noexcept = 0;
            virtual int32_t __stdcall Move(double, double) noexcept = 0;
            virtual int32_t __stdcall Resize(double, double) noexcept = 0;
            virtual int32_t __stdcall Rotate(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::ITransformProvider2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanZoom(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevel(double*) noexcept = 0;
            virtual int32_t __stdcall get_MaxZoom(double*) noexcept = 0;
            virtual int32_t __stdcall get_MinZoom(double*) noexcept = 0;
            virtual int32_t __stdcall Zoom(double) noexcept = 0;
            virtual int32_t __stdcall ZoomByUnit(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IValueProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsReadOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall SetValue(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Realize() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Provider::IWindowProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsModal(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTopmost(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Maximizable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Minimizable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_InteractionState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VisualState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Close() noexcept = 0;
            virtual int32_t __stdcall SetVisualState(int32_t) noexcept = 0;
            virtual int32_t __stdcall WaitForInputIdle(int32_t, bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) AnnotationTypeId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AnnotationTypeName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Author() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DateTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple) Target() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IAnnotationProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ICustomNavigationProvider
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) NavigateCustom(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ICustomNavigationProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IDockProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::DockPosition) DockPosition() const;
        WINRT_IMPL_AUTO(void) SetDockPosition(Windows::UI::Xaml::Automation::DockPosition const& dockPosition) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IDockProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IDockProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IDragProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsGrabbed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DropEffect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<hstring>) DropEffects() const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>) GetGrabbedItems() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IDragProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IDragProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IDropTargetProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DropEffect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<hstring>) DropEffects() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IDropTargetProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IDropTargetProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::ExpandCollapseState) ExpandCollapseState() const;
        WINRT_IMPL_AUTO(void) Collapse() const;
        WINRT_IMPL_AUTO(void) Expand() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IGridItemProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Column() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ColumnSpan() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple) ContainingGrid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Row() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RowSpan() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IGridItemProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IGridItemProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IGridProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ColumnCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RowCount() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple) GetItem(int32_t row, int32_t column) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IGridProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IGridProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IIRawElementProviderSimple
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IIRawElementProviderSimple<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IInvokeProvider
    {
        WINRT_IMPL_AUTO(void) Invoke() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IInvokeProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IInvokeProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IItemContainerProvider
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple) FindItemByProperty(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& startAfter, Windows::UI::Xaml::Automation::AutomationProperty const& automationProperty, Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IItemContainerProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IItemContainerProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) CurrentView() const;
        WINRT_IMPL_AUTO(com_array<int32_t>) GetSupportedViews() const;
        WINRT_IMPL_AUTO(hstring) GetViewName(int32_t viewId) const;
        WINRT_IMPL_AUTO(void) SetCurrentView(int32_t viewId) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IObjectModelProvider
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetUnderlyingObjectModel() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IObjectModelProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IObjectModelProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsReadOnly() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) LargeChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Maximum() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Minimum() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SmallChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Value() const;
        WINRT_IMPL_AUTO(void) SetValue(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IRangeValueProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IScrollItemProvider
    {
        WINRT_IMPL_AUTO(void) ScrollIntoView() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IScrollItemProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IScrollItemProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HorizontallyScrollable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalScrollPercent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalViewSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) VerticallyScrollable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) VerticalScrollPercent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) VerticalViewSize() const;
        WINRT_IMPL_AUTO(void) Scroll(Windows::UI::Xaml::Automation::ScrollAmount const& horizontalAmount, Windows::UI::Xaml::Automation::ScrollAmount const& verticalAmount) const;
        WINRT_IMPL_AUTO(void) SetScrollPercent(double horizontalPercent, double verticalPercent) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IScrollProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IScrollProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSelected() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple) SelectionContainer() const;
        WINRT_IMPL_AUTO(void) AddToSelection() const;
        WINRT_IMPL_AUTO(void) RemoveFromSelection() const;
        WINRT_IMPL_AUTO(void) Select() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ISelectionProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanSelectMultiple() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSelectionRequired() const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>) GetSelection() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISelectionProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISelectionProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Formula() const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>) GetAnnotationObjects() const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::AnnotationType>) GetAnnotationTypes() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetProvider
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple) GetItemByName(param::hstring const& name) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISpreadsheetProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExtendedProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) FillColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) FillPatternColor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FillPatternStyle() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Shape() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) StyleId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) StyleName() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IStylesProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IStylesProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ISynchronizedInputProvider
    {
        WINRT_IMPL_AUTO(void) Cancel() const;
        WINRT_IMPL_AUTO(void) StartListening(Windows::UI::Xaml::Automation::SynchronizedInputType const& inputType) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ISynchronizedInputProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITableItemProvider
    {
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>) GetColumnHeaderItems() const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>) GetRowHeaderItems() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITableItemProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITableItemProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITableProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::RowOrColumnMajor) RowOrColumnMajor() const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>) GetColumnHeaders() const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>) GetRowHeaders() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITableProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITableProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITextChildProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple) TextContainer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) TextRange() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextChildProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextChildProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITextEditProvider
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) GetActiveComposition() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) GetConversionTarget() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextEditProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextEditProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITextProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) DocumentRange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::SupportedTextSelection) SupportedTextSelection() const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>) GetSelection() const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>) GetVisibleRanges() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) RangeFromChild(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& childElement) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) RangeFromPoint(Windows::Foundation::Point const& screenLocation) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITextProvider2
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) RangeFromAnnotation(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& annotationElement) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) GetCaretRange(bool& isActive) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextProvider2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextProvider2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) Clone() const;
        WINRT_IMPL_AUTO(bool) Compare(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const& textRangeProvider) const;
        WINRT_IMPL_AUTO(int32_t) CompareEndpoints(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& endpoint, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const& textRangeProvider, Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& targetEndpoint) const;
        WINRT_IMPL_AUTO(void) ExpandToEnclosingUnit(Windows::UI::Xaml::Automation::Text::TextUnit const& unit) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) FindAttribute(int32_t attributeId, Windows::Foundation::IInspectable const& value, bool backward) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::ITextRangeProvider) FindText(param::hstring const& text, bool backward, bool ignoreCase) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetAttributeValue(int32_t attributeId) const;
        WINRT_IMPL_AUTO(void) GetBoundingRectangles(com_array<double>& returnValue) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple) GetEnclosingElement() const;
        WINRT_IMPL_AUTO(hstring) GetText(int32_t maxLength) const;
        WINRT_IMPL_AUTO(int32_t) Move(Windows::UI::Xaml::Automation::Text::TextUnit const& unit, int32_t count) const;
        WINRT_IMPL_AUTO(int32_t) MoveEndpointByUnit(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& endpoint, Windows::UI::Xaml::Automation::Text::TextUnit const& unit, int32_t count) const;
        WINRT_IMPL_AUTO(void) MoveEndpointByRange(Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& endpoint, Windows::UI::Xaml::Automation::Provider::ITextRangeProvider const& textRangeProvider, Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint const& targetEndpoint) const;
        WINRT_IMPL_AUTO(void) Select() const;
        WINRT_IMPL_AUTO(void) AddToSelection() const;
        WINRT_IMPL_AUTO(void) RemoveFromSelection() const;
        WINRT_IMPL_AUTO(void) ScrollIntoView(bool alignToTop) const;
        WINRT_IMPL_AUTO(com_array<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple>) GetChildren() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider2
    {
        WINRT_IMPL_AUTO(void) ShowContextMenu() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IToggleProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::ToggleState) ToggleState() const;
        WINRT_IMPL_AUTO(void) Toggle() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IToggleProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IToggleProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanMove() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanResize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanRotate() const;
        WINRT_IMPL_AUTO(void) Move(double x, double y) const;
        WINRT_IMPL_AUTO(void) Resize(double width, double height) const;
        WINRT_IMPL_AUTO(void) Rotate(double degrees) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITransformProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanZoom() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ZoomLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MaxZoom() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MinZoom() const;
        WINRT_IMPL_AUTO(void) Zoom(double zoom) const;
        WINRT_IMPL_AUTO(void) ZoomByUnit(Windows::UI::Xaml::Automation::ZoomUnit const& zoomUnit) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::ITransformProvider2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_ITransformProvider2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IValueProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsReadOnly() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
        WINRT_IMPL_AUTO(void) SetValue(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IValueProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IValueProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IVirtualizedItemProvider
    {
        WINRT_IMPL_AUTO(void) Realize() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IVirtualizedItemProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsModal() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTopmost() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Maximizable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Minimizable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::WindowInteractionState) InteractionState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::WindowVisualState) VisualState() const;
        WINRT_IMPL_AUTO(void) Close() const;
        WINRT_IMPL_AUTO(void) SetVisualState(Windows::UI::Xaml::Automation::WindowVisualState const& state) const;
        WINRT_IMPL_AUTO(bool) WaitForInputIdle(int32_t milliseconds) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Provider::IWindowProvider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Provider_IWindowProvider<D>;
    };
}
#endif
