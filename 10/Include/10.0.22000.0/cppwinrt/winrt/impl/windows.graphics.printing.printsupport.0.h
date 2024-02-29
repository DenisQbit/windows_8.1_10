// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_PrintSupport_0_H
#define WINRT_Windows_Graphics_Printing_PrintSupport_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    struct AppInfo;
}
WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom
{
    struct XmlDocument;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    struct IppPrintDevice;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintTicket
{
    struct WorkflowPrintTicket;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintSupport
{
    enum class SettingsLaunchKind : int32_t
    {
        JobPrintTicket = 0,
        UserDefaultPrintTicket = 1,
    };
    enum class WorkflowPrintTicketValidationStatus : int32_t
    {
        Resolved = 0,
        Conflicting = 1,
        Invalid = 2,
    };
    struct IPrintSupportExtensionSession;
    struct IPrintSupportExtensionTriggerDetails;
    struct IPrintSupportPrintDeviceCapabilitiesChangedEventArgs;
    struct IPrintSupportPrintTicketValidationRequestedEventArgs;
    struct IPrintSupportSessionInfo;
    struct IPrintSupportSettingsActivatedEventArgs;
    struct IPrintSupportSettingsUISession;
    struct PrintSupportExtensionSession;
    struct PrintSupportExtensionTriggerDetails;
    struct PrintSupportPrintDeviceCapabilitiesChangedEventArgs;
    struct PrintSupportPrintTicketValidationRequestedEventArgs;
    struct PrintSupportSessionInfo;
    struct PrintSupportSettingsActivatedEventArgs;
    struct PrintSupportSettingsUISession;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportExtensionSession";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportExtensionTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportPrintDeviceCapabilitiesChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportPrintTicketValidationRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportSessionInfo";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportSettingsActivatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportSettingsUISession";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind> = L"Windows.Graphics.Printing.PrintSupport.SettingsLaunchKind";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus> = L"Windows.Graphics.Printing.PrintSupport.WorkflowPrintTicketValidationStatus";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportExtensionSession";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportExtensionTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintDeviceCapabilitiesChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintTicketValidationRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportSessionInfo";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportSettingsActivatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportSettingsUISession";
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>{ 0xEEA45F1A,0xF4C6,0x54B3,{ 0xA0,0xB8,0xA5,0x59,0x83,0x9A,0xA4,0xC3 } }; // EEA45F1A-F4C6-54B3-A0B8-A559839AA4C3
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>{ 0xAE083711,0x9B09,0x55D1,{ 0xA0,0xAE,0x2A,0x14,0xC5,0xF8,0x3D,0x6A } }; // AE083711-9B09-55D1-A0AE-2A14C5F83D6A
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>{ 0x15969BF0,0x9028,0x5722,{ 0x8A,0x37,0x7D,0x7C,0x34,0xB4,0x1D,0xD6 } }; // 15969BF0-9028-5722-8A37-7D7C34B41DD6
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>{ 0x338E4E69,0xDB55,0x55C7,{ 0x83,0x38,0xEF,0x64,0x68,0x0A,0x8F,0x90 } }; // 338E4E69-DB55-55C7-8338-EF64680A8F90
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>{ 0x852149AF,0x777D,0x53E9,{ 0x9E,0xE9,0x45,0xD3,0xF4,0xB5,0xBE,0x9C } }; // 852149AF-777D-53E9-9EE9-45D3F4B5BE9C
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>{ 0x1E1B565E,0xA013,0x55EA,{ 0x9B,0x8C,0xEE,0xA3,0x9D,0x9F,0xB6,0xC1 } }; // 1E1B565E-A013-55EA-9B8C-EEA39D9FB6C1
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>{ 0xC6DA2251,0x83C3,0x55E4,{ 0xA0,0xF8,0x5D,0xE8,0xB0,0x62,0xAD,0xBF } }; // C6DA2251-83C3-55E4-A0F8-5DE8B062ADBF
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>{ using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails>{ using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs>{ using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs>{ using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>{ using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs>{ using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>{ using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession; };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Printer(void**) noexcept = 0;
            virtual int32_t __stdcall add_PrintTicketValidationRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintTicketValidationRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PrintDeviceCapabilitiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintDeviceCapabilitiesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentPrintDeviceCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall UpdatePrintDeviceCapabilities(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintTicket(void**) noexcept = 0;
            virtual int32_t __stdcall SetPrintTicketValidationStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceAppInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Printer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SessionPrintTicket(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentTitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_LaunchKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall UpdatePrintTicket(void*) noexcept = 0;
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Printers::IppPrintDevice) Printer() const;
        WINRT_IMPL_AUTO(winrt::event_token) PrintTicketValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> const& handler) const;
        using PrintTicketValidationRequested_revoker = impl::event_revoker<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession, &impl::abi_t<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>::remove_PrintTicketValidationRequested>;
        [[nodiscard]] PrintTicketValidationRequested_revoker PrintTicketValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PrintTicketValidationRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PrintDeviceCapabilitiesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> const& handler) const;
        using PrintDeviceCapabilitiesChanged_revoker = impl::event_revoker<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession, &impl::abi_t<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>::remove_PrintDeviceCapabilitiesChanged>;
        [[nodiscard]] PrintDeviceCapabilitiesChanged_revoker PrintDeviceCapabilitiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PrintDeviceCapabilitiesChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) Start() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession) Session() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs
    {
        WINRT_IMPL_AUTO(Windows::Data::Xml::Dom::XmlDocument) GetCurrentPrintDeviceCapabilities() const;
        WINRT_IMPL_AUTO(void) UpdatePrintDeviceCapabilities(Windows::Data::Xml::Dom::XmlDocument const& updatedPdc) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketValidationRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket) PrintTicket() const;
        WINRT_IMPL_AUTO(void) SetPrintTicketValidationStatus(Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus const& status) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketValidationRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSessionInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) SourceAppInfo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Printers::IppPrintDevice) Printer() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSessionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsActivatedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession) Session() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket) SessionPrintTicket() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DocumentTitle() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind) LaunchKind() const;
        WINRT_IMPL_AUTO(void) UpdatePrintTicket(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& printTicket) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo) SessionInfo() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession<D>;
    };
}
#endif
