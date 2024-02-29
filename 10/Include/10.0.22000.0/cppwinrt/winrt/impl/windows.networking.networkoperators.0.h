// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_NetworkOperators_0_H
#define WINRT_Windows_Networking_NetworkOperators_0_H
WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom
{
    struct XmlDocument;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Sms
{
    enum class CellularClass : int32_t;
    struct ISmsMessage;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) IAsyncOperationWithProgress;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct HostName;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity
{
    struct ConnectionProfile;
    struct NetworkAdapter;
    enum class NetworkCostType : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::Networking::NetworkOperators
{
    enum class DataClasses : uint32_t
    {
        None = 0,
        Gprs = 0x1,
        Edge = 0x2,
        Umts = 0x4,
        Hsdpa = 0x8,
        Hsupa = 0x10,
        LteAdvanced = 0x20,
        NewRadioNonStandalone = 0x40,
        NewRadioStandalone = 0x80,
        Cdma1xRtt = 0x10000,
        Cdma1xEvdo = 0x20000,
        Cdma1xEvdoRevA = 0x40000,
        Cdma1xEvdv = 0x80000,
        Cdma3xRtt = 0x100000,
        Cdma1xEvdoRevB = 0x200000,
        CdmaUmb = 0x400000,
        Custom = 0x80000000,
    };
    enum class ESimAuthenticationPreference : int32_t
    {
        OnEntry = 0,
        OnAction = 1,
        Never = 2,
    };
    enum class ESimDiscoverResultKind : int32_t
    {
        None = 0,
        Events = 1,
        ProfileMetadata = 2,
    };
    enum class ESimOperationStatus : int32_t
    {
        Success = 0,
        NotAuthorized = 1,
        NotFound = 2,
        PolicyViolation = 3,
        InsufficientSpaceOnCard = 4,
        ServerFailure = 5,
        ServerNotReachable = 6,
        TimeoutWaitingForUserConsent = 7,
        IncorrectConfirmationCode = 8,
        ConfirmationCodeMaxRetriesExceeded = 9,
        CardRemoved = 10,
        CardBusy = 11,
        Other = 12,
        CardGeneralFailure = 13,
        ConfirmationCodeMissing = 14,
        InvalidMatchingId = 15,
        NoEligibleProfileForThisDevice = 16,
        OperationAborted = 17,
        EidMismatch = 18,
        ProfileNotAvailableForNewBinding = 19,
        ProfileNotReleasedByOperator = 20,
        OperationProhibitedByProfileClass = 21,
        ProfileNotPresent = 22,
        NoCorrespondingRequest = 23,
        TimeoutWaitingForResponse = 24,
        IccidAlreadyExists = 25,
        ProfileProcessingError = 26,
        ServerNotTrusted = 27,
        ProfileDownloadMaxRetriesExceeded = 28,
    };
    enum class ESimProfileClass : int32_t
    {
        Operational = 0,
        Test = 1,
        Provisioning = 2,
    };
    enum class ESimProfileMetadataState : int32_t
    {
        Unknown = 0,
        WaitingForInstall = 1,
        Downloading = 2,
        Installing = 3,
        Expired = 4,
        RejectingDownload = 5,
        NoLongerAvailable = 6,
        DeniedByPolicy = 7,
    };
    enum class ESimProfileState : int32_t
    {
        Unknown = 0,
        Disabled = 1,
        Enabled = 2,
        Deleted = 3,
    };
    enum class ESimState : int32_t
    {
        Unknown = 0,
        Idle = 1,
        Removed = 2,
        Busy = 3,
    };
    enum class ESimWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
    };
    enum class HotspotAuthenticationResponseCode : int32_t
    {
        NoError = 0,
        LoginSucceeded = 50,
        LoginFailed = 100,
        RadiusServerError = 102,
        NetworkAdministratorError = 105,
        LoginAborted = 151,
        AccessGatewayInternalError = 255,
    };
    enum class MobileBroadbandAccountWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopped = 3,
        Aborted = 4,
    };
    enum class MobileBroadbandDeviceType : int32_t
    {
        Unknown = 0,
        Embedded = 1,
        Removable = 2,
        Remote = 3,
    };
    enum class MobileBroadbandModemStatus : int32_t
    {
        Success = 0,
        OtherFailure = 1,
        Busy = 2,
        NoDeviceSupport = 3,
    };
    enum class MobileBroadbandPinFormat : int32_t
    {
        Unknown = 0,
        Numeric = 1,
        Alphanumeric = 2,
    };
    enum class MobileBroadbandPinLockState : int32_t
    {
        Unknown = 0,
        Unlocked = 1,
        PinRequired = 2,
        PinUnblockKeyRequired = 3,
    };
    enum class MobileBroadbandPinType : int32_t
    {
        None = 0,
        Custom = 1,
        Pin1 = 2,
        Pin2 = 3,
        SimPin = 4,
        FirstSimPin = 5,
        NetworkPin = 6,
        NetworkSubsetPin = 7,
        ServiceProviderPin = 8,
        CorporatePin = 9,
        SubsidyLock = 10,
    };
    enum class MobileBroadbandRadioState : int32_t
    {
        Off = 0,
        On = 1,
    };
    enum class MobileBroadbandSlotState : int32_t
    {
        Unmanaged = 0,
        Unknown = 1,
        OffEmpty = 2,
        Off = 3,
        Empty = 4,
        NotReady = 5,
        Active = 6,
        Error = 7,
        ActiveEsim = 8,
        ActiveEsimNoProfile = 9,
    };
    enum class MobileBroadbandUiccAppOperationStatus : int32_t
    {
        Success = 0,
        InvalidUiccFilePath = 1,
        AccessConditionNotHeld = 2,
        UiccBusy = 3,
    };
    enum class NetworkDeviceStatus : int32_t
    {
        DeviceNotReady = 0,
        DeviceReady = 1,
        SimNotInserted = 2,
        BadSim = 3,
        DeviceHardwareFailure = 4,
        AccountNotActivated = 5,
        DeviceLocked = 6,
        DeviceBlocked = 7,
    };
    enum class NetworkOperatorDataUsageNotificationKind : int32_t
    {
        DataUsageProgress = 0,
    };
    enum class NetworkOperatorEventMessageType : int32_t
    {
        Gsm = 0,
        Cdma = 1,
        Ussd = 2,
        DataPlanThresholdReached = 3,
        DataPlanReset = 4,
        DataPlanDeleted = 5,
        ProfileConnected = 6,
        ProfileDisconnected = 7,
        RegisteredRoaming = 8,
        RegisteredHome = 9,
        TetheringEntitlementCheck = 10,
        TetheringOperationalStateChanged = 11,
        TetheringNumberOfClientsChanged = 12,
    };
    enum class NetworkRegistrationState : int32_t
    {
        None = 0,
        Deregistered = 1,
        Searching = 2,
        Home = 3,
        Roaming = 4,
        Partner = 5,
        Denied = 6,
    };
    enum class ProfileMediaType : int32_t
    {
        Wlan = 0,
        Wwan = 1,
    };
    enum class TetheringCapability : int32_t
    {
        Enabled = 0,
        DisabledByGroupPolicy = 1,
        DisabledByHardwareLimitation = 2,
        DisabledByOperator = 3,
        DisabledBySku = 4,
        DisabledByRequiredAppNotInstalled = 5,
        DisabledDueToUnknownCause = 6,
        DisabledBySystemCapability = 7,
    };
    enum class TetheringOperationStatus : int32_t
    {
        Success = 0,
        Unknown = 1,
        MobileBroadbandDeviceOff = 2,
        WiFiDeviceOff = 3,
        EntitlementCheckTimeout = 4,
        EntitlementCheckFailure = 5,
        OperationInProgress = 6,
        BluetoothDeviceOff = 7,
        NetworkLimitedConnectivity = 8,
    };
    enum class TetheringOperationalState : int32_t
    {
        Unknown = 0,
        On = 1,
        Off = 2,
        InTransition = 3,
    };
    enum class TetheringWiFiBand : int32_t
    {
        Auto = 0,
        TwoPointFourGigahertz = 1,
        FiveGigahertz = 2,
    };
    enum class UiccAccessCondition : int32_t
    {
        AlwaysAllowed = 0,
        Pin1 = 1,
        Pin2 = 2,
        Pin3 = 3,
        Pin4 = 4,
        Administrative5 = 5,
        Administrative6 = 6,
        NeverAllowed = 7,
    };
    enum class UiccAppKind : int32_t
    {
        Unknown = 0,
        MF = 1,
        MFSim = 2,
        MFRuim = 3,
        USim = 4,
        CSim = 5,
        ISim = 6,
    };
    enum class UiccAppRecordKind : int32_t
    {
        Unknown = 0,
        Transparent = 1,
        RecordOriented = 2,
    };
    enum class UssdResultCode : int32_t
    {
        NoActionRequired = 0,
        ActionRequired = 1,
        Terminated = 2,
        OtherLocalClient = 3,
        OperationNotSupported = 4,
        NetworkTimeout = 5,
    };
    struct IESim;
    struct IESim2;
    struct IESimAddedEventArgs;
    struct IESimDiscoverEvent;
    struct IESimDiscoverResult;
    struct IESimDownloadProfileMetadataResult;
    struct IESimManagerStatics;
    struct IESimOperationResult;
    struct IESimPolicy;
    struct IESimProfile;
    struct IESimProfileMetadata;
    struct IESimProfilePolicy;
    struct IESimRemovedEventArgs;
    struct IESimServiceInfo;
    struct IESimUpdatedEventArgs;
    struct IESimWatcher;
    struct IFdnAccessManagerStatics;
    struct IHotspotAuthenticationContext;
    struct IHotspotAuthenticationContext2;
    struct IHotspotAuthenticationContextStatics;
    struct IHotspotAuthenticationEventDetails;
    struct IHotspotCredentialsAuthenticationResult;
    struct IKnownCSimFilePathsStatics;
    struct IKnownRuimFilePathsStatics;
    struct IKnownSimFilePathsStatics;
    struct IKnownUSimFilePathsStatics;
    struct IMobileBroadbandAccount;
    struct IMobileBroadbandAccount2;
    struct IMobileBroadbandAccount3;
    struct IMobileBroadbandAccountEventArgs;
    struct IMobileBroadbandAccountStatics;
    struct IMobileBroadbandAccountUpdatedEventArgs;
    struct IMobileBroadbandAccountWatcher;
    struct IMobileBroadbandAntennaSar;
    struct IMobileBroadbandAntennaSarFactory;
    struct IMobileBroadbandCellCdma;
    struct IMobileBroadbandCellGsm;
    struct IMobileBroadbandCellLte;
    struct IMobileBroadbandCellNR;
    struct IMobileBroadbandCellTdscdma;
    struct IMobileBroadbandCellUmts;
    struct IMobileBroadbandCellsInfo;
    struct IMobileBroadbandCellsInfo2;
    struct IMobileBroadbandCurrentSlotIndexChangedEventArgs;
    struct IMobileBroadbandDeviceInformation;
    struct IMobileBroadbandDeviceInformation2;
    struct IMobileBroadbandDeviceInformation3;
    struct IMobileBroadbandDeviceInformation4;
    struct IMobileBroadbandDeviceService;
    struct IMobileBroadbandDeviceServiceCommandResult;
    struct IMobileBroadbandDeviceServiceCommandSession;
    struct IMobileBroadbandDeviceServiceDataReceivedEventArgs;
    struct IMobileBroadbandDeviceServiceDataSession;
    struct IMobileBroadbandDeviceServiceInformation;
    struct IMobileBroadbandDeviceServiceTriggerDetails;
    struct IMobileBroadbandModem;
    struct IMobileBroadbandModem2;
    struct IMobileBroadbandModem3;
    struct IMobileBroadbandModemConfiguration;
    struct IMobileBroadbandModemConfiguration2;
    struct IMobileBroadbandModemIsolation;
    struct IMobileBroadbandModemIsolationFactory;
    struct IMobileBroadbandModemStatics;
    struct IMobileBroadbandNetwork;
    struct IMobileBroadbandNetwork2;
    struct IMobileBroadbandNetwork3;
    struct IMobileBroadbandNetworkRegistrationStateChange;
    struct IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
    struct IMobileBroadbandPco;
    struct IMobileBroadbandPcoDataChangeTriggerDetails;
    struct IMobileBroadbandPin;
    struct IMobileBroadbandPinLockStateChange;
    struct IMobileBroadbandPinLockStateChangeTriggerDetails;
    struct IMobileBroadbandPinManager;
    struct IMobileBroadbandPinOperationResult;
    struct IMobileBroadbandRadioStateChange;
    struct IMobileBroadbandRadioStateChangeTriggerDetails;
    struct IMobileBroadbandSarManager;
    struct IMobileBroadbandSlotInfo;
    struct IMobileBroadbandSlotInfoChangedEventArgs;
    struct IMobileBroadbandSlotManager;
    struct IMobileBroadbandTransmissionStateChangedEventArgs;
    struct IMobileBroadbandUicc;
    struct IMobileBroadbandUiccApp;
    struct IMobileBroadbandUiccAppReadRecordResult;
    struct IMobileBroadbandUiccAppRecordDetailsResult;
    struct IMobileBroadbandUiccAppsResult;
    struct INetworkOperatorDataUsageTriggerDetails;
    struct INetworkOperatorNotificationEventDetails;
    struct INetworkOperatorTetheringAccessPointConfiguration;
    struct INetworkOperatorTetheringAccessPointConfiguration2;
    struct INetworkOperatorTetheringClient;
    struct INetworkOperatorTetheringClientManager;
    struct INetworkOperatorTetheringEntitlementCheck;
    struct INetworkOperatorTetheringManager;
    struct INetworkOperatorTetheringManagerStatics;
    struct INetworkOperatorTetheringManagerStatics2;
    struct INetworkOperatorTetheringManagerStatics3;
    struct INetworkOperatorTetheringManagerStatics4;
    struct INetworkOperatorTetheringOperationResult;
    struct IProvisionFromXmlDocumentResults;
    struct IProvisionedProfile;
    struct IProvisioningAgent;
    struct IProvisioningAgentStaticMethods;
    struct ITetheringEntitlementCheckTriggerDetails;
    struct IUssdMessage;
    struct IUssdMessageFactory;
    struct IUssdReply;
    struct IUssdSession;
    struct IUssdSessionStatics;
    struct ESim;
    struct ESimAddedEventArgs;
    struct ESimDiscoverEvent;
    struct ESimDiscoverResult;
    struct ESimDownloadProfileMetadataResult;
    struct ESimManager;
    struct ESimOperationResult;
    struct ESimPolicy;
    struct ESimProfile;
    struct ESimProfileMetadata;
    struct ESimProfilePolicy;
    struct ESimRemovedEventArgs;
    struct ESimServiceInfo;
    struct ESimUpdatedEventArgs;
    struct ESimWatcher;
    struct FdnAccessManager;
    struct HotspotAuthenticationContext;
    struct HotspotAuthenticationEventDetails;
    struct HotspotCredentialsAuthenticationResult;
    struct KnownCSimFilePaths;
    struct KnownRuimFilePaths;
    struct KnownSimFilePaths;
    struct KnownUSimFilePaths;
    struct MobileBroadbandAccount;
    struct MobileBroadbandAccountEventArgs;
    struct MobileBroadbandAccountUpdatedEventArgs;
    struct MobileBroadbandAccountWatcher;
    struct MobileBroadbandAntennaSar;
    struct MobileBroadbandCellCdma;
    struct MobileBroadbandCellGsm;
    struct MobileBroadbandCellLte;
    struct MobileBroadbandCellNR;
    struct MobileBroadbandCellTdscdma;
    struct MobileBroadbandCellUmts;
    struct MobileBroadbandCellsInfo;
    struct MobileBroadbandCurrentSlotIndexChangedEventArgs;
    struct MobileBroadbandDeviceInformation;
    struct MobileBroadbandDeviceService;
    struct MobileBroadbandDeviceServiceCommandResult;
    struct MobileBroadbandDeviceServiceCommandSession;
    struct MobileBroadbandDeviceServiceDataReceivedEventArgs;
    struct MobileBroadbandDeviceServiceDataSession;
    struct MobileBroadbandDeviceServiceInformation;
    struct MobileBroadbandDeviceServiceTriggerDetails;
    struct MobileBroadbandModem;
    struct MobileBroadbandModemConfiguration;
    struct MobileBroadbandModemIsolation;
    struct MobileBroadbandNetwork;
    struct MobileBroadbandNetworkRegistrationStateChange;
    struct MobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
    struct MobileBroadbandPco;
    struct MobileBroadbandPcoDataChangeTriggerDetails;
    struct MobileBroadbandPin;
    struct MobileBroadbandPinLockStateChange;
    struct MobileBroadbandPinLockStateChangeTriggerDetails;
    struct MobileBroadbandPinManager;
    struct MobileBroadbandPinOperationResult;
    struct MobileBroadbandRadioStateChange;
    struct MobileBroadbandRadioStateChangeTriggerDetails;
    struct MobileBroadbandSarManager;
    struct MobileBroadbandSlotInfo;
    struct MobileBroadbandSlotInfoChangedEventArgs;
    struct MobileBroadbandSlotManager;
    struct MobileBroadbandTransmissionStateChangedEventArgs;
    struct MobileBroadbandUicc;
    struct MobileBroadbandUiccApp;
    struct MobileBroadbandUiccAppReadRecordResult;
    struct MobileBroadbandUiccAppRecordDetailsResult;
    struct MobileBroadbandUiccAppsResult;
    struct NetworkOperatorDataUsageTriggerDetails;
    struct NetworkOperatorNotificationEventDetails;
    struct NetworkOperatorTetheringAccessPointConfiguration;
    struct NetworkOperatorTetheringClient;
    struct NetworkOperatorTetheringManager;
    struct NetworkOperatorTetheringOperationResult;
    struct ProvisionFromXmlDocumentResults;
    struct ProvisionedProfile;
    struct ProvisioningAgent;
    struct TetheringEntitlementCheckTriggerDetails;
    struct UssdMessage;
    struct UssdReply;
    struct UssdSession;
    struct ESimProfileInstallProgress;
    struct ProfileUsage;
}
namespace winrt::impl
{
    template <> struct category<Windows::Networking::NetworkOperators::IESim>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESim2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimAddedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimDiscoverEvent>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimDiscoverResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimOperationResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimPolicy>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimProfile>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimProfileMetadata>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimProfilePolicy>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimServiceInfo>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IESimWatcher>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellNR>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandCurrentSlotIndexChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation4>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModem>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModem2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPco>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPin>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfo>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfoChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IProvisionedProfile>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IProvisioningAgent>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdMessage>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdMessageFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdReply>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdSession>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::IUssdSessionStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESim>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimAddedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimDiscoverEvent>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimDiscoverResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimDownloadProfileMetadataResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimManager>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimOperationResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimPolicy>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfile>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileMetadata>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfilePolicy>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimRemovedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimServiceInfo>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimWatcher>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::FdnAccessManager>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::HotspotAuthenticationContext>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::KnownCSimFilePaths>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::KnownRuimFilePaths>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::KnownSimFilePaths>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::KnownUSimFilePaths>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccount>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellLte>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellNR>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandCurrentSlotIndexChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModem>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModemIsolation>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandNetwork>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPco>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPcoDataChangeTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPin>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinManager>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandSarManager>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandSlotInfo>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandSlotInfoChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandSlotManager>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUicc>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ProvisionedProfile>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ProvisioningAgent>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringEntitlementCheckTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::UssdMessage>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::UssdReply>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::UssdSession>{ using type = class_category; };
    template <> struct category<Windows::Networking::NetworkOperators::DataClasses>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimAuthenticationPreference>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimDiscoverResultKind>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimOperationStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileClass>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileMetadataState>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileState>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimState>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimWatcherStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandDeviceType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandModemStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinFormat>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinLockState>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandPinType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandRadioState>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandSlotState>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkDeviceStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageNotificationKind>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::NetworkRegistrationState>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ProfileMediaType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringCapability>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringOperationStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringOperationalState>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::TetheringWiFiBand>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::UiccAccessCondition>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::UiccAppKind>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::UiccAppRecordKind>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::UssdResultCode>{ using type = enum_category; };
    template <> struct category<Windows::Networking::NetworkOperators::ESimProfileInstallProgress>{ using type = struct_category<int32_t, int32_t>; };
    template <> struct category<Windows::Networking::NetworkOperators::ProfileUsage>{ using type = struct_category<uint32_t, Windows::Foundation::DateTime>; };
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESim> = L"Windows.Networking.NetworkOperators.ESim";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimAddedEventArgs> = L"Windows.Networking.NetworkOperators.ESimAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimDiscoverEvent> = L"Windows.Networking.NetworkOperators.ESimDiscoverEvent";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimDiscoverResult> = L"Windows.Networking.NetworkOperators.ESimDiscoverResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimDownloadProfileMetadataResult> = L"Windows.Networking.NetworkOperators.ESimDownloadProfileMetadataResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimManager> = L"Windows.Networking.NetworkOperators.ESimManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimOperationResult> = L"Windows.Networking.NetworkOperators.ESimOperationResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimPolicy> = L"Windows.Networking.NetworkOperators.ESimPolicy";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimProfile> = L"Windows.Networking.NetworkOperators.ESimProfile";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimProfileMetadata> = L"Windows.Networking.NetworkOperators.ESimProfileMetadata";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimProfilePolicy> = L"Windows.Networking.NetworkOperators.ESimProfilePolicy";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimRemovedEventArgs> = L"Windows.Networking.NetworkOperators.ESimRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimServiceInfo> = L"Windows.Networking.NetworkOperators.ESimServiceInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimUpdatedEventArgs> = L"Windows.Networking.NetworkOperators.ESimUpdatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimWatcher> = L"Windows.Networking.NetworkOperators.ESimWatcher";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::FdnAccessManager> = L"Windows.Networking.NetworkOperators.FdnAccessManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::HotspotAuthenticationContext> = L"Windows.Networking.NetworkOperators.HotspotAuthenticationContext";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails> = L"Windows.Networking.NetworkOperators.HotspotAuthenticationEventDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> = L"Windows.Networking.NetworkOperators.HotspotCredentialsAuthenticationResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::KnownCSimFilePaths> = L"Windows.Networking.NetworkOperators.KnownCSimFilePaths";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::KnownRuimFilePaths> = L"Windows.Networking.NetworkOperators.KnownRuimFilePaths";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::KnownSimFilePaths> = L"Windows.Networking.NetworkOperators.KnownSimFilePaths";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::KnownUSimFilePaths> = L"Windows.Networking.NetworkOperators.KnownUSimFilePaths";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandAccount> = L"Windows.Networking.NetworkOperators.MobileBroadbandAccount";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> = L"Windows.Networking.NetworkOperators.MobileBroadbandAccountEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> = L"Windows.Networking.NetworkOperators.MobileBroadbandAccountUpdatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher> = L"Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcher";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar> = L"Windows.Networking.NetworkOperators.MobileBroadbandAntennaSar";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma> = L"Windows.Networking.NetworkOperators.MobileBroadbandCellCdma";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm> = L"Windows.Networking.NetworkOperators.MobileBroadbandCellGsm";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandCellLte> = L"Windows.Networking.NetworkOperators.MobileBroadbandCellLte";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandCellNR> = L"Windows.Networking.NetworkOperators.MobileBroadbandCellNR";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma> = L"Windows.Networking.NetworkOperators.MobileBroadbandCellTdscdma";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts> = L"Windows.Networking.NetworkOperators.MobileBroadbandCellUmts";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo> = L"Windows.Networking.NetworkOperators.MobileBroadbandCellsInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandCurrentSlotIndexChangedEventArgs> = L"Windows.Networking.NetworkOperators.MobileBroadbandCurrentSlotIndexChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation> = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceInformation";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService> = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceService";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession> = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandSession";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataReceivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession> = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataSession";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceInformation";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails> = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandModem> = L"Windows.Networking.NetworkOperators.MobileBroadbandModem";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> = L"Windows.Networking.NetworkOperators.MobileBroadbandModemConfiguration";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandModemIsolation> = L"Windows.Networking.NetworkOperators.MobileBroadbandModemIsolation";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandNetwork> = L"Windows.Networking.NetworkOperators.MobileBroadbandNetwork";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> = L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChange";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails> = L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPco> = L"Windows.Networking.NetworkOperators.MobileBroadbandPco";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPcoDataChangeTriggerDetails> = L"Windows.Networking.NetworkOperators.MobileBroadbandPcoDataChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPin> = L"Windows.Networking.NetworkOperators.MobileBroadbandPin";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> = L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChange";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails> = L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPinManager> = L"Windows.Networking.NetworkOperators.MobileBroadbandPinManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> = L"Windows.Networking.NetworkOperators.MobileBroadbandPinOperationResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> = L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChange";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails> = L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandSarManager> = L"Windows.Networking.NetworkOperators.MobileBroadbandSarManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandSlotInfo> = L"Windows.Networking.NetworkOperators.MobileBroadbandSlotInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandSlotInfoChangedEventArgs> = L"Windows.Networking.NetworkOperators.MobileBroadbandSlotInfoChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandSlotManager> = L"Windows.Networking.NetworkOperators.MobileBroadbandSlotManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> = L"Windows.Networking.NetworkOperators.MobileBroadbandTransmissionStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandUicc> = L"Windows.Networking.NetworkOperators.MobileBroadbandUicc";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> = L"Windows.Networking.NetworkOperators.MobileBroadbandUiccApp";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> = L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppReadRecordResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> = L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppRecordDetailsResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> = L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppsResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageTriggerDetails> = L"Windows.Networking.NetworkOperators.NetworkOperatorDataUsageTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails> = L"Windows.Networking.NetworkOperators.NetworkOperatorNotificationEventDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration> = L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringAccessPointConfiguration";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> = L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringClient";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager> = L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> = L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringOperationResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> = L"Windows.Networking.NetworkOperators.ProvisionFromXmlDocumentResults";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ProvisionedProfile> = L"Windows.Networking.NetworkOperators.ProvisionedProfile";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ProvisioningAgent> = L"Windows.Networking.NetworkOperators.ProvisioningAgent";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::TetheringEntitlementCheckTriggerDetails> = L"Windows.Networking.NetworkOperators.TetheringEntitlementCheckTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::UssdMessage> = L"Windows.Networking.NetworkOperators.UssdMessage";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::UssdReply> = L"Windows.Networking.NetworkOperators.UssdReply";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::UssdSession> = L"Windows.Networking.NetworkOperators.UssdSession";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::DataClasses> = L"Windows.Networking.NetworkOperators.DataClasses";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimAuthenticationPreference> = L"Windows.Networking.NetworkOperators.ESimAuthenticationPreference";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimDiscoverResultKind> = L"Windows.Networking.NetworkOperators.ESimDiscoverResultKind";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimOperationStatus> = L"Windows.Networking.NetworkOperators.ESimOperationStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimProfileClass> = L"Windows.Networking.NetworkOperators.ESimProfileClass";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimProfileMetadataState> = L"Windows.Networking.NetworkOperators.ESimProfileMetadataState";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimProfileState> = L"Windows.Networking.NetworkOperators.ESimProfileState";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimState> = L"Windows.Networking.NetworkOperators.ESimState";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimWatcherStatus> = L"Windows.Networking.NetworkOperators.ESimWatcherStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode> = L"Windows.Networking.NetworkOperators.HotspotAuthenticationResponseCode";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus> = L"Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcherStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandDeviceType> = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceType";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandModemStatus> = L"Windows.Networking.NetworkOperators.MobileBroadbandModemStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPinFormat> = L"Windows.Networking.NetworkOperators.MobileBroadbandPinFormat";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPinLockState> = L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockState";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandPinType> = L"Windows.Networking.NetworkOperators.MobileBroadbandPinType";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandRadioState> = L"Windows.Networking.NetworkOperators.MobileBroadbandRadioState";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandSlotState> = L"Windows.Networking.NetworkOperators.MobileBroadbandSlotState";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus> = L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppOperationStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkDeviceStatus> = L"Windows.Networking.NetworkOperators.NetworkDeviceStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageNotificationKind> = L"Windows.Networking.NetworkOperators.NetworkOperatorDataUsageNotificationKind";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType> = L"Windows.Networking.NetworkOperators.NetworkOperatorEventMessageType";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::NetworkRegistrationState> = L"Windows.Networking.NetworkOperators.NetworkRegistrationState";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ProfileMediaType> = L"Windows.Networking.NetworkOperators.ProfileMediaType";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::TetheringCapability> = L"Windows.Networking.NetworkOperators.TetheringCapability";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::TetheringOperationStatus> = L"Windows.Networking.NetworkOperators.TetheringOperationStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::TetheringOperationalState> = L"Windows.Networking.NetworkOperators.TetheringOperationalState";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::TetheringWiFiBand> = L"Windows.Networking.NetworkOperators.TetheringWiFiBand";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::UiccAccessCondition> = L"Windows.Networking.NetworkOperators.UiccAccessCondition";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::UiccAppKind> = L"Windows.Networking.NetworkOperators.UiccAppKind";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::UiccAppRecordKind> = L"Windows.Networking.NetworkOperators.UiccAppRecordKind";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::UssdResultCode> = L"Windows.Networking.NetworkOperators.UssdResultCode";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ESimProfileInstallProgress> = L"Windows.Networking.NetworkOperators.ESimProfileInstallProgress";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ProfileUsage> = L"Windows.Networking.NetworkOperators.ProfileUsage";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESim> = L"Windows.Networking.NetworkOperators.IESim";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESim2> = L"Windows.Networking.NetworkOperators.IESim2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimAddedEventArgs> = L"Windows.Networking.NetworkOperators.IESimAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimDiscoverEvent> = L"Windows.Networking.NetworkOperators.IESimDiscoverEvent";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimDiscoverResult> = L"Windows.Networking.NetworkOperators.IESimDiscoverResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult> = L"Windows.Networking.NetworkOperators.IESimDownloadProfileMetadataResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimManagerStatics> = L"Windows.Networking.NetworkOperators.IESimManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimOperationResult> = L"Windows.Networking.NetworkOperators.IESimOperationResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimPolicy> = L"Windows.Networking.NetworkOperators.IESimPolicy";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimProfile> = L"Windows.Networking.NetworkOperators.IESimProfile";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimProfileMetadata> = L"Windows.Networking.NetworkOperators.IESimProfileMetadata";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimProfilePolicy> = L"Windows.Networking.NetworkOperators.IESimProfilePolicy";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimRemovedEventArgs> = L"Windows.Networking.NetworkOperators.IESimRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimServiceInfo> = L"Windows.Networking.NetworkOperators.IESimServiceInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs> = L"Windows.Networking.NetworkOperators.IESimUpdatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IESimWatcher> = L"Windows.Networking.NetworkOperators.IESimWatcher";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics> = L"Windows.Networking.NetworkOperators.IFdnAccessManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext> = L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContext";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2> = L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContext2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics> = L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContextStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails> = L"Windows.Networking.NetworkOperators.IHotspotAuthenticationEventDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult> = L"Windows.Networking.NetworkOperators.IHotspotCredentialsAuthenticationResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics> = L"Windows.Networking.NetworkOperators.IKnownCSimFilePathsStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics> = L"Windows.Networking.NetworkOperators.IKnownRuimFilePathsStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics> = L"Windows.Networking.NetworkOperators.IKnownSimFilePathsStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics> = L"Windows.Networking.NetworkOperators.IKnownUSimFilePathsStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccount> = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2> = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3> = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount3";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs> = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics> = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs> = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountUpdatedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountWatcher";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar> = L"Windows.Networking.NetworkOperators.IMobileBroadbandAntennaSar";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory> = L"Windows.Networking.NetworkOperators.IMobileBroadbandAntennaSarFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma> = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellCdma";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm> = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellGsm";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte> = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellLte";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellNR> = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellNR";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma> = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellTdscdma";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts> = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellUmts";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo> = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellsInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo2> = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellsInfo2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandCurrentSlotIndexChangedEventArgs> = L"Windows.Networking.NetworkOperators.IMobileBroadbandCurrentSlotIndexChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation3";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation4> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation4";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceService";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceCommandResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceCommandSession";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceDataReceivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceDataSession";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceInformation";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails> = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandModem> = L"Windows.Networking.NetworkOperators.IMobileBroadbandModem";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandModem2> = L"Windows.Networking.NetworkOperators.IMobileBroadbandModem2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandModem3> = L"Windows.Networking.NetworkOperators.IMobileBroadbandModem3";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration> = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemConfiguration";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2> = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemConfiguration2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation> = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemIsolation";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory> = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemIsolationFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics> = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork> = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2> = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3> = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork3";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange> = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetworkRegistrationStateChange";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails> = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandPco> = L"Windows.Networking.NetworkOperators.IMobileBroadbandPco";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails> = L"Windows.Networking.NetworkOperators.IMobileBroadbandPcoDataChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandPin> = L"Windows.Networking.NetworkOperators.IMobileBroadbandPin";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange> = L"Windows.Networking.NetworkOperators.IMobileBroadbandPinLockStateChange";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails> = L"Windows.Networking.NetworkOperators.IMobileBroadbandPinLockStateChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager> = L"Windows.Networking.NetworkOperators.IMobileBroadbandPinManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult> = L"Windows.Networking.NetworkOperators.IMobileBroadbandPinOperationResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange> = L"Windows.Networking.NetworkOperators.IMobileBroadbandRadioStateChange";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails> = L"Windows.Networking.NetworkOperators.IMobileBroadbandRadioStateChangeTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager> = L"Windows.Networking.NetworkOperators.IMobileBroadbandSarManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfo> = L"Windows.Networking.NetworkOperators.IMobileBroadbandSlotInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfoChangedEventArgs> = L"Windows.Networking.NetworkOperators.IMobileBroadbandSlotInfoChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager> = L"Windows.Networking.NetworkOperators.IMobileBroadbandSlotManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs> = L"Windows.Networking.NetworkOperators.IMobileBroadbandTransmissionStateChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandUicc> = L"Windows.Networking.NetworkOperators.IMobileBroadbandUicc";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp> = L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccApp";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult> = L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppReadRecordResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult> = L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppRecordDetailsResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult> = L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppsResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails> = L"Windows.Networking.NetworkOperators.INetworkOperatorDataUsageTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails> = L"Windows.Networking.NetworkOperators.INetworkOperatorNotificationEventDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringAccessPointConfiguration";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringAccessPointConfiguration2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringClient";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringClientManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringEntitlementCheck";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManager";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics3";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics4";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult> = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringOperationResult";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults> = L"Windows.Networking.NetworkOperators.IProvisionFromXmlDocumentResults";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IProvisionedProfile> = L"Windows.Networking.NetworkOperators.IProvisionedProfile";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IProvisioningAgent> = L"Windows.Networking.NetworkOperators.IProvisioningAgent";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods> = L"Windows.Networking.NetworkOperators.IProvisioningAgentStaticMethods";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails> = L"Windows.Networking.NetworkOperators.ITetheringEntitlementCheckTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IUssdMessage> = L"Windows.Networking.NetworkOperators.IUssdMessage";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IUssdMessageFactory> = L"Windows.Networking.NetworkOperators.IUssdMessageFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IUssdReply> = L"Windows.Networking.NetworkOperators.IUssdReply";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IUssdSession> = L"Windows.Networking.NetworkOperators.IUssdSession";
    template <> inline constexpr auto& name_v<Windows::Networking::NetworkOperators::IUssdSessionStatics> = L"Windows.Networking.NetworkOperators.IUssdSessionStatics";
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESim>{ 0x6F6E6E26,0xF123,0x437D,{ 0x8C,0xED,0xDC,0x1D,0x2B,0xC0,0xC3,0xA9 } }; // 6F6E6E26-F123-437D-8CED-DC1D2BC0C3A9
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESim2>{ 0xBD4FD0A0,0xC68F,0x56EB,{ 0xB9,0x9B,0x8F,0x34,0xB8,0x10,0x02,0x99 } }; // BD4FD0A0-C68F-56EB-B99B-8F34B8100299
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimAddedEventArgs>{ 0x38BD0A58,0x4D5A,0x4D08,{ 0x8D,0xA7,0xE7,0x3E,0xFF,0x36,0x9D,0xDD } }; // 38BD0A58-4D5A-4D08-8DA7-E73EFF369DDD
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimDiscoverEvent>{ 0xE59AC3E3,0x39BC,0x5F6F,{ 0x93,0x21,0x0D,0x4A,0x18,0x2D,0x26,0x1B } }; // E59AC3E3-39BC-5F6F-9321-0D4A182D261B
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimDiscoverResult>{ 0x56B4BB5E,0xAB2F,0x5AC6,{ 0xB3,0x59,0xDD,0x5A,0x8E,0x23,0x79,0x26 } }; // 56B4BB5E-AB2F-5AC6-B359-DD5A8E237926
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult>{ 0xC4234D9E,0x5AD6,0x426D,{ 0x8D,0x00,0x44,0x34,0xF4,0x49,0xAF,0xEC } }; // C4234D9E-5AD6-426D-8D00-4434F449AFEC
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimManagerStatics>{ 0x0BFA2C0C,0xDF88,0x4631,{ 0xBF,0x04,0xC1,0x2E,0x28,0x1B,0x39,0x62 } }; // 0BFA2C0C-DF88-4631-BF04-C12E281B3962
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimOperationResult>{ 0xA67B63B1,0x309B,0x4E77,{ 0x9E,0x7E,0xCD,0x93,0xF1,0xDD,0xC7,0xB9 } }; // A67B63B1-309B-4E77-9E7E-CD93F1DDC7B9
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimPolicy>{ 0x41E1B99D,0xCF7E,0x4315,{ 0x88,0x2B,0x6F,0x1E,0x74,0xB0,0xD3,0x8F } }; // 41E1B99D-CF7E-4315-882B-6F1E74B0D38F
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimProfile>{ 0xEE1E7880,0x06A9,0x4027,{ 0xB4,0xF8,0xDD,0xB2,0x3D,0x78,0x10,0xE0 } }; // EE1E7880-06A9-4027-B4F8-DDB23D7810E0
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimProfileMetadata>{ 0xED25831F,0x90DB,0x498D,{ 0xA7,0xB4,0xEB,0xCE,0x80,0x7D,0x3C,0x23 } }; // ED25831F-90DB-498D-A7B4-EBCE807D3C23
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimProfilePolicy>{ 0xE6DD0F1D,0x9C5C,0x46C5,{ 0xA2,0x89,0xA9,0x48,0x99,0x9B,0xF0,0x62 } }; // E6DD0F1D-9C5C-46C5-A289-A948999BF062
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimRemovedEventArgs>{ 0xDEC5277B,0x2FD9,0x4ED9,{ 0x83,0x76,0xD9,0xB5,0xE4,0x12,0x78,0xA3 } }; // DEC5277B-2FD9-4ED9-8376-D9B5E41278A3
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimServiceInfo>{ 0xF16AABCF,0x7F59,0x4A51,{ 0x84,0x94,0xBD,0x89,0xD5,0xFF,0x50,0xEE } }; // F16AABCF-7F59-4A51-8494-BD89D5FF50EE
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs>{ 0x4C125CEC,0x508D,0x4B88,{ 0x83,0xCB,0x68,0xBE,0xF8,0x16,0x8D,0x12 } }; // 4C125CEC-508D-4B88-83CB-68BEF8168D12
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IESimWatcher>{ 0xC1F84CEB,0xA28D,0x4FBF,{ 0x97,0x71,0x6E,0x31,0xB8,0x1C,0xCF,0x22 } }; // C1F84CEB-A28D-4FBF-9771-6E31B81CCF22
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>{ 0xF2AA4395,0xF1E6,0x4319,{ 0xAA,0x3E,0x47,0x7C,0xA6,0x4B,0x2B,0xDF } }; // F2AA4395-F1E6-4319-AA3E-477CA64B2BDF
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>{ 0xE756C791,0x1003,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; // E756C791-1003-4DE5-83C7-DE61D88831D0
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>{ 0xE756C791,0x1004,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; // E756C791-1004-4DE5-83C7-DE61D88831D0
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>{ 0xE756C791,0x1002,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; // E756C791-1002-4DE5-83C7-DE61D88831D0
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>{ 0xE756C791,0x1001,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; // E756C791-1001-4DE5-83C7-DE61D88831D0
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>{ 0xE756C791,0x1005,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; // E756C791-1005-4DE5-83C7-DE61D88831D0
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>{ 0xB458AEED,0x49F1,0x4C22,{ 0xB0,0x73,0x96,0xD5,0x11,0xBF,0x9C,0x35 } }; // B458AEED-49F1-4C22-B073-96D511BF9C35
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>{ 0x3883C8B9,0xFF24,0x4571,{ 0xA8,0x67,0x09,0xF9,0x60,0x42,0x6E,0x14 } }; // 3883C8B9-FF24-4571-A867-09F960426E14
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>{ 0x80CD1A63,0x37A5,0x43D3,{ 0x80,0xA3,0xCC,0xD2,0x3E,0x8F,0xEC,0xEE } }; // 80CD1A63-37A5-43D3-80A3-CCD23E8FECEE
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>{ 0x7C34E581,0x1F1B,0x43F4,{ 0x95,0x30,0x8B,0x09,0x2D,0x32,0xD7,0x1F } }; // 7C34E581-1F1B-43F4-9530-8B092D32D71F
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>{ 0x36C24CCD,0xCEE2,0x43E0,{ 0xA6,0x03,0xEE,0x86,0xA3,0x6D,0x65,0x70 } }; // 36C24CCD-CEE2-43E0-A603-EE86A36D6570
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>{ 0x38F52F1C,0x1136,0x4257,{ 0x95,0x9F,0xB6,0x58,0xA3,0x52,0xB6,0xD4 } }; // 38F52F1C-1136-4257-959F-B658A352B6D4
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>{ 0x092A1E21,0x9379,0x4B9B,{ 0xAD,0x31,0xD5,0xFE,0xE2,0xF7,0x48,0xC6 } }; // 092A1E21-9379-4B9B-AD31-D5FEE2F748C6
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>{ 0x3853C880,0x77DE,0x4C04,{ 0xBE,0xAD,0xA1,0x23,0xB0,0x8C,0x9F,0x59 } }; // 3853C880-77DE-4C04-BEAD-A123B08C9F59
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>{ 0xAA7F4D24,0xAFC1,0x4FC8,{ 0xAE,0x9A,0xA9,0x17,0x53,0x10,0xFA,0xAD } }; // AA7F4D24-AFC1-4FC8-AE9A-A9175310FAAD
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>{ 0x7BC31D88,0xA6BD,0x49E1,{ 0x80,0xAB,0x6B,0x91,0x35,0x4A,0x57,0xD4 } }; // 7BC31D88-A6BD-49E1-80AB-6B91354A57D4
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>{ 0x6BF3335E,0x23B5,0x449F,{ 0x92,0x8D,0x5E,0x0D,0x3E,0x04,0x47,0x1D } }; // 6BF3335E-23B5-449F-928D-5E0D3E04471D
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>{ 0xB9AF4B7E,0xCBF9,0x4109,{ 0x90,0xBE,0x5C,0x06,0xBF,0xD5,0x13,0xB6 } }; // B9AF4B7E-CBF9-4109-90BE-5C06BFD513B6
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory>{ 0xA91E1716,0xC04D,0x4A21,{ 0x86,0x98,0x14,0x59,0xDC,0x67,0x2C,0x6E } }; // A91E1716-C04D-4A21-8698-1459DC672C6E
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>{ 0x0601B3B4,0x411A,0x4F2E,{ 0x82,0x87,0x76,0xF5,0x65,0x0C,0x60,0xCD } }; // 0601B3B4-411A-4F2E-8287-76F5650C60CD
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>{ 0xCC917F06,0x7EE0,0x47B8,{ 0x9E,0x1F,0xC3,0xB4,0x8D,0xF9,0xDF,0x5B } }; // CC917F06-7EE0-47B8-9E1F-C3B48DF9DF5B
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>{ 0x9197C87B,0x2B78,0x456D,{ 0x8B,0x53,0xAA,0xA2,0x5D,0x0A,0xF7,0x41 } }; // 9197C87B-2B78-456D-8B53-AAA25D0AF741
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellNR>{ 0xA13F0DEB,0x66FC,0x4B4B,{ 0x83,0xA9,0xA4,0x87,0xA3,0xA5,0xA0,0xA6 } }; // A13F0DEB-66FC-4B4B-83A9-A487A3A5A0A6
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>{ 0x0EDA1655,0xDB0E,0x4182,{ 0x8C,0xDA,0xCC,0x41,0x9A,0x7B,0xDE,0x08 } }; // 0EDA1655-DB0E-4182-8CDA-CC419A7BDE08
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>{ 0x77B4B5AE,0x49C8,0x4F15,{ 0xB2,0x85,0x4C,0x26,0xA7,0xF6,0x72,0x15 } }; // 77B4B5AE-49C8-4F15-B285-4C26A7F67215
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>{ 0x89A9562A,0xE472,0x4DA5,{ 0x92,0x9C,0xDE,0x61,0x71,0x1D,0xD2,0x61 } }; // 89A9562A-E472-4DA5-929C-DE61711DD261
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo2>{ 0x66205912,0xB89F,0x4E12,{ 0xBB,0xB6,0xD5,0xCF,0x09,0xA8,0x20,0xCA } }; // 66205912-B89F-4E12-BBB6-D5CF09A820CA
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandCurrentSlotIndexChangedEventArgs>{ 0xF718B184,0xC370,0x5FD4,{ 0xA6,0x70,0x18,0x46,0xCB,0x9B,0xCE,0x47 } }; // F718B184-C370-5FD4-A670-1846CB9BCE47
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>{ 0xE6D08168,0xE381,0x4C6E,{ 0x9B,0xE8,0xFE,0x15,0x69,0x69,0xA4,0x46 } }; // E6D08168-E381-4C6E-9BE8-FE156969A446
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>{ 0x2E467AF1,0xF932,0x4737,{ 0xA7,0x22,0x03,0xBA,0x72,0x37,0x0C,0xB8 } }; // 2E467AF1-F932-4737-A722-03BA72370CB8
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>{ 0xE08BB4BD,0x5D30,0x4B5A,{ 0x92,0xCC,0xD5,0x4D,0xF8,0x81,0xD4,0x9E } }; // E08BB4BD-5D30-4B5A-92CC-D54DF881D49E
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation4>{ 0x263F3152,0x7B9D,0x582C,{ 0xB1,0x7C,0xF8,0x0A,0x60,0xB5,0x00,0x31 } }; // 263F3152-7B9D-582C-B17C-F80A60B50031
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>{ 0x22BE1A52,0xBD80,0x40AC,{ 0x8E,0x1F,0x2E,0x07,0x83,0x6A,0x3D,0xBD } }; // 22BE1A52-BD80-40AC-8E1F-2E07836A3DBD
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>{ 0xB0F46ABB,0x94D6,0x44B9,{ 0xA5,0x38,0xF0,0x81,0x0B,0x64,0x53,0x89 } }; // B0F46ABB-94D6-44B9-A538-F0810B645389
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>{ 0xFC098A45,0x913B,0x4914,{ 0xB6,0xC3,0xAE,0x63,0x04,0x59,0x3E,0x75 } }; // FC098A45-913B-4914-B6C3-AE6304593E75
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>{ 0xB6AA13DE,0x1380,0x40E3,{ 0x86,0x18,0x73,0xCB,0xCA,0x48,0x13,0x8C } }; // B6AA13DE-1380-40E3-8618-73CBCA48138C
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>{ 0xDAD62333,0x8BCF,0x4289,{ 0x8A,0x37,0x04,0x5C,0x21,0x69,0x48,0x6A } }; // DAD62333-8BCF-4289-8A37-045C2169486A
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>{ 0x53D69B5B,0xC4ED,0x45F0,{ 0x80,0x3A,0xD9,0x41,0x7A,0x6D,0x98,0x46 } }; // 53D69B5B-C4ED-45F0-803A-D9417A6D9846
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>{ 0x4A055B70,0xB9AE,0x4458,{ 0x92,0x41,0xA6,0xA5,0xFB,0xF1,0x8A,0x0C } }; // 4A055B70-B9AE-4458-9241-A6A5FBF18A0C
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandModem>{ 0xD0356912,0xE9F9,0x4F67,{ 0xA0,0x3D,0x43,0x18,0x9A,0x31,0x6B,0xF1 } }; // D0356912-E9F9-4F67-A03D-43189A316BF1
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandModem2>{ 0x12862B28,0xB9EB,0x4EE2,{ 0xBB,0xE3,0x71,0x1F,0x53,0xEE,0xA3,0x73 } }; // 12862B28-B9EB-4EE2-BBE3-711F53EEA373
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>{ 0xE9FEC6EA,0x2F34,0x4582,{ 0x91,0x02,0xC3,0x14,0xD2,0xA8,0x7E,0xEC } }; // E9FEC6EA-2F34-4582-9102-C314D2A87EEC
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>{ 0xFCE035A3,0xD6CD,0x4320,{ 0xB9,0x82,0xBE,0x9D,0x3E,0xC7,0x89,0x0F } }; // FCE035A3-D6CD-4320-B982-BE9D3EC7890F
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>{ 0x320FF5C5,0xE460,0x42AE,{ 0xAA,0x51,0x69,0x62,0x1E,0x7A,0x44,0x77 } }; // 320FF5C5-E460-42AE-AA51-69621E7A4477
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation>{ 0xB5618FEC,0xE661,0x4330,{ 0x9B,0xB4,0x34,0x80,0x21,0x2E,0xC3,0x54 } }; // B5618FEC-E661-4330-9BB4-3480212EC354
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory>{ 0x21D7EC58,0xC2B1,0x4C2F,{ 0xA0,0x30,0x72,0x82,0x0A,0x24,0xEC,0xD9 } }; // 21D7EC58-C2B1-4C2F-A030-72820A24ECD9
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>{ 0xF99ED637,0xD6F1,0x4A78,{ 0x8C,0xBC,0x64,0x21,0xA6,0x50,0x63,0xC8 } }; // F99ED637-D6F1-4A78-8CBC-6421A65063C8
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>{ 0xCB63928C,0x0309,0x4CB6,{ 0xA8,0xC1,0x6A,0x5A,0x3C,0x8E,0x1F,0xF6 } }; // CB63928C-0309-4CB6-A8C1-6A5A3C8E1FF6
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>{ 0x5A55DB22,0x62F7,0x4BDD,{ 0xBA,0x1D,0x47,0x74,0x41,0x96,0x0B,0xA0 } }; // 5A55DB22-62F7-4BDD-BA1D-477441960BA0
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>{ 0x33670A8A,0xC7EF,0x444C,{ 0xAB,0x6C,0xDF,0x7E,0xF7,0xA3,0x90,0xFE } }; // 33670A8A-C7EF-444C-AB6C-DF7EF7A390FE
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>{ 0xBEAF94E1,0x960F,0x49B4,{ 0xA0,0x8D,0x7D,0x85,0xE9,0x68,0xC7,0xEC } }; // BEAF94E1-960F-49B4-A08D-7D85E968C7EC
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ 0x89135CFF,0x28B8,0x46AA,{ 0xB1,0x37,0x1C,0x4B,0x0F,0x21,0xED,0xFE } }; // 89135CFF-28B8-46AA-B137-1C4B0F21EDFE
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandPco>{ 0xD4E4FCBE,0xE3A3,0x43C5,{ 0xA8,0x7B,0x6C,0x86,0xD2,0x29,0xD7,0xFA } }; // D4E4FCBE-E3A3-43C5-A87B-6C86D229D7FA
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails>{ 0x263F5114,0x64E0,0x4493,{ 0x90,0x9B,0x2D,0x14,0xA0,0x19,0x62,0xB1 } }; // 263F5114-64E0-4493-909B-2D14A01962B1
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandPin>{ 0xE661D709,0xE779,0x45BF,{ 0x82,0x81,0x75,0x32,0x3D,0xF9,0xE3,0x21 } }; // E661D709-E779-45BF-8281-75323DF9E321
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>{ 0xBE16673E,0x1F04,0x4F95,{ 0x8B,0x90,0xE7,0xF5,0x59,0xDD,0xE7,0xE5 } }; // BE16673E-1F04-4F95-8B90-E7F559DDE7E5
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>{ 0xD338C091,0x3E91,0x4D38,{ 0x90,0x36,0xAE,0xE8,0x3A,0x6E,0x79,0xAD } }; // D338C091-3E91-4D38-9036-AEE83A6E79AD
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>{ 0x83567EDD,0x6E1F,0x4B9B,{ 0xA4,0x13,0x2B,0x1F,0x50,0xCC,0x36,0xDF } }; // 83567EDD-6E1F-4B9B-A413-2B1F50CC36DF
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>{ 0x11DDDC32,0x31E7,0x49F5,{ 0xB6,0x63,0x12,0x3D,0x3B,0xEF,0x03,0x62 } }; // 11DDDC32-31E7-49F5-B663-123D3BEF0362
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>{ 0xB054A561,0x9833,0x4AED,{ 0x97,0x17,0x43,0x48,0xB2,0x1A,0x24,0xB3 } }; // B054A561-9833-4AED-9717-4348B21A24B3
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>{ 0x71301ACE,0x093C,0x42C6,{ 0xB0,0xDB,0xAD,0x1F,0x75,0xA6,0x54,0x45 } }; // 71301ACE-093C-42C6-B0DB-AD1F75A65445
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>{ 0xE5B26833,0x967E,0x40C9,{ 0xA4,0x85,0x19,0xC0,0xDD,0x20,0x9E,0x22 } }; // E5B26833-967E-40C9-A485-19C0DD209E22
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfo>{ 0xBD350B32,0x882E,0x542A,{ 0xB1,0x7D,0x0B,0xB1,0xB4,0x9B,0xAE,0x9E } }; // BD350B32-882E-542A-B17D-0BB1B49BAE9E
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfoChangedEventArgs>{ 0x3158839F,0x950C,0x54CE,{ 0xA4,0x8D,0xBA,0x45,0x29,0xB4,0x8F,0x0F } }; // 3158839F-950C-54CE-A48D-BA4529B48F0F
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager>{ 0xEBA07CD6,0x2019,0x5F81,{ 0xA2,0x94,0xCC,0x36,0x4A,0x11,0xD0,0xB2 } }; // EBA07CD6-2019-5F81-A294-CC364A11D0B2
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>{ 0x612E3875,0x040A,0x4F99,{ 0xA4,0xF9,0x61,0xD7,0xC3,0x2D,0xA1,0x29 } }; // 612E3875-040A-4F99-A4F9-61D7C32DA129
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>{ 0xE634F691,0x525A,0x4CE2,{ 0x8F,0xCE,0xAA,0x41,0x62,0x57,0x91,0x54 } }; // E634F691-525A-4CE2-8FCE-AA4162579154
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>{ 0x4D170556,0x98A1,0x43DD,{ 0xB2,0xEC,0x50,0xC9,0x0C,0xF2,0x48,0xDF } }; // 4D170556-98A1-43DD-B2EC-50C90CF248DF
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>{ 0x64C95285,0x358E,0x47C5,{ 0x82,0x49,0x69,0x5F,0x38,0x3B,0x2B,0xDB } }; // 64C95285-358E-47C5-8249-695F383B2BDB
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>{ 0xD919682F,0xBE14,0x4934,{ 0x98,0x1D,0x2F,0x57,0xB9,0xED,0x83,0xE6 } }; // D919682F-BE14-4934-981D-2F57B9ED83E6
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>{ 0x744930EB,0x8157,0x4A41,{ 0x84,0x94,0x6B,0xF5,0x4C,0x9B,0x1D,0x2B } }; // 744930EB-8157-4A41-8494-6BF54C9B1D2B
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails>{ 0x50E3126D,0xA465,0x4EEB,{ 0x93,0x17,0x28,0xA1,0x67,0x63,0x0C,0xEA } }; // 50E3126D-A465-4EEB-9317-28A167630CEA
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>{ 0xBC68A9D1,0x82E1,0x4488,{ 0x9F,0x2C,0x12,0x76,0xC2,0x46,0x8F,0xAC } }; // BC68A9D1-82E1-4488-9F2C-1276C2468FAC
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>{ 0x0BCC0284,0x412E,0x403D,{ 0xAC,0xC6,0xB7,0x57,0xE3,0x47,0x74,0xA4 } }; // 0BCC0284-412E-403D-ACC6-B757E34774A4
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>{ 0xB1809142,0x7238,0x59A0,{ 0x92,0x8B,0x74,0xAB,0x46,0xFD,0x64,0xB6 } }; // B1809142-7238-59A0-928B-74AB46FD64B6
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>{ 0x709D254C,0x595F,0x4847,{ 0xBB,0x30,0x64,0x69,0x35,0x54,0x29,0x18 } }; // 709D254C-595F-4847-BB30-646935542918
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>{ 0x91B14016,0x8DCA,0x4225,{ 0xBB,0xED,0xEE,0xF8,0xB8,0xD7,0x18,0xD7 } }; // 91B14016-8DCA-4225-BBED-EEF8B8D718D7
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>{ 0x0108916D,0x9E9A,0x4AF6,{ 0x8D,0xA3,0x60,0x49,0x3B,0x19,0xC2,0x04 } }; // 0108916D-9E9A-4AF6-8DA3-60493B19C204
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>{ 0xD45A8DA0,0x0E86,0x4D98,{ 0x8B,0xA4,0xDD,0x70,0xD4,0xB7,0x64,0xD3 } }; // D45A8DA0-0E86-4D98-8BA4-DD70D4B764D3
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>{ 0x3EBCBACC,0xF8C3,0x405C,{ 0x99,0x64,0x70,0xA1,0xEE,0xAB,0xE1,0x94 } }; // 3EBCBACC-F8C3-405C-9964-70A1EEABE194
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>{ 0x5B235412,0x35F0,0x49E7,{ 0x9B,0x08,0x16,0xD2,0x78,0xFB,0xAA,0x42 } }; // 5B235412-35F0-49E7-9B08-16D278FBAA42
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>{ 0x8FDAADB6,0x4AF9,0x4F21,{ 0x9B,0x58,0xD5,0x3E,0x9F,0x24,0x23,0x1E } }; // 8FDAADB6-4AF9-4F21-9B58-D53E9F24231E
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4>{ 0xB3B9F9D0,0xEBFF,0x46A4,{ 0xA8,0x47,0xD6,0x63,0xD8,0xB0,0x97,0x7E } }; // B3B9F9D0-EBFF-46A4-A847-D663D8B0977E
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>{ 0xEBD203A1,0x01BA,0x476D,{ 0xB4,0xB3,0xBF,0x3D,0x12,0xC8,0xF8,0x0C } }; // EBD203A1-01BA-476D-B4B3-BF3D12C8F80C
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>{ 0x217700E0,0x8203,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } }; // 217700E0-8203-11DF-ADB9-F4CE462D9137
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IProvisionedProfile>{ 0x217700E0,0x8202,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } }; // 217700E0-8202-11DF-ADB9-F4CE462D9137
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IProvisioningAgent>{ 0x217700E0,0x8201,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } }; // 217700E0-8201-11DF-ADB9-F4CE462D9137
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>{ 0x217700E0,0x8101,0x11DF,{ 0xAD,0xB9,0xF4,0xCE,0x46,0x2D,0x91,0x37 } }; // 217700E0-8101-11DF-ADB9-F4CE462D9137
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails>{ 0x03C65E9D,0x5926,0x41F3,{ 0xA9,0x4E,0xB5,0x09,0x26,0xFC,0x42,0x1B } }; // 03C65E9D-5926-41F3-A94E-B50926FC421B
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IUssdMessage>{ 0x2F9ACF82,0x2004,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; // 2F9ACF82-2004-4D5D-BF81-2ABA1B4BE4A8
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IUssdMessageFactory>{ 0x2F9ACF82,0x1003,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; // 2F9ACF82-1003-4D5D-BF81-2ABA1B4BE4A8
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IUssdReply>{ 0x2F9ACF82,0x2005,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; // 2F9ACF82-2005-4D5D-BF81-2ABA1B4BE4A8
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IUssdSession>{ 0x2F9ACF82,0x2002,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; // 2F9ACF82-2002-4D5D-BF81-2ABA1B4BE4A8
    template <> inline constexpr guid guid_v<Windows::Networking::NetworkOperators::IUssdSessionStatics>{ 0x2F9ACF82,0x1001,0x4D5D,{ 0xBF,0x81,0x2A,0xBA,0x1B,0x4B,0xE4,0xA8 } }; // 2F9ACF82-1001-4D5D-BF81-2ABA1B4BE4A8
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESim>{ using type = Windows::Networking::NetworkOperators::IESim; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimAddedEventArgs>{ using type = Windows::Networking::NetworkOperators::IESimAddedEventArgs; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimDiscoverEvent>{ using type = Windows::Networking::NetworkOperators::IESimDiscoverEvent; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimDiscoverResult>{ using type = Windows::Networking::NetworkOperators::IESimDiscoverResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimDownloadProfileMetadataResult>{ using type = Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimOperationResult>{ using type = Windows::Networking::NetworkOperators::IESimOperationResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimPolicy>{ using type = Windows::Networking::NetworkOperators::IESimPolicy; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimProfile>{ using type = Windows::Networking::NetworkOperators::IESimProfile; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimProfileMetadata>{ using type = Windows::Networking::NetworkOperators::IESimProfileMetadata; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimProfilePolicy>{ using type = Windows::Networking::NetworkOperators::IESimProfilePolicy; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimRemovedEventArgs>{ using type = Windows::Networking::NetworkOperators::IESimRemovedEventArgs; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimServiceInfo>{ using type = Windows::Networking::NetworkOperators::IESimServiceInfo; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimUpdatedEventArgs>{ using type = Windows::Networking::NetworkOperators::IESimUpdatedEventArgs; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ESimWatcher>{ using type = Windows::Networking::NetworkOperators::IESimWatcher; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::HotspotAuthenticationContext>{ using type = Windows::Networking::NetworkOperators::IHotspotAuthenticationContext; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>{ using type = Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>{ using type = Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccount>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccount; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellLte>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellLte; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellNR>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellNR; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandCurrentSlotIndexChangedEventArgs>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandCurrentSlotIndexChangedEventArgs; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandModem>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandModem; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandModemIsolation>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandNetwork>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandNetwork; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPco>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPco; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPcoDataChangeTriggerDetails>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPin>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPin; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinManager>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinManager; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandSarManager>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandSarManager; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandSlotInfo>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfo; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandSlotInfoChangedEventArgs>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfoChangedEventArgs; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandSlotManager>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUicc>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUicc; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>{ using type = Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorDataUsageTriggerDetails>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>{ using type = Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>{ using type = Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ProvisionedProfile>{ using type = Windows::Networking::NetworkOperators::IProvisionedProfile; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::ProvisioningAgent>{ using type = Windows::Networking::NetworkOperators::IProvisioningAgent; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::TetheringEntitlementCheckTriggerDetails>{ using type = Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::UssdMessage>{ using type = Windows::Networking::NetworkOperators::IUssdMessage; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::UssdReply>{ using type = Windows::Networking::NetworkOperators::IUssdReply; };
    template <> struct default_interface<Windows::Networking::NetworkOperators::UssdSession>{ using type = Windows::Networking::NetworkOperators::IUssdSession; };
    template <> struct abi<Windows::Networking::NetworkOperators::IESim>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AvailableMemoryInBytes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Eid(void**) noexcept = 0;
            virtual int32_t __stdcall get_FirmwareVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_MobileBroadbandModemDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Policy(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteProfileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DownloadProfileMetadataAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ResetAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_ProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProfileChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESim2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Discover(void**) noexcept = 0;
            virtual int32_t __stdcall DiscoverWithServerAddressAndMatchingId(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall DiscoverAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DiscoverWithServerAddressAndMatchingIdAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ESim(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimDiscoverEvent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MatchingId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RspServerAddress(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimDiscoverResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Events(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProfileMetadata(void**) noexcept = 0;
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Result(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProfileMetadata(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceInfo(void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateESimWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall add_ServiceInfoChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServiceInfoChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimOperationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimPolicy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldEnableManagingUi(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Class(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Nickname(void**) noexcept = 0;
            virtual int32_t __stdcall get_Policy(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderIcon(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall DisableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall EnableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetNicknameAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimProfileMetadata>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsConfirmationCodeRequired(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Policy(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderIcon(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall DenyInstallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ConfirmInstallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ConfirmInstallWithConfirmationCodeAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PostponeInstallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimProfilePolicy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanDelete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanDisable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsManagedByEnterprise(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ESim(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimServiceInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AuthenticationPreference(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsESimUiEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ESim(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IESimWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestUnlockAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WirelessNetworkId(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkAdapter(void**) noexcept = 0;
            virtual int32_t __stdcall get_RedirectMessageUrl(void**) noexcept = 0;
            virtual int32_t __stdcall get_RedirectMessageXml(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationUrl(void**) noexcept = 0;
            virtual int32_t __stdcall IssueCredentials(void*, void*, void*, bool) noexcept = 0;
            virtual int32_t __stdcall AbortAuthentication(bool) noexcept = 0;
            virtual int32_t __stdcall SkipAuthentication() noexcept = 0;
            virtual int32_t __stdcall TriggerAttentionRequired(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IssueCredentialsAsync(void*, void*, void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetAuthenticationContext(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EventToken(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasNetworkErrorOccurred(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ResponseCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogoffUrl(void**) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationReplyXml(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EFSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid2(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EFSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid2(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EFOns(void**) noexcept = 0;
            virtual int32_t __stdcall get_EFSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid2(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EFSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_EFOpl(void**) noexcept = 0;
            virtual int32_t __stdcall get_EFPnn(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gid2(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceProviderGuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentNetwork(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentDeviceInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetConnectionProfiles(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AccountExperienceUrl(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AvailableNetworkAccountIds(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNetworkAccountId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasDeviceInformationChanged(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNetworkChanged(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AccountAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccountAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AccountUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccountUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AccountRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AccountRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AntennaIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SarBackoffIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithIndex(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BaseStationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_BaseStationPNCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_BaseStationLatitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_BaseStationLongitude(void**) noexcept = 0;
            virtual int32_t __stdcall get_BaseStationLastBroadcastGpsTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PilotSignalStrengthInDB(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BaseStationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocationAreaCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReceivedSignalStrengthInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimingAdvanceInBitPeriods(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalCellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceSignalReceivedPowerInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceSignalReceivedQualityInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimingAdvanceInBitPeriods(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrackingAreaCode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellNR>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalCellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceSignalReceivedPowerInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceSignalReceivedQualityInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimingAdvanceInNanoseconds(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrackingAreaCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_SignalToNoiseRatioInDB(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellParameterId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocationAreaCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_PathLossInDB(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReceivedSignalCodePowerInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimingAdvanceInBitPeriods(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CellId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocationAreaCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_PathLossInDB(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryScramblingCode(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReceivedSignalCodePowerInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall get_SignalToNoiseRatioInDB(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NeighboringCellsCdma(void**) noexcept = 0;
            virtual int32_t __stdcall get_NeighboringCellsGsm(void**) noexcept = 0;
            virtual int32_t __stdcall get_NeighboringCellsLte(void**) noexcept = 0;
            virtual int32_t __stdcall get_NeighboringCellsTdscdma(void**) noexcept = 0;
            virtual int32_t __stdcall get_NeighboringCellsUmts(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsCdma(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsGsm(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsLte(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsTdscdma(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsUmts(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NeighboringCellsNR(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServingCellsNR(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandCurrentSlotIndexChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentSlotIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkDeviceStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Manufacturer(void**) noexcept = 0;
            virtual int32_t __stdcall get_Model(void**) noexcept = 0;
            virtual int32_t __stdcall get_FirmwareInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellularClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DataClasses(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CustomDataClass(void**) noexcept = 0;
            virtual int32_t __stdcall get_MobileEquipmentId(void**) noexcept = 0;
            virtual int32_t __stdcall get_TelephoneNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall get_SubscriberId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SimIccId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentRadioState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_Revision(void**) noexcept = 0;
            virtual int32_t __stdcall get_SerialNumber(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SimSpn(void**) noexcept = 0;
            virtual int32_t __stdcall get_SimPnn(void**) noexcept = 0;
            virtual int32_t __stdcall get_SimGid1(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SlotManager(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceServiceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedCommands(void**) noexcept = 0;
            virtual int32_t __stdcall OpenDataSession(void**) noexcept = 0;
            virtual int32_t __stdcall OpenCommandSession(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StatusCode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ResponseData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendQueryCommandAsync(uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendSetCommandAsync(uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CloseSession() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReceivedData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall WriteDataAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CloseSession() noexcept = 0;
            virtual int32_t __stdcall add_DataReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DataReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceServiceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_IsDataReadSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDataWriteSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceServiceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ReceivedData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentAccount(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxDeviceServiceCommandSizeInBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxDeviceServiceDataSizeInBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceServices(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceService(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall get_IsResetSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall ResetAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentConfigurationAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentNetwork(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModem2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetIsPassthroughEnabledAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetIsPassthroughEnabledAsync(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetPcoAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsInEmergencyCallMode(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsInEmergencyCallModeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsInEmergencyCallModeChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uicc(void**) noexcept = 0;
            virtual int32_t __stdcall get_HomeProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_HomeProviderName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SarManager(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddAllowedHost(void*) noexcept = 0;
            virtual int32_t __stdcall AddAllowedHostRange(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ApplyConfigurationAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ClearConfigurationAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAdapter(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkRegistrationState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RegistrationNetworkError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PacketAttachNetworkError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ActivationNetworkError(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AccessPointName(void**) noexcept = 0;
            virtual int32_t __stdcall get_RegisteredDataClass(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RegisteredProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RegisteredProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall ShowConnectionUI() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetVoiceCallSupportAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_RegistrationUiccApps(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCellsInfoAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Network(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkRegistrationStateChanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPco>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsComplete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UpdatedData(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPin>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LockState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinLength(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AttemptsRemaining(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall EnableAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DisableAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall EnterAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ChangeAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnblockAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PinType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PinLockState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinLockStateChanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedPins(void**) noexcept = 0;
            virtual int32_t __stdcall GetPin(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSuccessful(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AttemptsRemaining(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RadioState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RadioStateChanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBackoffEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsWiFiHardwareIntegrated(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSarControlledByHardware(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Antennas(void**) noexcept = 0;
            virtual int32_t __stdcall get_HysteresisTimerPeriod(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_TransmissionStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransmissionStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall EnableBackoffAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisableBackoffAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetConfigurationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RevertSarToHardwareControlAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SetTransmissionStateChangedHysteresisAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsTransmittingAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StartTransmissionStateMonitoring() noexcept = 0;
            virtual int32_t __stdcall StopTransmissionStateMonitoring() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Index(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfoChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SlotInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SlotInfos(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentSlotIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetCurrentSlot(int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetCurrentSlotAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_SlotInfoChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SlotInfoChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CurrentSlotIndexChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentSlotIndexChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTransmitting(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SimIccId(void**) noexcept = 0;
            virtual int32_t __stdcall GetUiccAppsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetRecordDetailsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReadRecordAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RecordCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RecordSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReadAccessCondition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_WriteAccessCondition(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UiccApps(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NotificationKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NotificationType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_EncodingType(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
            virtual int32_t __stdcall get_RuleId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SmsMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Ssid(void**) noexcept = 0;
            virtual int32_t __stdcall put_Ssid(void*) noexcept = 0;
            virtual int32_t __stdcall get_Passphrase(void**) noexcept = 0;
            virtual int32_t __stdcall put_Passphrase(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsBandSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsBandSupportedAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Band(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Band(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MacAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_HostNames(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTetheringClients(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AuthorizeTethering(bool, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxClientCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ClientCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TetheringOperationalState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCurrentAccessPointConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall ConfigureAccessPointAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartTetheringAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopTetheringAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTetheringCapability(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateFromNetworkAccountId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTetheringCapabilityFromConnectionProfile(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall CreateFromConnectionProfile(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromConnectionProfileWithTargetAdapter(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsNoConnectionsTimeoutEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall EnableNoConnectionsTimeout() noexcept = 0;
            virtual int32_t __stdcall EnableNoConnectionsTimeoutAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DisableNoConnectionsTimeout() noexcept = 0;
            virtual int32_t __stdcall DisableNoConnectionsTimeoutAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AdditionalErrorMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllElementsProvisioned(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ProvisionResultsXml(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IProvisionedProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UpdateCost(int32_t) noexcept = 0;
            virtual int32_t __stdcall UpdateUsage(struct struct_Windows_Networking_NetworkOperators_ProfileUsage) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IProvisioningAgent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProvisionFromXmlDocumentAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetProvisionedProfile(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromNetworkAccountId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall AllowTethering() noexcept = 0;
            virtual int32_t __stdcall DenyTethering(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataCodingScheme(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_DataCodingScheme(uint8_t) noexcept = 0;
            virtual int32_t __stdcall GetPayload(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall SetPayload(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_PayloadAsText(void**) noexcept = 0;
            virtual int32_t __stdcall put_PayloadAsText(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMessage(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdReply>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResultCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendMessageAndGetReplyAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Close() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::NetworkOperators::IUssdSessionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromNetworkAccountId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNetworkInterfaceId(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESim
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) AvailableMemoryInBytes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Eid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FirmwareVersion() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MobileBroadbandModemDeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimPolicy) Policy() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimState) State() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::ESimProfile>) GetProfiles() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimOperationResult>) DeleteProfileAsync(param::hstring const& profileId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimDownloadProfileMetadataResult>) DownloadProfileMetadataAsync(param::hstring const& activationCode) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimOperationResult>) ResetAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) ProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESim, Windows::Foundation::IInspectable> const& handler) const;
        using ProfileChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESim, &impl::abi_t<Windows::Networking::NetworkOperators::IESim>::remove_ProfileChanged>;
        [[nodiscard]] ProfileChanged_revoker ProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESim, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ProfileChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESim>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESim<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESim2
    {
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimDiscoverResult) Discover() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimDiscoverResult) Discover(param::hstring const& serverAddress, param::hstring const& matchingId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimDiscoverResult>) DiscoverAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimDiscoverResult>) DiscoverAsync(param::hstring const& serverAddress, param::hstring const& matchingId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESim2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESim2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimAddedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESim) ESim() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimDiscoverEvent
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MatchingId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RspServerAddress() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimDiscoverEvent>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimDiscoverEvent<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimDiscoverResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::ESimDiscoverEvent>) Events() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimDiscoverResultKind) Kind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimProfileMetadata) ProfileMetadata() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimOperationResult) Result() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimDiscoverResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimDiscoverResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimDownloadProfileMetadataResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimOperationResult) Result() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimProfileMetadata) ProfileMetadata() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimDownloadProfileMetadataResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimDownloadProfileMetadataResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimManagerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimServiceInfo) ServiceInfo() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimWatcher) TryCreateESimWatcher() const;
        WINRT_IMPL_AUTO(winrt::event_token) ServiceInfoChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using ServiceInfoChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimManagerStatics, &impl::abi_t<Windows::Networking::NetworkOperators::IESimManagerStatics>::remove_ServiceInfoChanged>;
        [[nodiscard]] ServiceInfoChanged_revoker ServiceInfoChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ServiceInfoChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimManagerStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimOperationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimOperationStatus) Status() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimOperationResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimPolicy
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldEnableManagingUi() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimPolicy>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimPolicy<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimProfile
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimProfileClass) Class() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Nickname() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimProfilePolicy) Policy() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) ProviderIcon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimProfileState) State() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimOperationResult>) DisableAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimOperationResult>) EnableAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimOperationResult>) SetNicknameAsync(param::hstring const& newNickname) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimProfile>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimProfileMetadata
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsConfirmationCodeRequired() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimProfilePolicy) Policy() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) ProviderIcon() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimProfileMetadataState) State() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimOperationResult>) DenyInstallAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::NetworkOperators::ESimOperationResult, Windows::Networking::NetworkOperators::ESimProfileInstallProgress>) ConfirmInstallAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::NetworkOperators::ESimOperationResult, Windows::Networking::NetworkOperators::ESimProfileInstallProgress>) ConfirmInstallAsync(param::hstring const& confirmationCode) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ESimOperationResult>) PostponeInstallAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) StateChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimProfileMetadata, Windows::Foundation::IInspectable> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimProfileMetadata, &impl::abi_t<Windows::Networking::NetworkOperators::IESimProfileMetadata>::remove_StateChanged>;
        [[nodiscard]] StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimProfileMetadata, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) StateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimProfileMetadata>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimProfileMetadata<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimProfilePolicy
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanDelete() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanDisable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsManagedByEnterprise() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimProfilePolicy>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimProfilePolicy<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimRemovedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESim) ESim() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimServiceInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimAuthenticationPreference) AuthenticationPreference() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsESimUiEnabled() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimServiceInfo>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimServiceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimUpdatedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESim) ESim() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IESimWatcher
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ESimWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
        WINRT_IMPL_AUTO(winrt::event_token) Added(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimAddedEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_Added>;
        [[nodiscard]] Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimAddedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Added(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Removed(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimRemovedEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_Removed>;
        [[nodiscard]] Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimRemovedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Removed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Updated(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimUpdatedEventArgs> const& handler) const;
        using Updated_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IESimWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IESimWatcher>::remove_Updated>;
        [[nodiscard]] Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::ESimWatcher, Windows::Networking::NetworkOperators::ESimUpdatedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Updated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IESimWatcher>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IESimWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IFdnAccessManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) RequestUnlockAsync(param::hstring const& contactListId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IFdnAccessManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext
    {
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<uint8_t>) WirelessNetworkId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Connectivity::NetworkAdapter) NetworkAdapter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) RedirectMessageUrl() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Data::Xml::Dom::XmlDocument) RedirectMessageXml() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) AuthenticationUrl() const;
        WINRT_IMPL_AUTO(void) IssueCredentials(param::hstring const& userName, param::hstring const& password, param::hstring const& extraParameters, bool markAsManualConnectOnFailure) const;
        WINRT_IMPL_AUTO(void) AbortAuthentication(bool markAsManual) const;
        WINRT_IMPL_AUTO(void) SkipAuthentication() const;
        WINRT_IMPL_AUTO(void) TriggerAttentionRequired(param::hstring const& packageRelativeApplicationId, param::hstring const& applicationParameters) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>) IssueCredentialsAsync(param::hstring const& userName, param::hstring const& password, param::hstring const& extraParameters, bool markAsManualConnectOnFailure) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContextStatics
    {
        WINRT_IMPL_AUTO(bool) TryGetAuthenticationContext(param::hstring const& evenToken, Windows::Networking::NetworkOperators::HotspotAuthenticationContext& context) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContextStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationEventDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EventToken() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasNetworkErrorOccurred() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode) ResponseCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) LogoffUrl() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Data::Xml::Dom::XmlDocument) AuthenticationReplyXml() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) EFSpn() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) Gid1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) Gid2() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) EFSpn() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) Gid1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) Gid2() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) EFOns() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) EFSpn() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) Gid1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) Gid2() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) EFSpn() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) EFOpl() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) EFPnn() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) Gid1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) Gid2() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NetworkAccountId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ServiceProviderGuid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ServiceProviderName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandNetwork) CurrentNetwork() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation) CurrentDeviceInformation() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>) GetConnectionProfiles() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) AccountExperienceUrl() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NetworkAccountId() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) AvailableNetworkAccountIds() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandAccount) CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NetworkAccountId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasDeviceInformationChanged() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasNetworkChanged() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher
    {
        WINRT_IMPL_AUTO(winrt::event_token) AccountAdded(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
        using AccountAdded_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_AccountAdded>;
        [[nodiscard]] AccountAdded_revoker AccountAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AccountAdded(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AccountUpdated(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> const& handler) const;
        using AccountUpdated_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_AccountUpdated>;
        [[nodiscard]] AccountUpdated_revoker AccountUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AccountUpdated(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AccountRemoved(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
        using AccountRemoved_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_AccountRemoved>;
        [[nodiscard]] AccountRemoved_revoker AccountRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AccountRemoved(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSar
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) AntennaIndex() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) SarBackoffIndex() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSar<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSarFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar) CreateWithIndex(int32_t antennaIndex, int32_t sarBackoffIndex) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSarFactory>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSarFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) BaseStationId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) BaseStationPNCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) BaseStationLatitude() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) BaseStationLongitude() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::TimeSpan>) BaseStationLastBroadcastGpsTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) NetworkId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) PilotSignalStrengthInDB() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) SystemId() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) BaseStationId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) CellId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) ChannelNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) LocationAreaCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) ReceivedSignalStrengthInDBm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) TimingAdvanceInBitPeriods() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) CellId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) ChannelNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) PhysicalCellId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) ReferenceSignalReceivedPowerInDBm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) ReferenceSignalReceivedQualityInDBm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) TimingAdvanceInBitPeriods() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) TrackingAreaCode() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellNR
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int64_t>) CellId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) ChannelNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) PhysicalCellId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) ReferenceSignalReceivedPowerInDBm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) ReferenceSignalReceivedQualityInDBm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) TimingAdvanceInNanoseconds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) TrackingAreaCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) SignalToNoiseRatioInDB() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellNR>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellNR<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) CellId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) CellParameterId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) ChannelNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) LocationAreaCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) PathLossInDB() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) ReceivedSignalCodePowerInDBm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) TimingAdvanceInBitPeriods() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) CellId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) ChannelNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) LocationAreaCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) PathLossInDB() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) PrimaryScramblingCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProviderId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) ReceivedSignalCodePowerInDBm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) SignalToNoiseRatioInDB() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma>) NeighboringCellsCdma() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm>) NeighboringCellsGsm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellLte>) NeighboringCellsLte() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma>) NeighboringCellsTdscdma() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts>) NeighboringCellsUmts() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma>) ServingCellsCdma() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm>) ServingCellsGsm() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellLte>) ServingCellsLte() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma>) ServingCellsTdscdma() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts>) ServingCellsUmts() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellNR>) NeighboringCellsNR() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellNR>) ServingCellsNR() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandCurrentSlotIndexChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) CurrentSlotIndex() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandCurrentSlotIndexChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandCurrentSlotIndexChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::NetworkDeviceStatus) NetworkDeviceStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Manufacturer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Model() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FirmwareInformation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sms::CellularClass) CellularClass() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::DataClasses) DataClasses() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CustomDataClass() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MobileEquipmentId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) TelephoneNumbers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SubscriberId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SimIccId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandDeviceType) DeviceType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandRadioState) CurrentRadioState() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandPinManager) PinManager() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Revision() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SerialNumber() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SimSpn() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SimPnn() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SimGid1() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandSlotManager) SlotManager() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation4>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation4<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) DeviceServiceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) SupportedCommands() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession) OpenDataSession() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession) OpenCommandSession() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) StatusCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) ResponseData() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>) SendQueryCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer const& data) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>) SendSetCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer const& data) const;
        WINRT_IMPL_AUTO(void) CloseSession() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) ReceivedData() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) WriteDataAsync(Windows::Storage::Streams::IBuffer const& value) const;
        WINRT_IMPL_AUTO(void) CloseSession() const;
        WINRT_IMPL_AUTO(winrt::event_token) DataReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> const& eventHandler) const;
        using DataReceived_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>::remove_DataReceived>;
        [[nodiscard]] DataReceived_revoker DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) DataReceived(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) DeviceServiceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDataReadSupported() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDataWriteSupported() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) DeviceServiceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) ReceivedData() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandAccount) CurrentAccount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation) DeviceInformation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxDeviceServiceCommandSizeInBytes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxDeviceServiceDataSizeInBytes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>) DeviceServices() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandDeviceService) GetDeviceService(winrt::guid const& deviceServiceId) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsResetSupported() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ResetAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>) GetCurrentConfigurationAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandNetwork) CurrentNetwork() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModem>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) GetIsPassthroughEnabledAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemStatus>) SetIsPassthroughEnabledAsync(bool value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModem2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPco>) TryGetPcoAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInEmergencyCallMode() const;
        WINRT_IMPL_AUTO(winrt::event_token) IsInEmergencyCallModeChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandModem, Windows::Foundation::IInspectable> const& handler) const;
        using IsInEmergencyCallModeChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandModem3, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>::remove_IsInEmergencyCallModeChanged>;
        [[nodiscard]] IsInEmergencyCallModeChanged_revoker IsInEmergencyCallModeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandModem, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) IsInEmergencyCallModeChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModem3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandUicc) Uicc() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) HomeProviderId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) HomeProviderName() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandSarManager) SarManager() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolation
    {
        WINRT_IMPL_AUTO(void) AddAllowedHost(Windows::Networking::HostName const& host) const;
        WINRT_IMPL_AUTO(void) AddAllowedHostRange(Windows::Networking::HostName const& first, Windows::Networking::HostName const& last) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ApplyConfigurationAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ClearConfigurationAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolation>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolationFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandModemIsolation) Create(param::hstring const& modemDeviceId, param::hstring const& ruleGroupId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemIsolationFactory>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandModem) FromId(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandModem) GetDefault() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Connectivity::NetworkAdapter) NetworkAdapter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::NetworkRegistrationState) NetworkRegistrationState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) RegistrationNetworkError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) PacketAttachNetworkError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ActivationNetworkError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AccessPointName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::DataClasses) RegisteredDataClass() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RegisteredProviderId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RegisteredProviderName() const;
        WINRT_IMPL_AUTO(void) ShowConnectionUI() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) GetVoiceCallSupportAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>) RegistrationUiccApps() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo>) GetCellsInfoAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChange
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandNetwork) Network() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChange<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>) NetworkRegistrationStateChanges() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPco
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) Data() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsComplete() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPco>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPco<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPcoDataChangeTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandPco) UpdatedData() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPcoDataChangeTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPcoDataChangeTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandPinType) Type() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandPinLockState) LockState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandPinFormat) Format() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Enabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) AttemptsRemaining() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>) EnableAsync(param::hstring const& currentPin) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>) DisableAsync(param::hstring const& currentPin) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>) EnterAsync(param::hstring const& currentPin) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>) ChangeAsync(param::hstring const& currentPin, param::hstring const& newPin) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>) UnblockAsync(param::hstring const& pinUnblockKey, param::hstring const& newPin) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPin>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandPinType) PinType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandPinLockState) PinLockState() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChangeTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>) PinLockStateChanges() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChangeTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinType>) SupportedPins() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandPin) GetPin(Windows::Networking::NetworkOperators::MobileBroadbandPinType const& pinType) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinManager<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinOperationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSuccessful() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) AttemptsRemaining() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChange
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandRadioState) RadioState() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChange<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChangeTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>) RadioStateChanges() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChangeTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsBackoffEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsWiFiHardwareIntegrated() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSarControlledByHardware() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar>) Antennas() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) HysteresisTimerPeriod() const;
        WINRT_IMPL_AUTO(winrt::event_token) TransmissionStateChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSarManager, Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> const& handler) const;
        using TransmissionStateChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>::remove_TransmissionStateChanged>;
        [[nodiscard]] TransmissionStateChanged_revoker TransmissionStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSarManager, Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TransmissionStateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) EnableBackoffAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DisableBackoffAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetConfigurationAsync(param::async_iterable<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar> const& antennas) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RevertSarToHardwareControlAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetTransmissionStateChangedHysteresisAsync(Windows::Foundation::TimeSpan const& timerPeriod) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) GetIsTransmittingAsync() const;
        WINRT_IMPL_AUTO(void) StartTransmissionStateMonitoring() const;
        WINRT_IMPL_AUTO(void) StopTransmissionStateMonitoring() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandSlotInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Index() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandSlotState) State() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfo>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandSlotInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandSlotInfoChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandSlotInfo) SlotInfo() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandSlotInfoChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandSlotInfoChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandSlotManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandSlotInfo>) SlotInfos() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) CurrentSlotIndex() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandModemStatus) SetCurrentSlot(int32_t slotIndex) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemStatus>) SetCurrentSlotAsync(int32_t slotIndex) const;
        WINRT_IMPL_AUTO(winrt::event_token) SlotInfoChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSlotManager, Windows::Networking::NetworkOperators::MobileBroadbandSlotInfoChangedEventArgs> const& handler) const;
        using SlotInfoChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager>::remove_SlotInfoChanged>;
        [[nodiscard]] SlotInfoChanged_revoker SlotInfoChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSlotManager, Windows::Networking::NetworkOperators::MobileBroadbandSlotInfoChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SlotInfoChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CurrentSlotIndexChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSlotManager, Windows::Networking::NetworkOperators::MobileBroadbandCurrentSlotIndexChangedEventArgs> const& handler) const;
        using CurrentSlotIndexChanged_revoker = impl::event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager, &impl::abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager>::remove_CurrentSlotIndexChanged>;
        [[nodiscard]] CurrentSlotIndexChanged_revoker CurrentSlotIndexChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSlotManager, Windows::Networking::NetworkOperators::MobileBroadbandCurrentSlotIndexChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CurrentSlotIndexChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandSlotManager>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandSlotManager<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandTransmissionStateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTransmitting() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandTransmissionStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUicc
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SimIccId() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>) GetUiccAppsAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUicc<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::UiccAppKind) Kind() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>) GetRecordDetailsAsync(param::async_iterable<uint32_t> const& uiccFilePath) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>) ReadRecordAsync(param::async_iterable<uint32_t> const& uiccFilePath, int32_t recordIndex) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppReadRecordResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) Data() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppReadRecordResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::UiccAppRecordKind) Kind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RecordCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RecordSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::UiccAccessCondition) ReadAccessCondition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::UiccAccessCondition) WriteAccessCondition() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppsResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>) UiccApps() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppsResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorDataUsageTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::NetworkOperatorDataUsageNotificationKind) NotificationKind() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorDataUsageTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorDataUsageTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType) NotificationType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NetworkAccountId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) EncodingType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Message() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RuleId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Sms::ISmsMessage) SmsMessage() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ssid() const;
        WINRT_IMPL_AUTO(void) Ssid(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Passphrase() const;
        WINRT_IMPL_AUTO(void) Passphrase(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration2
    {
        WINRT_IMPL_AUTO(bool) IsBandSupported(Windows::Networking::NetworkOperators::TetheringWiFiBand const& band) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) IsBandSupportedAsync(Windows::Networking::NetworkOperators::TetheringWiFiBand const& band) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::TetheringWiFiBand) Band() const;
        WINRT_IMPL_AUTO(void) Band(Windows::Networking::NetworkOperators::TetheringWiFiBand const& value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClient
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MacAddress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>) HostNames() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClient<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClientManager
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>) GetTetheringClients() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClientManager<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringEntitlementCheck
    {
        WINRT_IMPL_AUTO(void) AuthorizeTethering(bool allow, param::hstring const& entitlementFailureReason) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringEntitlementCheck<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxClientCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ClientCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::TetheringOperationalState) TetheringOperationalState() const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration) GetCurrentAccessPointConfiguration() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ConfigureAccessPointAsync(Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration const& configuration) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>) StartTetheringAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>) StopTetheringAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::TetheringCapability) GetTetheringCapability(param::hstring const& networkAccountId) const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager) CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics2
    {
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::TetheringCapability) GetTetheringCapabilityFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile) const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager) CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics3
    {
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager) CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics4
    {
        WINRT_IMPL_AUTO(bool) IsNoConnectionsTimeoutEnabled() const;
        WINRT_IMPL_AUTO(void) EnableNoConnectionsTimeout() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) EnableNoConnectionsTimeoutAsync() const;
        WINRT_IMPL_AUTO(void) DisableNoConnectionsTimeout() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DisableNoConnectionsTimeoutAsync() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics4>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringOperationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::TetheringOperationStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AdditionalErrorMessage() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IProvisionFromXmlDocumentResults
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllElementsProvisioned() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProvisionResultsXml() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisionFromXmlDocumentResults<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IProvisionedProfile
    {
        WINRT_IMPL_AUTO(void) UpdateCost(Windows::Networking::Connectivity::NetworkCostType const& value) const;
        WINRT_IMPL_AUTO(void) UpdateUsage(Windows::Networking::NetworkOperators::ProfileUsage const& value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IProvisionedProfile>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisionedProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IProvisioningAgent
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>) ProvisionFromXmlDocumentAsync(param::hstring const& provisioningXmlDocument) const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ProvisionedProfile) GetProvisionedProfile(Windows::Networking::NetworkOperators::ProfileMediaType const& mediaType, param::hstring const& profileName) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IProvisioningAgent>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisioningAgent<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IProvisioningAgentStaticMethods
    {
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::ProvisioningAgent) CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IProvisioningAgentStaticMethods<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_ITetheringEntitlementCheckTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NetworkAccountId() const;
        WINRT_IMPL_AUTO(void) AllowTethering() const;
        WINRT_IMPL_AUTO(void) DenyTethering(param::hstring const& entitlementFailureReason) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::ITetheringEntitlementCheckTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_ITetheringEntitlementCheckTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) DataCodingScheme() const;
        WINRT_IMPL_AUTO(void) DataCodingScheme(uint8_t value) const;
        WINRT_IMPL_AUTO(com_array<uint8_t>) GetPayload() const;
        WINRT_IMPL_AUTO(void) SetPayload(array_view<uint8_t const> value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PayloadAsText() const;
        WINRT_IMPL_AUTO(void) PayloadAsText(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdMessage>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdMessageFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::UssdMessage) CreateMessage(param::hstring const& messageText) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdMessageFactory>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdReply
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::UssdResultCode) ResultCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::UssdMessage) Message() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdReply>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdReply<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdSession
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::UssdReply>) SendMessageAndGetReplyAsync(Windows::Networking::NetworkOperators::UssdMessage const& message) const;
        WINRT_IMPL_AUTO(void) Close() const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdSession>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdSession<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_NetworkOperators_IUssdSessionStatics
    {
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::UssdSession) CreateFromNetworkAccountId(param::hstring const& networkAccountId) const;
        WINRT_IMPL_AUTO(Windows::Networking::NetworkOperators::UssdSession) CreateFromNetworkInterfaceId(param::hstring const& networkInterfaceId) const;
    };
    template <> struct consume<Windows::Networking::NetworkOperators::IUssdSessionStatics>
    {
        template <typename D> using type = consume_Windows_Networking_NetworkOperators_IUssdSessionStatics<D>;
    };
    struct struct_Windows_Networking_NetworkOperators_ESimProfileInstallProgress
    {
        int32_t TotalSizeInBytes;
        int32_t InstalledSizeInBytes;
    };
    template <> struct abi<Windows::Networking::NetworkOperators::ESimProfileInstallProgress>
    {
        using type = struct_Windows_Networking_NetworkOperators_ESimProfileInstallProgress;
    };
    struct struct_Windows_Networking_NetworkOperators_ProfileUsage
    {
        uint32_t UsageInMegabytes;
        int64_t LastSyncTime;
    };
    template <> struct abi<Windows::Networking::NetworkOperators::ProfileUsage>
    {
        using type = struct_Windows_Networking_NetworkOperators_ProfileUsage;
    };
}
#endif
