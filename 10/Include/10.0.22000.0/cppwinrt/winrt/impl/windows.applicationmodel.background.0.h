// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Background_0_H
#define WINRT_Windows_ApplicationModel_Background_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation
{
    struct BackgroundActivatedEventArgs;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background
{
    enum class PhoneTriggerType : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth
{
    enum class BluetoothError : int32_t;
    struct BluetoothSignalStrengthFilter;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Advertisement
{
    struct BluetoothLEAdvertisement;
    struct BluetoothLEAdvertisementFilter;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Background
{
    enum class BluetoothEventTriggeringMode : int32_t;
    struct RfcommInboundConnectionInformation;
    struct RfcommOutboundConnectionInformation;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile
{
    struct GattCharacteristic;
    struct GattLocalService;
    struct GattServiceProviderAdvertisingParameters;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation
{
    enum class VisitMonitoringScope : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Sensors
{
    enum class ActivityType : int32_t;
    struct ISensorDataThreshold;
}
WINRT_EXPORT namespace winrt::Windows::Devices::SmartCards
{
    enum class SmartCardTriggerType : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Sms
{
    struct SmsFilterRules;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct HostName;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    enum class SocketProtectionLevel : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageLibrary;
    struct StorageLibraryChangeTracker;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Provider
{
    enum class CachedFileTarget : int32_t;
    struct FileUpdateRequest;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::UI::Notifications
{
    enum class NotificationKinds : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background
{
    enum class AlarmAccessStatus : int32_t
    {
        Unspecified = 0,
        AllowedWithWakeupCapability = 1,
        AllowedWithoutWakeupCapability = 2,
        Denied = 3,
    };
    enum class ApplicationTriggerResult : int32_t
    {
        Allowed = 0,
        CurrentlyRunning = 1,
        DisabledByPolicy = 2,
        UnknownError = 3,
    };
    enum class BackgroundAccessRequestKind : int32_t
    {
        AlwaysAllowed = 0,
        AllowedSubjectToSystemPolicy = 1,
    };
    enum class BackgroundAccessStatus : int32_t
    {
        Unspecified = 0,
        AllowedWithAlwaysOnRealTimeConnectivity = 1,
        AllowedMayUseActiveRealTimeConnectivity = 2,
        Denied = 3,
        AlwaysAllowed = 4,
        AllowedSubjectToSystemPolicy = 5,
        DeniedBySystemPolicy = 6,
        DeniedByUser = 7,
    };
    enum class BackgroundTaskCancellationReason : int32_t
    {
        Abort = 0,
        Terminating = 1,
        LoggingOff = 2,
        ServicingUpdate = 3,
        IdleTask = 4,
        Uninstall = 5,
        ConditionLoss = 6,
        SystemPolicy = 7,
        QuietHoursEntered = 8,
        ExecutionTimeExceeded = 9,
        ResourceRevocation = 10,
        EnergySaver = 11,
    };
    enum class BackgroundTaskThrottleCounter : int32_t
    {
        All = 0,
        Cpu = 1,
        Network = 2,
    };
    enum class BackgroundWorkCostValue : int32_t
    {
        Low = 0,
        Medium = 1,
        High = 2,
    };
    enum class CustomSystemEventTriggerRecurrence : int32_t
    {
        Once = 0,
        Always = 1,
    };
    enum class DeviceTriggerResult : int32_t
    {
        Allowed = 0,
        DeniedByUser = 1,
        DeniedBySystem = 2,
        LowBattery = 3,
    };
    enum class LocationTriggerType : int32_t
    {
        Geofence = 0,
    };
    enum class MediaProcessingTriggerResult : int32_t
    {
        Allowed = 0,
        CurrentlyRunning = 1,
        DisabledByPolicy = 2,
        UnknownError = 3,
    };
    enum class SystemConditionType : int32_t
    {
        Invalid = 0,
        UserPresent = 1,
        UserNotPresent = 2,
        InternetAvailable = 3,
        InternetNotAvailable = 4,
        SessionConnected = 5,
        SessionDisconnected = 6,
        FreeNetworkAvailable = 7,
        BackgroundWorkCostNotHigh = 8,
    };
    enum class SystemTriggerType : int32_t
    {
        Invalid = 0,
        SmsReceived = 1,
        UserPresent = 2,
        UserAway = 3,
        NetworkStateChange = 4,
        ControlChannelReset = 5,
        InternetAvailable = 6,
        SessionConnected = 7,
        ServicingComplete = 8,
        LockScreenApplicationAdded = 9,
        LockScreenApplicationRemoved = 10,
        TimeZoneChange = 11,
        OnlineIdConnectedStateChange = 12,
        BackgroundWorkCostChange = 13,
        PowerStateChange = 14,
        DefaultSignInAccountChange = 15,
    };
    struct IActivitySensorTrigger;
    struct IActivitySensorTriggerFactory;
    struct IAlarmApplicationManagerStatics;
    struct IAppBroadcastTrigger;
    struct IAppBroadcastTriggerFactory;
    struct IAppBroadcastTriggerProviderInfo;
    struct IApplicationTrigger;
    struct IApplicationTriggerDetails;
    struct IAppointmentStoreNotificationTrigger;
    struct IBackgroundCondition;
    struct IBackgroundExecutionManagerStatics;
    struct IBackgroundExecutionManagerStatics2;
    struct IBackgroundExecutionManagerStatics3;
    struct IBackgroundTask;
    struct IBackgroundTaskBuilder;
    struct IBackgroundTaskBuilder2;
    struct IBackgroundTaskBuilder3;
    struct IBackgroundTaskBuilder4;
    struct IBackgroundTaskBuilder5;
    struct IBackgroundTaskCompletedEventArgs;
    struct IBackgroundTaskDeferral;
    struct IBackgroundTaskInstance;
    struct IBackgroundTaskInstance2;
    struct IBackgroundTaskInstance4;
    struct IBackgroundTaskProgressEventArgs;
    struct IBackgroundTaskRegistration;
    struct IBackgroundTaskRegistration2;
    struct IBackgroundTaskRegistration3;
    struct IBackgroundTaskRegistrationGroup;
    struct IBackgroundTaskRegistrationGroupFactory;
    struct IBackgroundTaskRegistrationStatics;
    struct IBackgroundTaskRegistrationStatics2;
    struct IBackgroundTrigger;
    struct IBackgroundWorkCostStatics;
    struct IBluetoothLEAdvertisementPublisherTrigger;
    struct IBluetoothLEAdvertisementPublisherTrigger2;
    struct IBluetoothLEAdvertisementWatcherTrigger;
    struct IBluetoothLEAdvertisementWatcherTrigger2;
    struct ICachedFileUpdaterTrigger;
    struct ICachedFileUpdaterTriggerDetails;
    struct IChatMessageNotificationTrigger;
    struct IChatMessageReceivedNotificationTrigger;
    struct ICommunicationBlockingAppSetAsActiveTrigger;
    struct IContactStoreNotificationTrigger;
    struct IContentPrefetchTrigger;
    struct IContentPrefetchTriggerFactory;
    struct ICustomSystemEventTrigger;
    struct ICustomSystemEventTriggerFactory;
    struct IDeviceConnectionChangeTrigger;
    struct IDeviceConnectionChangeTriggerStatics;
    struct IDeviceManufacturerNotificationTrigger;
    struct IDeviceManufacturerNotificationTriggerFactory;
    struct IDeviceServicingTrigger;
    struct IDeviceUseTrigger;
    struct IDeviceWatcherTrigger;
    struct IEmailStoreNotificationTrigger;
    struct IGattCharacteristicNotificationTrigger;
    struct IGattCharacteristicNotificationTrigger2;
    struct IGattCharacteristicNotificationTriggerFactory;
    struct IGattCharacteristicNotificationTriggerFactory2;
    struct IGattServiceProviderTrigger;
    struct IGattServiceProviderTriggerResult;
    struct IGattServiceProviderTriggerStatics;
    struct IGeovisitTrigger;
    struct ILocationTrigger;
    struct ILocationTriggerFactory;
    struct IMaintenanceTrigger;
    struct IMaintenanceTriggerFactory;
    struct IMediaProcessingTrigger;
    struct INetworkOperatorHotspotAuthenticationTrigger;
    struct INetworkOperatorNotificationTrigger;
    struct INetworkOperatorNotificationTriggerFactory;
    struct IPhoneTrigger;
    struct IPhoneTriggerFactory;
    struct IPushNotificationTriggerFactory;
    struct IRcsEndUserMessageAvailableTrigger;
    struct IRfcommConnectionTrigger;
    struct ISecondaryAuthenticationFactorAuthenticationTrigger;
    struct ISensorDataThresholdTrigger;
    struct ISensorDataThresholdTriggerFactory;
    struct ISmartCardTrigger;
    struct ISmartCardTriggerFactory;
    struct ISmsMessageReceivedTriggerFactory;
    struct ISocketActivityTrigger;
    struct IStorageLibraryChangeTrackerTriggerFactory;
    struct IStorageLibraryContentChangedTrigger;
    struct IStorageLibraryContentChangedTriggerStatics;
    struct ISystemCondition;
    struct ISystemConditionFactory;
    struct ISystemTrigger;
    struct ISystemTriggerFactory;
    struct ITimeTrigger;
    struct ITimeTriggerFactory;
    struct IToastNotificationActionTriggerFactory;
    struct IToastNotificationHistoryChangedTriggerFactory;
    struct IUserNotificationChangedTriggerFactory;
    struct ActivitySensorTrigger;
    struct AlarmApplicationManager;
    struct AppBroadcastTrigger;
    struct AppBroadcastTriggerProviderInfo;
    struct ApplicationTrigger;
    struct ApplicationTriggerDetails;
    struct AppointmentStoreNotificationTrigger;
    struct BackgroundExecutionManager;
    struct BackgroundTaskBuilder;
    struct BackgroundTaskCompletedEventArgs;
    struct BackgroundTaskDeferral;
    struct BackgroundTaskProgressEventArgs;
    struct BackgroundTaskRegistration;
    struct BackgroundTaskRegistrationGroup;
    struct BackgroundWorkCost;
    struct BluetoothLEAdvertisementPublisherTrigger;
    struct BluetoothLEAdvertisementWatcherTrigger;
    struct CachedFileUpdaterTrigger;
    struct CachedFileUpdaterTriggerDetails;
    struct ChatMessageNotificationTrigger;
    struct ChatMessageReceivedNotificationTrigger;
    struct CommunicationBlockingAppSetAsActiveTrigger;
    struct ContactStoreNotificationTrigger;
    struct ContentPrefetchTrigger;
    struct ConversationalAgentTrigger;
    struct CustomSystemEventTrigger;
    struct DeviceConnectionChangeTrigger;
    struct DeviceManufacturerNotificationTrigger;
    struct DeviceServicingTrigger;
    struct DeviceUseTrigger;
    struct DeviceWatcherTrigger;
    struct EmailStoreNotificationTrigger;
    struct GattCharacteristicNotificationTrigger;
    struct GattServiceProviderTrigger;
    struct GattServiceProviderTriggerResult;
    struct GeovisitTrigger;
    struct LocationTrigger;
    struct MaintenanceTrigger;
    struct MediaProcessingTrigger;
    struct MobileBroadbandDeviceServiceNotificationTrigger;
    struct MobileBroadbandPcoDataChangeTrigger;
    struct MobileBroadbandPinLockStateChangeTrigger;
    struct MobileBroadbandRadioStateChangeTrigger;
    struct MobileBroadbandRegistrationStateChangeTrigger;
    struct NetworkOperatorDataUsageTrigger;
    struct NetworkOperatorHotspotAuthenticationTrigger;
    struct NetworkOperatorNotificationTrigger;
    struct PaymentAppCanMakePaymentTrigger;
    struct PhoneTrigger;
    struct PushNotificationTrigger;
    struct RcsEndUserMessageAvailableTrigger;
    struct RfcommConnectionTrigger;
    struct SecondaryAuthenticationFactorAuthenticationTrigger;
    struct SensorDataThresholdTrigger;
    struct SmartCardTrigger;
    struct SmsMessageReceivedTrigger;
    struct SocketActivityTrigger;
    struct StorageLibraryChangeTrackerTrigger;
    struct StorageLibraryContentChangedTrigger;
    struct SystemCondition;
    struct SystemTrigger;
    struct TetheringEntitlementCheckTrigger;
    struct TimeTrigger;
    struct ToastNotificationActionTrigger;
    struct ToastNotificationHistoryChangedTrigger;
    struct UserNotificationChangedTrigger;
    struct BackgroundTaskCanceledEventHandler;
    struct BackgroundTaskCompletedEventHandler;
    struct BackgroundTaskProgressEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Background::IActivitySensorTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IAppBroadcastTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IApplicationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IApplicationTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundCondition>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTask>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskInstance>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IContentPrefetchTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ICustomSystemEventTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceServicingTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceUseTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IGeovisitTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ILocationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ILocationTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IMaintenanceTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IMediaProcessingTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IPhoneTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IPhoneTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISmartCardTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISocketActivityTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISystemCondition>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISystemConditionFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISystemTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ISystemTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ITimeTrigger>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ITimeTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Background::ActivitySensorTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::AlarmApplicationManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::AppBroadcastTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::ApplicationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::ApplicationTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundExecutionManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskBuilder>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskDeferral>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskRegistration>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundWorkCost>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::ContentPrefetchTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::ConversationalAgentTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::CustomSystemEventTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::DeviceServicingTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::DeviceUseTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::DeviceWatcherTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::GattServiceProviderTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::GeovisitTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::LocationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::MaintenanceTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::MediaProcessingTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::PhoneTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::PushNotificationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::RfcommConnectionTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::SensorDataThresholdTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::SmartCardTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::SocketActivityTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::SystemCondition>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::SystemTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::TimeTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::ToastNotificationActionTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::UserNotificationChangedTrigger>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Background::AlarmAccessStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::ApplicationTriggerResult>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundAccessRequestKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundAccessStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCancellationReason>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundWorkCostValue>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::DeviceTriggerResult>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::LocationTriggerType>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::MediaProcessingTriggerResult>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::SystemConditionType>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::SystemTriggerType>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ActivitySensorTrigger> = L"Windows.ApplicationModel.Background.ActivitySensorTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::AlarmApplicationManager> = L"Windows.ApplicationModel.Background.AlarmApplicationManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::AppBroadcastTrigger> = L"Windows.ApplicationModel.Background.AppBroadcastTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo> = L"Windows.ApplicationModel.Background.AppBroadcastTriggerProviderInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ApplicationTrigger> = L"Windows.ApplicationModel.Background.ApplicationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ApplicationTriggerDetails> = L"Windows.ApplicationModel.Background.ApplicationTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger> = L"Windows.ApplicationModel.Background.AppointmentStoreNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundExecutionManager> = L"Windows.ApplicationModel.Background.BackgroundExecutionManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskBuilder> = L"Windows.ApplicationModel.Background.BackgroundTaskBuilder";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs> = L"Windows.ApplicationModel.Background.BackgroundTaskCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskDeferral> = L"Windows.ApplicationModel.Background.BackgroundTaskDeferral";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs> = L"Windows.ApplicationModel.Background.BackgroundTaskProgressEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskRegistration> = L"Windows.ApplicationModel.Background.BackgroundTaskRegistration";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> = L"Windows.ApplicationModel.Background.BackgroundTaskRegistrationGroup";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundWorkCost> = L"Windows.ApplicationModel.Background.BackgroundWorkCost";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger> = L"Windows.ApplicationModel.Background.BluetoothLEAdvertisementPublisherTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger> = L"Windows.ApplicationModel.Background.BluetoothLEAdvertisementWatcherTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::CachedFileUpdaterTrigger> = L"Windows.ApplicationModel.Background.CachedFileUpdaterTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails> = L"Windows.ApplicationModel.Background.CachedFileUpdaterTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ChatMessageNotificationTrigger> = L"Windows.ApplicationModel.Background.ChatMessageNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger> = L"Windows.ApplicationModel.Background.ChatMessageReceivedNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger> = L"Windows.ApplicationModel.Background.CommunicationBlockingAppSetAsActiveTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ContactStoreNotificationTrigger> = L"Windows.ApplicationModel.Background.ContactStoreNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ContentPrefetchTrigger> = L"Windows.ApplicationModel.Background.ContentPrefetchTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ConversationalAgentTrigger> = L"Windows.ApplicationModel.Background.ConversationalAgentTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::CustomSystemEventTrigger> = L"Windows.ApplicationModel.Background.CustomSystemEventTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> = L"Windows.ApplicationModel.Background.DeviceConnectionChangeTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger> = L"Windows.ApplicationModel.Background.DeviceManufacturerNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::DeviceServicingTrigger> = L"Windows.ApplicationModel.Background.DeviceServicingTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::DeviceUseTrigger> = L"Windows.ApplicationModel.Background.DeviceUseTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::DeviceWatcherTrigger> = L"Windows.ApplicationModel.Background.DeviceWatcherTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::EmailStoreNotificationTrigger> = L"Windows.ApplicationModel.Background.EmailStoreNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger> = L"Windows.ApplicationModel.Background.GattCharacteristicNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::GattServiceProviderTrigger> = L"Windows.ApplicationModel.Background.GattServiceProviderTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> = L"Windows.ApplicationModel.Background.GattServiceProviderTriggerResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::GeovisitTrigger> = L"Windows.ApplicationModel.Background.GeovisitTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::LocationTrigger> = L"Windows.ApplicationModel.Background.LocationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::MaintenanceTrigger> = L"Windows.ApplicationModel.Background.MaintenanceTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::MediaProcessingTrigger> = L"Windows.ApplicationModel.Background.MediaProcessingTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger> = L"Windows.ApplicationModel.Background.MobileBroadbandDeviceServiceNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger> = L"Windows.ApplicationModel.Background.MobileBroadbandPcoDataChangeTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger> = L"Windows.ApplicationModel.Background.MobileBroadbandPinLockStateChangeTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger> = L"Windows.ApplicationModel.Background.MobileBroadbandRadioStateChangeTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger> = L"Windows.ApplicationModel.Background.MobileBroadbandRegistrationStateChangeTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger> = L"Windows.ApplicationModel.Background.NetworkOperatorDataUsageTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger> = L"Windows.ApplicationModel.Background.NetworkOperatorHotspotAuthenticationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger> = L"Windows.ApplicationModel.Background.NetworkOperatorNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger> = L"Windows.ApplicationModel.Background.PaymentAppCanMakePaymentTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::PhoneTrigger> = L"Windows.ApplicationModel.Background.PhoneTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::PushNotificationTrigger> = L"Windows.ApplicationModel.Background.PushNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger> = L"Windows.ApplicationModel.Background.RcsEndUserMessageAvailableTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::RfcommConnectionTrigger> = L"Windows.ApplicationModel.Background.RfcommConnectionTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger> = L"Windows.ApplicationModel.Background.SecondaryAuthenticationFactorAuthenticationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::SensorDataThresholdTrigger> = L"Windows.ApplicationModel.Background.SensorDataThresholdTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::SmartCardTrigger> = L"Windows.ApplicationModel.Background.SmartCardTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger> = L"Windows.ApplicationModel.Background.SmsMessageReceivedTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::SocketActivityTrigger> = L"Windows.ApplicationModel.Background.SocketActivityTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger> = L"Windows.ApplicationModel.Background.StorageLibraryChangeTrackerTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger> = L"Windows.ApplicationModel.Background.StorageLibraryContentChangedTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::SystemCondition> = L"Windows.ApplicationModel.Background.SystemCondition";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::SystemTrigger> = L"Windows.ApplicationModel.Background.SystemTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger> = L"Windows.ApplicationModel.Background.TetheringEntitlementCheckTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::TimeTrigger> = L"Windows.ApplicationModel.Background.TimeTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ToastNotificationActionTrigger> = L"Windows.ApplicationModel.Background.ToastNotificationActionTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger> = L"Windows.ApplicationModel.Background.ToastNotificationHistoryChangedTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::UserNotificationChangedTrigger> = L"Windows.ApplicationModel.Background.UserNotificationChangedTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::AlarmAccessStatus> = L"Windows.ApplicationModel.Background.AlarmAccessStatus";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ApplicationTriggerResult> = L"Windows.ApplicationModel.Background.ApplicationTriggerResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundAccessRequestKind> = L"Windows.ApplicationModel.Background.BackgroundAccessRequestKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundAccessStatus> = L"Windows.ApplicationModel.Background.BackgroundAccessStatus";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskCancellationReason> = L"Windows.ApplicationModel.Background.BackgroundTaskCancellationReason";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter> = L"Windows.ApplicationModel.Background.BackgroundTaskThrottleCounter";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundWorkCostValue> = L"Windows.ApplicationModel.Background.BackgroundWorkCostValue";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence> = L"Windows.ApplicationModel.Background.CustomSystemEventTriggerRecurrence";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::DeviceTriggerResult> = L"Windows.ApplicationModel.Background.DeviceTriggerResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::LocationTriggerType> = L"Windows.ApplicationModel.Background.LocationTriggerType";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::MediaProcessingTriggerResult> = L"Windows.ApplicationModel.Background.MediaProcessingTriggerResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::SystemConditionType> = L"Windows.ApplicationModel.Background.SystemConditionType";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::SystemTriggerType> = L"Windows.ApplicationModel.Background.SystemTriggerType";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IActivitySensorTrigger> = L"Windows.ApplicationModel.Background.IActivitySensorTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory> = L"Windows.ApplicationModel.Background.IActivitySensorTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics> = L"Windows.ApplicationModel.Background.IAlarmApplicationManagerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IAppBroadcastTrigger> = L"Windows.ApplicationModel.Background.IAppBroadcastTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory> = L"Windows.ApplicationModel.Background.IAppBroadcastTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo> = L"Windows.ApplicationModel.Background.IAppBroadcastTriggerProviderInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IApplicationTrigger> = L"Windows.ApplicationModel.Background.IApplicationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IApplicationTriggerDetails> = L"Windows.ApplicationModel.Background.IApplicationTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger> = L"Windows.ApplicationModel.Background.IAppointmentStoreNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundCondition> = L"Windows.ApplicationModel.Background.IBackgroundCondition";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics> = L"Windows.ApplicationModel.Background.IBackgroundExecutionManagerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2> = L"Windows.ApplicationModel.Background.IBackgroundExecutionManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3> = L"Windows.ApplicationModel.Background.IBackgroundExecutionManagerStatics3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTask> = L"Windows.ApplicationModel.Background.IBackgroundTask";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder> = L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2> = L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3> = L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4> = L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder4";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5> = L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder5";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs> = L"Windows.ApplicationModel.Background.IBackgroundTaskCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskDeferral> = L"Windows.ApplicationModel.Background.IBackgroundTaskDeferral";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskInstance> = L"Windows.ApplicationModel.Background.IBackgroundTaskInstance";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskInstance2> = L"Windows.ApplicationModel.Background.IBackgroundTaskInstance2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskInstance4> = L"Windows.ApplicationModel.Background.IBackgroundTaskInstance4";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs> = L"Windows.ApplicationModel.Background.IBackgroundTaskProgressEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistration> = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2> = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3> = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup> = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationGroup";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory> = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationGroupFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics> = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2> = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationStatics2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundTrigger> = L"Windows.ApplicationModel.Background.IBackgroundTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics> = L"Windows.ApplicationModel.Background.IBackgroundWorkCostStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger> = L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementPublisherTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2> = L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementPublisherTrigger2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger> = L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementWatcherTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2> = L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementWatcherTrigger2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger> = L"Windows.ApplicationModel.Background.ICachedFileUpdaterTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails> = L"Windows.ApplicationModel.Background.ICachedFileUpdaterTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger> = L"Windows.ApplicationModel.Background.IChatMessageNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger> = L"Windows.ApplicationModel.Background.IChatMessageReceivedNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger> = L"Windows.ApplicationModel.Background.ICommunicationBlockingAppSetAsActiveTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger> = L"Windows.ApplicationModel.Background.IContactStoreNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IContentPrefetchTrigger> = L"Windows.ApplicationModel.Background.IContentPrefetchTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory> = L"Windows.ApplicationModel.Background.IContentPrefetchTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ICustomSystemEventTrigger> = L"Windows.ApplicationModel.Background.ICustomSystemEventTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory> = L"Windows.ApplicationModel.Background.ICustomSystemEventTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger> = L"Windows.ApplicationModel.Background.IDeviceConnectionChangeTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics> = L"Windows.ApplicationModel.Background.IDeviceConnectionChangeTriggerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger> = L"Windows.ApplicationModel.Background.IDeviceManufacturerNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory> = L"Windows.ApplicationModel.Background.IDeviceManufacturerNotificationTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IDeviceServicingTrigger> = L"Windows.ApplicationModel.Background.IDeviceServicingTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IDeviceUseTrigger> = L"Windows.ApplicationModel.Background.IDeviceUseTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IDeviceWatcherTrigger> = L"Windows.ApplicationModel.Background.IDeviceWatcherTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger> = L"Windows.ApplicationModel.Background.IEmailStoreNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger> = L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2> = L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTrigger2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory> = L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2> = L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTriggerFactory2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IGattServiceProviderTrigger> = L"Windows.ApplicationModel.Background.IGattServiceProviderTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult> = L"Windows.ApplicationModel.Background.IGattServiceProviderTriggerResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics> = L"Windows.ApplicationModel.Background.IGattServiceProviderTriggerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IGeovisitTrigger> = L"Windows.ApplicationModel.Background.IGeovisitTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ILocationTrigger> = L"Windows.ApplicationModel.Background.ILocationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ILocationTriggerFactory> = L"Windows.ApplicationModel.Background.ILocationTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IMaintenanceTrigger> = L"Windows.ApplicationModel.Background.IMaintenanceTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory> = L"Windows.ApplicationModel.Background.IMaintenanceTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IMediaProcessingTrigger> = L"Windows.ApplicationModel.Background.IMediaProcessingTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger> = L"Windows.ApplicationModel.Background.INetworkOperatorHotspotAuthenticationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger> = L"Windows.ApplicationModel.Background.INetworkOperatorNotificationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory> = L"Windows.ApplicationModel.Background.INetworkOperatorNotificationTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IPhoneTrigger> = L"Windows.ApplicationModel.Background.IPhoneTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IPhoneTriggerFactory> = L"Windows.ApplicationModel.Background.IPhoneTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory> = L"Windows.ApplicationModel.Background.IPushNotificationTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger> = L"Windows.ApplicationModel.Background.IRcsEndUserMessageAvailableTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IRfcommConnectionTrigger> = L"Windows.ApplicationModel.Background.IRfcommConnectionTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger> = L"Windows.ApplicationModel.Background.ISecondaryAuthenticationFactorAuthenticationTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger> = L"Windows.ApplicationModel.Background.ISensorDataThresholdTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory> = L"Windows.ApplicationModel.Background.ISensorDataThresholdTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISmartCardTrigger> = L"Windows.ApplicationModel.Background.ISmartCardTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISmartCardTriggerFactory> = L"Windows.ApplicationModel.Background.ISmartCardTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory> = L"Windows.ApplicationModel.Background.ISmsMessageReceivedTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISocketActivityTrigger> = L"Windows.ApplicationModel.Background.ISocketActivityTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory> = L"Windows.ApplicationModel.Background.IStorageLibraryChangeTrackerTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger> = L"Windows.ApplicationModel.Background.IStorageLibraryContentChangedTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics> = L"Windows.ApplicationModel.Background.IStorageLibraryContentChangedTriggerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISystemCondition> = L"Windows.ApplicationModel.Background.ISystemCondition";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISystemConditionFactory> = L"Windows.ApplicationModel.Background.ISystemConditionFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISystemTrigger> = L"Windows.ApplicationModel.Background.ISystemTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ISystemTriggerFactory> = L"Windows.ApplicationModel.Background.ISystemTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ITimeTrigger> = L"Windows.ApplicationModel.Background.ITimeTrigger";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::ITimeTriggerFactory> = L"Windows.ApplicationModel.Background.ITimeTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory> = L"Windows.ApplicationModel.Background.IToastNotificationActionTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory> = L"Windows.ApplicationModel.Background.IToastNotificationHistoryChangedTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory> = L"Windows.ApplicationModel.Background.IUserNotificationChangedTriggerFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler> = L"Windows.ApplicationModel.Background.BackgroundTaskCanceledEventHandler";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler> = L"Windows.ApplicationModel.Background.BackgroundTaskCompletedEventHandler";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler> = L"Windows.ApplicationModel.Background.BackgroundTaskProgressEventHandler";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IActivitySensorTrigger>{ 0xD0DD4342,0xE37B,0x4823,{ 0xA5,0xFE,0x6B,0x31,0xDF,0xEF,0xDE,0xB0 } }; // D0DD4342-E37B-4823-A5FE-6B31DFEFDEB0
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>{ 0xA72691C3,0x3837,0x44F7,{ 0x83,0x1B,0x01,0x32,0xCC,0x87,0x2B,0xC3 } }; // A72691C3-3837-44F7-831B-0132CC872BC3
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>{ 0xCA03FA3B,0xCCE6,0x4DE2,{ 0xB0,0x9B,0x96,0x28,0xBD,0x33,0xBB,0xBE } }; // CA03FA3B-CCE6-4DE2-B09B-9628BD33BBBE
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IAppBroadcastTrigger>{ 0x74D4F496,0x8D37,0x44EC,{ 0x94,0x81,0x2A,0x0B,0x98,0x54,0xEB,0x48 } }; // 74D4F496-8D37-44EC-9481-2A0B9854EB48
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>{ 0x280B9F44,0x22F4,0x4618,{ 0xA0,0x2E,0xE7,0xE4,0x11,0xEB,0x72,0x38 } }; // 280B9F44-22F4-4618-A02E-E7E411EB7238
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>{ 0xF219352D,0x9DE8,0x4420,{ 0x9C,0xE2,0x5E,0xFF,0x8F,0x17,0x37,0x6B } }; // F219352D-9DE8-4420-9CE2-5EFF8F17376B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IApplicationTrigger>{ 0x0B468630,0x9574,0x492C,{ 0x9E,0x93,0x1A,0x3A,0xE6,0x33,0x5F,0xE9 } }; // 0B468630-9574-492C-9E93-1A3AE6335FE9
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IApplicationTriggerDetails>{ 0x97DC6AB2,0x2219,0x4A9E,{ 0x9C,0x5E,0x41,0xD0,0x47,0xF7,0x6E,0x82 } }; // 97DC6AB2-2219-4A9E-9C5E-41D047F76E82
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>{ 0x64D4040C,0xC201,0x42AD,{ 0xAA,0x2A,0xE2,0x1B,0xA3,0x42,0x5B,0x6D } }; // 64D4040C-C201-42AD-AA2A-E21BA3425B6D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundCondition>{ 0xAE48A1EE,0x8951,0x400A,{ 0x83,0x02,0x9C,0x9C,0x9A,0x2A,0x3A,0x3B } }; // AE48A1EE-8951-400A-8302-9C9C9A2A3A3B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>{ 0xE826EA58,0x66A9,0x4D41,{ 0x83,0xD4,0xB4,0xC1,0x8C,0x87,0xB8,0x46 } }; // E826EA58-66A9-4D41-83D4-B4C18C87B846
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>{ 0x469B24EF,0x9BBB,0x4E18,{ 0x99,0x9A,0xFD,0x65,0x12,0x93,0x1B,0xE9 } }; // 469B24EF-9BBB-4E18-999A-FD6512931BE9
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3>{ 0x98A5D3F6,0x5A25,0x5B6C,{ 0x91,0x92,0xD7,0x7A,0x43,0xDF,0xED,0xC4 } }; // 98A5D3F6-5A25-5B6C-9192-D77A43DFEDC4
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTask>{ 0x7D13D534,0xFD12,0x43CE,{ 0x8C,0x22,0xEA,0x1F,0xF1,0x3C,0x06,0xDF } }; // 7D13D534-FD12-43CE-8C22-EA1FF13C06DF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>{ 0x0351550E,0x3E64,0x4572,{ 0xA9,0x3A,0x84,0x07,0x5A,0x37,0xC9,0x17 } }; // 0351550E-3E64-4572-A93A-84075A37C917
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>{ 0x6AE7CFB1,0x104F,0x406D,{ 0x8D,0xB6,0x84,0x4A,0x57,0x0F,0x42,0xBB } }; // 6AE7CFB1-104F-406D-8DB6-844A570F42BB
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>{ 0x28C74F4A,0x8BA9,0x4C09,{ 0xA2,0x4F,0x19,0x68,0x3E,0x2C,0x92,0x4C } }; // 28C74F4A-8BA9-4C09-A24F-19683E2C924C
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>{ 0x4755E522,0xCBA2,0x4E35,{ 0xBD,0x16,0xA6,0xDA,0x7F,0x1C,0x19,0xAA } }; // 4755E522-CBA2-4E35-BD16-A6DA7F1C19AA
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>{ 0x077103F6,0x99F5,0x4AF4,{ 0xBC,0xAD,0x47,0x31,0xD0,0x33,0x0D,0x43 } }; // 077103F6-99F5-4AF4-BCAD-4731D0330D43
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>{ 0x565D25CF,0xF209,0x48F4,{ 0x99,0x67,0x2B,0x18,0x4F,0x7B,0xFB,0xF0 } }; // 565D25CF-F209-48F4-9967-2B184F7BFBF0
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>{ 0x93CC156D,0xAF27,0x4DD3,{ 0x84,0x6E,0x24,0xEE,0x40,0xCA,0xDD,0x25 } }; // 93CC156D-AF27-4DD3-846E-24EE40CADD25
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskInstance>{ 0x865BDA7A,0x21D8,0x4573,{ 0x8F,0x32,0x92,0x8A,0x1B,0x06,0x41,0xF6 } }; // 865BDA7A-21D8-4573-8F32-928A1B0641F6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>{ 0x4F7D0176,0x0C76,0x4FB4,{ 0x89,0x6D,0x5D,0xE1,0x86,0x41,0x22,0xF6 } }; // 4F7D0176-0C76-4FB4-896D-5DE1864122F6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>{ 0x7F29F23C,0xAA04,0x4B08,{ 0x97,0xB0,0x06,0xD8,0x74,0xCD,0xAB,0xF5 } }; // 7F29F23C-AA04-4B08-97B0-06D874CDABF5
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>{ 0xFB1468AC,0x8332,0x4D0A,{ 0x95,0x32,0x03,0xEA,0xE6,0x84,0xDA,0x31 } }; // FB1468AC-8332-4D0A-9532-03EAE684DA31
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>{ 0x10654CC2,0xA26E,0x43BF,{ 0x8C,0x12,0x1F,0xB4,0x0D,0xBF,0xBF,0xA0 } }; // 10654CC2-A26E-43BF-8C12-1FB40DBFBFA0
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>{ 0x6138C703,0xBB86,0x4112,{ 0xAF,0xC3,0x7F,0x93,0x9B,0x16,0x6E,0x3B } }; // 6138C703-BB86-4112-AFC3-7F939B166E3B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>{ 0xFE338195,0x9423,0x4D8B,{ 0x83,0x0D,0xB1,0xDD,0x2C,0x7B,0xAD,0xD5 } }; // FE338195-9423-4D8B-830D-B1DD2C7BADD5
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>{ 0x2AB1919A,0x871B,0x4167,{ 0x8A,0x76,0x05,0x5C,0xD6,0x7B,0x5B,0x23 } }; // 2AB1919A-871B-4167-8A76-055CD67B5B23
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>{ 0x83D92B69,0x44CF,0x4631,{ 0x97,0x40,0x03,0xC7,0xD8,0x74,0x1B,0xC5 } }; // 83D92B69-44CF-4631-9740-03C7D8741BC5
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>{ 0x4C542F69,0xB000,0x42BA,{ 0xA0,0x93,0x6A,0x56,0x3C,0x65,0xE3,0xF8 } }; // 4C542F69-B000-42BA-A093-6A563C65E3F8
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>{ 0x174B671E,0xB20D,0x4FA9,{ 0xAD,0x9A,0xE9,0x3A,0xD6,0xC7,0x1E,0x01 } }; // 174B671E-B20D-4FA9-AD9A-E93AD6C71E01
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundTrigger>{ 0x84B3A058,0x6027,0x4B87,{ 0x97,0x90,0xBD,0xF3,0xF7,0x57,0xDB,0xD7 } }; // 84B3A058-6027-4B87-9790-BDF3F757DBD7
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>{ 0xC740A662,0xC310,0x4B82,{ 0xB3,0xE3,0x3B,0xCF,0xB9,0xE4,0xC7,0x7D } }; // C740A662-C310-4B82-B3E3-3BCFB9E4C77D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>{ 0xAB3E2612,0x25D3,0x48AE,{ 0x87,0x24,0xD8,0x18,0x77,0xAE,0x61,0x29 } }; // AB3E2612-25D3-48AE-8724-D81877AE6129
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>{ 0xAA28D064,0x38F4,0x597D,{ 0xB5,0x97,0x4E,0x55,0x58,0x8C,0x65,0x03 } }; // AA28D064-38F4-597D-B597-4E55588C6503
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>{ 0x1AAB1819,0xBCE1,0x48EB,{ 0xA8,0x27,0x59,0xFB,0x7C,0xEE,0x52,0xA6 } }; // 1AAB1819-BCE1-48EB-A827-59FB7CEE52A6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>{ 0x39B56799,0xEB39,0x5AB6,{ 0x99,0x32,0xAA,0x9E,0x45,0x49,0x60,0x4D } }; // 39B56799-EB39-5AB6-9932-AA9E4549604D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>{ 0xE21CAEEB,0x32F2,0x4D31,{ 0xB5,0x53,0xB9,0xE0,0x1B,0xDE,0x37,0xE0 } }; // E21CAEEB-32F2-4D31-B553-B9E01BDE37E0
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>{ 0x71838C13,0x1314,0x47B4,{ 0x95,0x97,0xDC,0x7E,0x24,0x8C,0x17,0xCC } }; // 71838C13-1314-47B4-9597-DC7E248C17CC
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>{ 0x513B43BF,0x1D40,0x5C5D,{ 0x78,0xF5,0xC9,0x23,0xFE,0xE3,0x73,0x9E } }; // 513B43BF-1D40-5C5D-78F5-C923FEE3739E
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>{ 0x3EA3760E,0xBAF5,0x4077,{ 0x88,0xE9,0x06,0x0C,0xF6,0xF0,0xC6,0xD5 } }; // 3EA3760E-BAF5-4077-88E9-060CF6F0C6D5
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>{ 0xFB91F28A,0x16A5,0x486D,{ 0x97,0x4C,0x78,0x35,0xA8,0x47,0x7B,0xE2 } }; // FB91F28A-16A5-486D-974C-7835A8477BE2
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>{ 0xC833419B,0x4705,0x4571,{ 0x9A,0x16,0x06,0xB9,0x97,0xBF,0x9C,0x96 } }; // C833419B-4705-4571-9A16-06B997BF9C96
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IContentPrefetchTrigger>{ 0x710627EE,0x04FA,0x440B,{ 0x80,0xC0,0x17,0x32,0x02,0x19,0x9E,0x5D } }; // 710627EE-04FA-440B-80C0-173202199E5D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>{ 0xC2643EDA,0x8A03,0x409E,{ 0xB8,0xC4,0x88,0x81,0x4C,0x28,0xCC,0xB6 } }; // C2643EDA-8A03-409E-B8C4-88814C28CCB6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ICustomSystemEventTrigger>{ 0xF3596798,0xCF6B,0x4EF4,{ 0xA0,0xCA,0x29,0xCF,0x4A,0x27,0x8C,0x87 } }; // F3596798-CF6B-4EF4-A0CA-29CF4A278C87
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>{ 0x6BCB16C5,0xF2DC,0x41B2,{ 0x9E,0xFD,0xB9,0x6B,0xDC,0xD1,0x3C,0xED } }; // 6BCB16C5-F2DC-41B2-9EFD-B96BDCD13CED
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>{ 0x90875E64,0x3CDD,0x4EFB,{ 0xAB,0x1C,0x5B,0x3B,0x6A,0x60,0xCE,0x34 } }; // 90875E64-3CDD-4EFB-AB1C-5B3B6A60CE34
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>{ 0xC3EA246A,0x4EFD,0x4498,{ 0xAA,0x60,0xA4,0xE4,0xE3,0xB1,0x7A,0xB9 } }; // C3EA246A-4EFD-4498-AA60-A4E4E3B17AB9
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>{ 0x81278AB5,0x41AB,0x16DA,{ 0x86,0xC2,0x7F,0x7B,0xF0,0x91,0x2F,0x5B } }; // 81278AB5-41AB-16DA-86C2-7F7BF0912F5B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>{ 0x7955DE75,0x25BB,0x4153,{ 0xA1,0xA2,0x30,0x29,0xFC,0xAB,0xB6,0x52 } }; // 7955DE75-25BB-4153-A1A2-3029FCABB652
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IDeviceServicingTrigger>{ 0x1AB217AD,0x6E34,0x49D3,{ 0x9E,0x6F,0x17,0xF1,0xB6,0xDF,0xA8,0x81 } }; // 1AB217AD-6E34-49D3-9E6F-17F1B6DFA881
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IDeviceUseTrigger>{ 0x0DA68011,0x334F,0x4D57,{ 0xB6,0xEC,0x6D,0xCA,0x64,0xB4,0x12,0xE4 } }; // 0DA68011-334F-4D57-B6EC-6DCA64B412E4
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>{ 0xA4617FDD,0x8573,0x4260,{ 0xBE,0xFC,0x5B,0xEC,0x89,0xCB,0x69,0x3D } }; // A4617FDD-8573-4260-BEFC-5BEC89CB693D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>{ 0x986D06DA,0x47EB,0x4268,{ 0xA4,0xF2,0xF3,0xF7,0x71,0x88,0x38,0x8A } }; // 986D06DA-47EB-4268-A4F2-F3F77188388A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>{ 0xE25F8FC8,0x0696,0x474F,{ 0xA7,0x32,0xF2,0x92,0xB0,0xCE,0xBC,0x5D } }; // E25F8FC8-0696-474F-A732-F292B0CEBC5D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>{ 0x9322A2C4,0xAE0E,0x42F2,{ 0xB2,0x8C,0xF5,0x13,0x72,0xE6,0x92,0x45 } }; // 9322A2C4-AE0E-42F2-B28C-F51372E69245
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>{ 0x57BA1995,0xB143,0x4575,{ 0x9F,0x6B,0xFD,0x59,0xD9,0x3A,0xCE,0x1A } }; // 57BA1995-B143-4575-9F6B-FD59D93ACE1A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>{ 0x5998E91F,0x8A53,0x4E9F,{ 0xA3,0x2C,0x23,0xCD,0x33,0x66,0x4C,0xEE } }; // 5998E91F-8A53-4E9F-A32C-23CD33664CEE
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>{ 0xDDC6A3E9,0x1557,0x4BD8,{ 0x85,0x42,0x46,0x8A,0xA0,0xC6,0x96,0xF6 } }; // DDC6A3E9-1557-4BD8-8542-468AA0C696F6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>{ 0x3C4691B1,0xB198,0x4E84,{ 0xBA,0xD4,0xCF,0x4A,0xD2,0x99,0xED,0x3A } }; // 3C4691B1-B198-4E84-BAD4-CF4AD299ED3A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>{ 0xB413A36A,0xE294,0x4591,{ 0xA5,0xA6,0x64,0x89,0x1A,0x82,0x81,0x53 } }; // B413A36A-E294-4591-A5A6-64891A828153
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IGeovisitTrigger>{ 0x4818EDAA,0x04E1,0x4127,{ 0x9A,0x4C,0x19,0x35,0x1B,0x8A,0x80,0xA4 } }; // 4818EDAA-04E1-4127-9A4C-19351B8A80A4
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ILocationTrigger>{ 0x47666A1C,0x6877,0x481E,{ 0x80,0x26,0xFF,0x7E,0x14,0xA8,0x11,0xA0 } }; // 47666A1C-6877-481E-8026-FF7E14A811A0
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ILocationTriggerFactory>{ 0x1106BB07,0xFF69,0x4E09,{ 0xAA,0x8B,0x13,0x84,0xEA,0x47,0x5E,0x98 } }; // 1106BB07-FF69-4E09-AA8B-1384EA475E98
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IMaintenanceTrigger>{ 0x68184C83,0xFC22,0x4CE5,{ 0x84,0x1A,0x72,0x39,0xA9,0x81,0x00,0x47 } }; // 68184C83-FC22-4CE5-841A-7239A9810047
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>{ 0x4B3DDB2E,0x97DD,0x4629,{ 0x88,0xB0,0xB0,0x6C,0xF9,0x48,0x2A,0xE5 } }; // 4B3DDB2E-97DD-4629-88B0-B06CF9482AE5
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IMediaProcessingTrigger>{ 0x9A95BE65,0x8A52,0x4B30,{ 0x90,0x11,0xCF,0x38,0x04,0x0E,0xA8,0xB0 } }; // 9A95BE65-8A52-4B30-9011-CF38040EA8B0
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>{ 0xE756C791,0x3001,0x4DE5,{ 0x83,0xC7,0xDE,0x61,0xD8,0x88,0x31,0xD0 } }; // E756C791-3001-4DE5-83C7-DE61D88831D0
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>{ 0x90089CC6,0x63CD,0x480C,{ 0x95,0xD1,0x6E,0x6A,0xEF,0x80,0x1E,0x4A } }; // 90089CC6-63CD-480C-95D1-6E6AEF801E4A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>{ 0x0A223E00,0x27D7,0x4353,{ 0xAD,0xB9,0x92,0x65,0xAA,0xEA,0x57,0x9D } }; // 0A223E00-27D7-4353-ADB9-9265AAEA579D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IPhoneTrigger>{ 0x8DCFE99B,0xD4C5,0x49F1,{ 0xB7,0xD3,0x82,0xE8,0x7A,0x0E,0x9D,0xDE } }; // 8DCFE99B-D4C5-49F1-B7D3-82E87A0E9DDE
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IPhoneTriggerFactory>{ 0xA0D93CDA,0x5FC1,0x48FB,{ 0xA5,0x46,0x32,0x26,0x20,0x40,0x15,0x7B } }; // A0D93CDA-5FC1-48FB-A546-32262040157B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>{ 0x6DD8ED1B,0x458E,0x4FC2,{ 0xBC,0x2E,0xD5,0x66,0x4F,0x77,0xED,0x19 } }; // 6DD8ED1B-458E-4FC2-BC2E-D5664F77ED19
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>{ 0x986D0D6A,0xB2F6,0x467F,{ 0xA9,0x78,0xA4,0x40,0x91,0xC1,0x1A,0x66 } }; // 986D0D6A-B2F6-467F-A978-A44091C11A66
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>{ 0xE8C4CAE2,0x0B53,0x4464,{ 0x93,0x94,0xFD,0x87,0x56,0x54,0xDE,0x64 } }; // E8C4CAE2-0B53-4464-9394-FD875654DE64
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>{ 0xF237F327,0x5181,0x4F24,{ 0x96,0xA7,0x70,0x0A,0x4E,0x5F,0xAC,0x62 } }; // F237F327-5181-4F24-96A7-700A4E5FAC62
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>{ 0x5BC0F372,0xD48B,0x4B7F,{ 0xAB,0xEC,0x15,0xF9,0xBA,0xCC,0x12,0xE2 } }; // 5BC0F372-D48B-4B7F-ABEC-15F9BACC12E2
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>{ 0x921FE675,0x7DF0,0x4DA3,{ 0x97,0xB3,0xE5,0x44,0xEE,0x85,0x7F,0xE6 } }; // 921FE675-7DF0-4DA3-97B3-E544EE857FE6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISmartCardTrigger>{ 0xF53BC5AC,0x84CA,0x4972,{ 0x8C,0xE9,0xE5,0x8F,0x97,0xB3,0x7A,0x50 } }; // F53BC5AC-84CA-4972-8CE9-E58F97B37A50
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>{ 0x63BF54C3,0x89C1,0x4E00,{ 0xA9,0xD3,0x97,0xC6,0x29,0x26,0x9D,0xAD } }; // 63BF54C3-89C1-4E00-A9D3-97C629269DAD
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>{ 0xEA3AD8C8,0x6BA4,0x4AB2,{ 0x8D,0x21,0xBC,0x6B,0x09,0xC7,0x75,0x64 } }; // EA3AD8C8-6BA4-4AB2-8D21-BC6B09C77564
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISocketActivityTrigger>{ 0xA9BBF810,0x9DDE,0x4F8A,{ 0x83,0xE3,0xB0,0xE0,0xE7,0xA5,0x0D,0x70 } }; // A9BBF810-9DDE-4F8A-83E3-B0E0E7A50D70
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>{ 0x1EB0FFD0,0x5A85,0x499E,{ 0xA8,0x88,0x82,0x46,0x07,0x12,0x4F,0x50 } }; // 1EB0FFD0-5A85-499E-A888-824607124F50
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>{ 0x1637E0A7,0x829C,0x45BC,{ 0x92,0x9B,0xA1,0xE7,0xEA,0x78,0xD8,0x9B } }; // 1637E0A7-829C-45BC-929B-A1E7EA78D89B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>{ 0x7F9F1B39,0x5F90,0x4E12,{ 0x91,0x4E,0xA7,0xD8,0xE0,0xBB,0xFB,0x18 } }; // 7F9F1B39-5F90-4E12-914E-A7D8E0BBFB18
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISystemCondition>{ 0xC15FB476,0x89C5,0x420B,{ 0xAB,0xD3,0xFB,0x30,0x30,0x47,0x21,0x28 } }; // C15FB476-89C5-420B-ABD3-FB3030472128
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISystemConditionFactory>{ 0xD269D1F1,0x05A7,0x49AE,{ 0x87,0xD7,0x16,0xB2,0xB8,0xB9,0xA5,0x53 } }; // D269D1F1-05A7-49AE-87D7-16B2B8B9A553
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISystemTrigger>{ 0x1D80C776,0x3748,0x4463,{ 0x8D,0x7E,0x27,0x6D,0xC1,0x39,0xAC,0x1C } }; // 1D80C776-3748-4463-8D7E-276DC139AC1C
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ISystemTriggerFactory>{ 0xE80423D4,0x8791,0x4579,{ 0x81,0x26,0x87,0xEC,0x8A,0xAA,0x40,0x7A } }; // E80423D4-8791-4579-8126-87EC8AAA407A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ITimeTrigger>{ 0x656E5556,0x0B2A,0x4377,{ 0xBA,0x70,0x3B,0x45,0xA9,0x35,0x54,0x7F } }; // 656E5556-0B2A-4377-BA70-3B45A935547F
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::ITimeTriggerFactory>{ 0x38C682FE,0x9B54,0x45E6,{ 0xB2,0xF3,0x26,0x9B,0x87,0xA6,0xF7,0x34 } }; // 38C682FE-9B54-45E6-B2F3-269B87A6F734
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>{ 0xB09DFC27,0x6480,0x4349,{ 0x81,0x25,0x97,0xB3,0xEF,0xAA,0x0A,0x3A } }; // B09DFC27-6480-4349-8125-97B3EFAA0A3A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>{ 0x81C6FAAD,0x8797,0x4785,{ 0x81,0xB4,0xB0,0xCC,0xCB,0x73,0xD1,0xD9 } }; // 81C6FAAD-8797-4785-81B4-B0CCCB73D1D9
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>{ 0xCAD4436C,0x69AB,0x4E18,{ 0xA4,0x8A,0x5E,0xD2,0xAC,0x43,0x59,0x57 } }; // CAD4436C-69AB-4E18-A48A-5ED2AC435957
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>{ 0xA6C4BAC0,0x51F8,0x4C57,{ 0xAC,0x3F,0x15,0x6D,0xD1,0x68,0x0C,0x4F } }; // A6C4BAC0-51F8-4C57-AC3F-156DD1680C4F
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>{ 0x5B38E929,0xA086,0x46A7,{ 0xA6,0x78,0x43,0x91,0x35,0x82,0x2B,0xCF } }; // 5B38E929-A086-46A7-A678-439135822BCF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>{ 0x46E0683C,0x8A88,0x4C99,{ 0x80,0x4C,0x76,0x89,0x7F,0x62,0x77,0xA6 } }; // 46E0683C-8A88-4C99-804C-76897F6277A6
    template <> struct default_interface<Windows::ApplicationModel::Background::ActivitySensorTrigger>{ using type = Windows::ApplicationModel::Background::IActivitySensorTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::AppBroadcastTrigger>{ using type = Windows::ApplicationModel::Background::IAppBroadcastTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>{ using type = Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo; };
    template <> struct default_interface<Windows::ApplicationModel::Background::ApplicationTrigger>{ using type = Windows::ApplicationModel::Background::IApplicationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::ApplicationTriggerDetails>{ using type = Windows::ApplicationModel::Background::IApplicationTriggerDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskBuilder>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskBuilder; };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskDeferral>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskDeferral; };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskRegistration>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskRegistration; };
    template <> struct default_interface<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>{ using type = Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup; };
    template <> struct default_interface<Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>{ using type = Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>{ using type = Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>{ using type = Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>{ using type = Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IChatMessageNotificationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>{ using type = Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IContactStoreNotificationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::ContentPrefetchTrigger>{ using type = Windows::ApplicationModel::Background::IContentPrefetchTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::ConversationalAgentTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::CustomSystemEventTrigger>{ using type = Windows::ApplicationModel::Background::ICustomSystemEventTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceServicingTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceServicingTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceUseTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceUseTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::DeviceWatcherTrigger>{ using type = Windows::ApplicationModel::Background::IDeviceWatcherTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::GattServiceProviderTrigger>{ using type = Windows::ApplicationModel::Background::IGattServiceProviderTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>{ using type = Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult; };
    template <> struct default_interface<Windows::ApplicationModel::Background::GeovisitTrigger>{ using type = Windows::ApplicationModel::Background::IGeovisitTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::LocationTrigger>{ using type = Windows::ApplicationModel::Background::ILocationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::MaintenanceTrigger>{ using type = Windows::ApplicationModel::Background::IMaintenanceTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::MediaProcessingTrigger>{ using type = Windows::ApplicationModel::Background::IMediaProcessingTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>{ using type = Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>{ using type = Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::PhoneTrigger>{ using type = Windows::ApplicationModel::Background::IPhoneTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::PushNotificationTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>{ using type = Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::RfcommConnectionTrigger>{ using type = Windows::ApplicationModel::Background::IRfcommConnectionTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>{ using type = Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::SensorDataThresholdTrigger>{ using type = Windows::ApplicationModel::Background::ISensorDataThresholdTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::SmartCardTrigger>{ using type = Windows::ApplicationModel::Background::ISmartCardTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::SocketActivityTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>{ using type = Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::SystemCondition>{ using type = Windows::ApplicationModel::Background::ISystemCondition; };
    template <> struct default_interface<Windows::ApplicationModel::Background::SystemTrigger>{ using type = Windows::ApplicationModel::Background::ISystemTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::TimeTrigger>{ using type = Windows::ApplicationModel::Background::ITimeTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::ToastNotificationActionTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct default_interface<Windows::ApplicationModel::Background::UserNotificationChangedTrigger>{ using type = Windows::ApplicationModel::Background::IBackgroundTrigger; };
    template <> struct abi<Windows::ApplicationModel::Background::IActivitySensorTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SubscribedActivities(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedActivities(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAccessStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAppBroadcastTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ProviderInfo(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProviderInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAppBroadcastTrigger(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DisplayNameResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayNameResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_LogoResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_LogoResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_VideoKeyFrameInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_VideoKeyFrameInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxVideoBitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxVideoBitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxVideoWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxVideoWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxVideoHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxVideoHeight(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IApplicationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAsyncWithArguments(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IApplicationTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundCondition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessForApplicationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveAccess() noexcept = 0;
            virtual int32_t __stdcall RemoveAccessForApplication(void*) noexcept = 0;
            virtual int32_t __stdcall GetAccessStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetAccessStatusForApplication(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessKindAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessKindForModernStandbyAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAccessStatusForModernStandby(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetAccessStatusForModernStandbyForApplication(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTask>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Run(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_TaskEntryPoint(void*) noexcept = 0;
            virtual int32_t __stdcall get_TaskEntryPoint(void**) noexcept = 0;
            virtual int32_t __stdcall SetTrigger(void*) noexcept = 0;
            virtual int32_t __stdcall AddCondition(void*) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall Register(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_CancelOnConditionLoss(bool) noexcept = 0;
            virtual int32_t __stdcall get_CancelOnConditionLoss(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsNetworkRequested(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsNetworkRequested(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskGroup(void**) noexcept = 0;
            virtual int32_t __stdcall put_TaskGroup(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetTaskEntryPointClsid(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstanceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall CheckResult() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstanceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Task(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Progress(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_TriggerDetails(void**) noexcept = 0;
            virtual int32_t __stdcall add_Canceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Canceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SuspendedCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetThrottleCount(int32_t, uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstanceId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Progress(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall add_Progress(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Progress(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Unregister(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Trigger(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskGroup(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall add_BackgroundActivated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BackgroundActivated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AllTasks(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithName(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllTasks(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllTaskGroups(void**) noexcept = 0;
            virtual int32_t __stdcall GetTaskGroup(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentBackgroundWorkCost(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Advertisement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreferredTransmitPowerLevelInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall put_PreferredTransmitPowerLevelInDBm(void*) noexcept = 0;
            virtual int32_t __stdcall get_UseExtendedFormat(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseExtendedFormat(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAnonymous(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAnonymous(bool) noexcept = 0;
            virtual int32_t __stdcall get_IncludeTransmitPowerLevel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeTransmitPowerLevel(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinSamplingInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSamplingInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinOutOfRangeTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxOutOfRangeTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SignalStrengthFilter(void**) noexcept = 0;
            virtual int32_t __stdcall put_SignalStrengthFilter(void*) noexcept = 0;
            virtual int32_t __stdcall get_AdvertisementFilter(void**) noexcept = 0;
            virtual int32_t __stdcall put_AdvertisementFilter(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowExtendedAdvertisements(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowExtendedAdvertisements(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UpdateTarget(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateRequest(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanRequestUserInput(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IContentPrefetchTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WaitInterval(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICustomSystemEventTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Recurrence(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanMaintainConnection(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaintainConnection(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MaintainConnection(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerQualifier(void**) noexcept = 0;
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceServicingTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsyncSimple(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAsyncWithArguments(void*, int64_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceUseTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsyncSimple(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAsyncWithArguments(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Characteristic(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EventTriggeringMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithEventTriggeringMode(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Service(void**) noexcept = 0;
            virtual int32_t __stdcall put_AdvertisingParameters(void*) noexcept = 0;
            virtual int32_t __stdcall get_AdvertisingParameters(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Trigger(void**) noexcept = 0;
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void*, winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IGeovisitTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MonitoringScope(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MonitoringScope(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ILocationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ILocationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IMaintenanceTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FreshnessTime(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IMediaProcessingTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAsyncWithArguments(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAccountId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IPhoneTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TriggerType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IPhoneTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InboundConnection(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutboundConnection(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowMultipleConnections(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowMultipleConnections(bool) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RemoteHostName(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteHostName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISmartCardTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TriggerType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISocketActivityTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsWakeFromLowPowerSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLibraries(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISystemCondition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConditionType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISystemConditionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISystemTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TriggerType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ISystemTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ITimeTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FreshnessTime(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OneShot(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::ITimeTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IActivitySensorTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::Sensors::ActivityType>) SubscribedActivities() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ReportInterval() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivityType>) SupportedActivities() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinimumReportInterval() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IActivitySensorTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IActivitySensorTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::ActivitySensorTrigger) Create(uint32_t reportIntervalInMilliseconds) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IActivitySensorTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::AlarmAccessStatus>) RequestAccessAsync() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::AlarmAccessStatus) GetAccessStatus() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger
    {
        WINRT_IMPL_AUTO(void) ProviderInfo(Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo) ProviderInfo() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAppBroadcastTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::AppBroadcastTrigger) CreateAppBroadcastTrigger(param::hstring const& providerKey) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo
    {
        WINRT_IMPL_AUTO(void) DisplayNameResource(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayNameResource() const;
        WINRT_IMPL_AUTO(void) LogoResource(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LogoResource() const;
        WINRT_IMPL_AUTO(void) VideoKeyFrameInterval(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) VideoKeyFrameInterval() const;
        WINRT_IMPL_AUTO(void) MaxVideoBitrate(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxVideoBitrate() const;
        WINRT_IMPL_AUTO(void) MaxVideoWidth(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxVideoWidth() const;
        WINRT_IMPL_AUTO(void) MaxVideoHeight(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxVideoHeight() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IApplicationTrigger
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult>) RequestAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult>) RequestAsync(Windows::Foundation::Collections::ValueSet const& arguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IApplicationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IApplicationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IApplicationTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::ValueSet) Arguments() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IApplicationTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IApplicationTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IAppointmentStoreNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IAppointmentStoreNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundCondition
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundCondition>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundCondition<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus>) RequestAccessAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus>) RequestAccessAsync(param::hstring const& applicationId) const;
        WINRT_IMPL_AUTO(void) RemoveAccess() const;
        WINRT_IMPL_AUTO(void) RemoveAccess(param::hstring const& applicationId) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundAccessStatus) GetAccessStatus() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundAccessStatus) GetAccessStatus(param::hstring const& applicationId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) RequestAccessKindAsync(Windows::ApplicationModel::Background::BackgroundAccessRequestKind const& requestedAccess, param::hstring const& reason) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) RequestAccessKindForModernStandbyAsync(Windows::ApplicationModel::Background::BackgroundAccessRequestKind const& requestedAccess, param::hstring const& reason) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundAccessStatus) GetAccessStatusForModernStandby() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundAccessStatus) GetAccessStatusForModernStandby(param::hstring const& applicationId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTask
    {
        WINRT_IMPL_AUTO(void) Run(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTask>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTask<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder
    {
        WINRT_IMPL_AUTO(void) TaskEntryPoint(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TaskEntryPoint() const;
        WINRT_IMPL_AUTO(void) SetTrigger(Windows::ApplicationModel::Background::IBackgroundTrigger const& trigger) const;
        WINRT_IMPL_AUTO(void) AddCondition(Windows::ApplicationModel::Background::IBackgroundCondition const& condition) const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundTaskRegistration) Register() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2
    {
        WINRT_IMPL_AUTO(void) CancelOnConditionLoss(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CancelOnConditionLoss() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3
    {
        WINRT_IMPL_AUTO(void) IsNetworkRequested(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsNetworkRequested() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) TaskGroup() const;
        WINRT_IMPL_AUTO(void) TaskGroup(Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder5
    {
        WINRT_IMPL_AUTO(void) SetTaskEntryPointClsid(winrt::guid const& TaskEntryPoint) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) InstanceId() const;
        WINRT_IMPL_AUTO(void) CheckResult() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) InstanceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundTaskRegistration) Task() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Progress() const;
        WINRT_IMPL_AUTO(void) Progress(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) TriggerDetails() const;
        WINRT_IMPL_AUTO(winrt::event_token) Canceled(Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const;
        using Canceled_revoker = impl::event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskInstance, &impl::abi_t<Windows::ApplicationModel::Background::IBackgroundTaskInstance>::remove_Canceled>;
        [[nodiscard]] Canceled_revoker Canceled(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const;
        WINRT_IMPL_AUTO(void) Canceled(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) SuspendedCount() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundTaskDeferral) GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance2
    {
        WINRT_IMPL_AUTO(uint32_t) GetThrottleCount(Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter const& counter) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) User() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) InstanceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Progress() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) TaskId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(winrt::event_token) Progress(Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const;
        using Progress_revoker = impl::event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistration, &impl::abi_t<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>::remove_Progress>;
        [[nodiscard]] Progress_revoker Progress(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) Progress(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Completed(Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const;
        using Completed_revoker = impl::event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistration, &impl::abi_t<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>::remove_Completed>;
        [[nodiscard]] Completed_revoker Completed(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) Completed(winrt::event_token const& cookie) const noexcept;
        WINRT_IMPL_AUTO(void) Unregister(bool cancelTask) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::IBackgroundTrigger) Trigger() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) TaskGroup() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(winrt::event_token) BackgroundActivated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
        using BackgroundActivated_revoker = impl::event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup, &impl::abi_t<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>::remove_BackgroundActivated>;
        [[nodiscard]] BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BackgroundActivated(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<winrt::guid, Windows::ApplicationModel::Background::BackgroundTaskRegistration>) AllTasks() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) Create(param::hstring const& id) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) CreateWithName(param::hstring const& id, param::hstring const& name) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<winrt::guid, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>) AllTasks() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>) AllTaskGroups() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) GetTaskGroup(param::hstring const& groupId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBackgroundWorkCostStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::BackgroundWorkCostValue) CurrentBackgroundWorkCost() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBackgroundWorkCostStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement) Advertisement() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int16_t>) PreferredTransmitPowerLevelInDBm() const;
        WINRT_IMPL_AUTO(void) PreferredTransmitPowerLevelInDBm(Windows::Foundation::IReference<int16_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) UseExtendedFormat() const;
        WINRT_IMPL_AUTO(void) UseExtendedFormat(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAnonymous() const;
        WINRT_IMPL_AUTO(void) IsAnonymous(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IncludeTransmitPowerLevel() const;
        WINRT_IMPL_AUTO(void) IncludeTransmitPowerLevel(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) MinSamplingInterval() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) MaxSamplingInterval() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) MinOutOfRangeTimeout() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) MaxOutOfRangeTimeout() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter) SignalStrengthFilter() const;
        WINRT_IMPL_AUTO(void) SignalStrengthFilter(Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter) AdvertisementFilter() const;
        WINRT_IMPL_AUTO(void) AdvertisementFilter(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowExtendedAdvertisements() const;
        WINRT_IMPL_AUTO(void) AllowExtendedAdvertisements(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Provider::CachedFileTarget) UpdateTarget() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Provider::FileUpdateRequest) UpdateRequest() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanRequestUserInput() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IChatMessageNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IChatMessageNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IChatMessageReceivedNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IChatMessageReceivedNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICommunicationBlockingAppSetAsActiveTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICommunicationBlockingAppSetAsActiveTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IContactStoreNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IContactStoreNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IContentPrefetchTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) WaitInterval() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IContentPrefetchTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IContentPrefetchTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IContentPrefetchTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::ContentPrefetchTrigger) Create(Windows::Foundation::TimeSpan const& waitInterval) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IContentPrefetchTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICustomSystemEventTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TriggerId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence) Recurrence() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICustomSystemEventTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICustomSystemEventTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ICustomSystemEventTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::CustomSystemEventTrigger) Create(param::hstring const& triggerId, Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence const& recurrence) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ICustomSystemEventTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanMaintainConnection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) MaintainConnection() const;
        WINRT_IMPL_AUTO(void) MaintainConnection(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTriggerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTriggerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TriggerQualifier() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) OneShot() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger) Create(param::hstring const& triggerQualifier, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult>) RequestAsync(param::hstring const& deviceId, Windows::Foundation::TimeSpan const& expectedDuration) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult>) RequestAsync(param::hstring const& deviceId, Windows::Foundation::TimeSpan const& expectedDuration, param::hstring const& arguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceServicingTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceUseTrigger
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult>) RequestAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult>) RequestAsync(param::hstring const& deviceId, param::hstring const& arguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceUseTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceUseTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IDeviceWatcherTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IDeviceWatcherTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IDeviceWatcherTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IEmailStoreNotificationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IEmailStoreNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic) Characteristic() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode) EventTriggeringMode() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger) Create(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory2
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger) Create(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const& eventTriggeringMode) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TriggerId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService) Service() const;
        WINRT_IMPL_AUTO(void) AdvertisingParameters(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters) AdvertisingParameters() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattServiceProviderTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::GattServiceProviderTrigger) Trigger() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::BluetoothError) Error() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>) CreateAsync(param::hstring const& triggerId, winrt::guid const& serviceUuid) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IGeovisitTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::VisitMonitoringScope) MonitoringScope() const;
        WINRT_IMPL_AUTO(void) MonitoringScope(Windows::Devices::Geolocation::VisitMonitoringScope const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IGeovisitTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IGeovisitTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ILocationTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::LocationTriggerType) TriggerType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ILocationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ILocationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ILocationTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::LocationTrigger) Create(Windows::ApplicationModel::Background::LocationTriggerType const& triggerType) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ILocationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ILocationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IMaintenanceTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) FreshnessTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) OneShot() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IMaintenanceTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IMaintenanceTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IMaintenanceTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::MaintenanceTrigger) Create(uint32_t freshnessTime, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IMaintenanceTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult>) RequestAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult>) RequestAsync(Windows::Foundation::Collections::ValueSet const& arguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IMediaProcessingTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_INetworkOperatorHotspotAuthenticationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_INetworkOperatorHotspotAuthenticationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NetworkAccountId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger) Create(param::hstring const& networkAccountId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IPhoneTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) OneShot() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Calls::Background::PhoneTriggerType) TriggerType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IPhoneTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IPhoneTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IPhoneTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::PhoneTrigger) Create(Windows::ApplicationModel::Calls::Background::PhoneTriggerType const& type, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IPhoneTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IPhoneTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IPushNotificationTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::PushNotificationTrigger) Create(param::hstring const& applicationId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IPushNotificationTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IRcsEndUserMessageAvailableTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IRcsEndUserMessageAvailableTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation) InboundConnection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation) OutboundConnection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowMultipleConnections() const;
        WINRT_IMPL_AUTO(void) AllowMultipleConnections(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Sockets::SocketProtectionLevel) ProtectionLevel() const;
        WINRT_IMPL_AUTO(void) ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::HostName) RemoteHostName() const;
        WINRT_IMPL_AUTO(void) RemoteHostName(Windows::Networking::HostName const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IRfcommConnectionTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISecondaryAuthenticationFactorAuthenticationTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISecondaryAuthenticationFactorAuthenticationTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISensorDataThresholdTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISensorDataThresholdTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISensorDataThresholdTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::SensorDataThresholdTrigger) Create(Windows::Devices::Sensors::ISensorDataThreshold const& threshold) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISensorDataThresholdTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISmartCardTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::SmartCards::SmartCardTriggerType) TriggerType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISmartCardTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISmartCardTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISmartCardTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::SmartCardTrigger) Create(Windows::Devices::SmartCards::SmartCardTriggerType const& triggerType) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISmartCardTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISmartCardTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISmsMessageReceivedTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::SmsMessageReceivedTrigger) Create(Windows::Devices::Sms::SmsFilterRules const& filterRules) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISmsMessageReceivedTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISocketActivityTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsWakeFromLowPowerSupported() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISocketActivityTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISocketActivityTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IStorageLibraryChangeTrackerTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger) Create(Windows::Storage::StorageLibraryChangeTracker const& tracker) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IStorageLibraryChangeTrackerTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTrigger
    {
    };
    template <> struct consume<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger) Create(Windows::Storage::StorageLibrary const& storageLibrary) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger) CreateFromLibraries(param::iterable<Windows::Storage::StorageLibrary> const& storageLibraries) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISystemCondition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::SystemConditionType) ConditionType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISystemCondition>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemCondition<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISystemConditionFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::SystemCondition) Create(Windows::ApplicationModel::Background::SystemConditionType const& conditionType) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISystemConditionFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemConditionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISystemTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) OneShot() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::SystemTriggerType) TriggerType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISystemTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ISystemTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::SystemTrigger) Create(Windows::ApplicationModel::Background::SystemTriggerType const& triggerType, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ISystemTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ISystemTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ITimeTrigger
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) FreshnessTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) OneShot() const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ITimeTrigger>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ITimeTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_ITimeTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::TimeTrigger) Create(uint32_t freshnessTime, bool oneShot) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::ITimeTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_ITimeTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IToastNotificationActionTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::ToastNotificationActionTrigger) Create(param::hstring const& applicationId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IToastNotificationActionTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IToastNotificationHistoryChangedTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger) Create(param::hstring const& applicationId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IToastNotificationHistoryChangedTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Background_IUserNotificationChangedTriggerFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Background::UserNotificationChangedTrigger) Create(Windows::UI::Notifications::NotificationKinds const& notificationKinds) const;
    };
    template <> struct consume<Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Background_IUserNotificationChangedTriggerFactory<D>;
    };
}
#endif
