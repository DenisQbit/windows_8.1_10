// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Interactions_0_H
#define WINRT_Windows_UI_Composition_Interactions_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) IReference;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct CompositionAnimation;
    struct Compositor;
    struct ExpressionAnimation;
    struct IVisualElement;
    struct ScalarNaturalMotionAnimation;
    struct Vector2NaturalMotionAnimation;
    struct Visual;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input
{
    struct PointerPoint;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Interactions
{
    enum class InteractionBindingAxisModes : uint32_t
    {
        None = 0,
        PositionX = 0x1,
        PositionY = 0x2,
        Scale = 0x4,
    };
    enum class InteractionChainingMode : int32_t
    {
        Auto = 0,
        Always = 1,
        Never = 2,
    };
    enum class InteractionSourceMode : int32_t
    {
        Disabled = 0,
        EnabledWithInertia = 1,
        EnabledWithoutInertia = 2,
    };
    enum class InteractionSourceRedirectionMode : int32_t
    {
        Disabled = 0,
        Enabled = 1,
    };
    enum class InteractionTrackerClampingOption : int32_t
    {
        Auto = 0,
        Disabled = 1,
    };
    enum class InteractionTrackerPositionUpdateOption : int32_t
    {
        Default = 0,
        AllowActiveCustomScaleAnimation = 1,
    };
    enum class VisualInteractionSourceRedirectionMode : int32_t
    {
        Off = 0,
        CapableTouchpadOnly = 1,
        PointerWheelOnly = 2,
        CapableTouchpadAndPointerWheel = 3,
    };
    struct ICompositionConditionalValue;
    struct ICompositionConditionalValueStatics;
    struct ICompositionInteractionSource;
    struct ICompositionInteractionSourceCollection;
    struct IInteractionSourceConfiguration;
    struct IInteractionTracker;
    struct IInteractionTracker2;
    struct IInteractionTracker3;
    struct IInteractionTracker4;
    struct IInteractionTracker5;
    struct IInteractionTrackerCustomAnimationStateEnteredArgs;
    struct IInteractionTrackerCustomAnimationStateEnteredArgs2;
    struct IInteractionTrackerIdleStateEnteredArgs;
    struct IInteractionTrackerIdleStateEnteredArgs2;
    struct IInteractionTrackerInertiaModifier;
    struct IInteractionTrackerInertiaModifierFactory;
    struct IInteractionTrackerInertiaMotion;
    struct IInteractionTrackerInertiaMotionStatics;
    struct IInteractionTrackerInertiaNaturalMotion;
    struct IInteractionTrackerInertiaNaturalMotionStatics;
    struct IInteractionTrackerInertiaRestingValue;
    struct IInteractionTrackerInertiaRestingValueStatics;
    struct IInteractionTrackerInertiaStateEnteredArgs;
    struct IInteractionTrackerInertiaStateEnteredArgs2;
    struct IInteractionTrackerInertiaStateEnteredArgs3;
    struct IInteractionTrackerInteractingStateEnteredArgs;
    struct IInteractionTrackerInteractingStateEnteredArgs2;
    struct IInteractionTrackerOwner;
    struct IInteractionTrackerRequestIgnoredArgs;
    struct IInteractionTrackerStatics;
    struct IInteractionTrackerStatics2;
    struct IInteractionTrackerValuesChangedArgs;
    struct IInteractionTrackerVector2InertiaModifier;
    struct IInteractionTrackerVector2InertiaModifierFactory;
    struct IInteractionTrackerVector2InertiaNaturalMotion;
    struct IInteractionTrackerVector2InertiaNaturalMotionStatics;
    struct IVisualInteractionSource;
    struct IVisualInteractionSource2;
    struct IVisualInteractionSource3;
    struct IVisualInteractionSourceObjectFactory;
    struct IVisualInteractionSourceStatics;
    struct IVisualInteractionSourceStatics2;
    struct CompositionConditionalValue;
    struct CompositionInteractionSourceCollection;
    struct InteractionSourceConfiguration;
    struct InteractionTracker;
    struct InteractionTrackerCustomAnimationStateEnteredArgs;
    struct InteractionTrackerIdleStateEnteredArgs;
    struct InteractionTrackerInertiaModifier;
    struct InteractionTrackerInertiaMotion;
    struct InteractionTrackerInertiaNaturalMotion;
    struct InteractionTrackerInertiaRestingValue;
    struct InteractionTrackerInertiaStateEnteredArgs;
    struct InteractionTrackerInteractingStateEnteredArgs;
    struct InteractionTrackerRequestIgnoredArgs;
    struct InteractionTrackerValuesChangedArgs;
    struct InteractionTrackerVector2InertiaModifier;
    struct InteractionTrackerVector2InertiaNaturalMotion;
    struct VisualInteractionSource;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Composition::Interactions::ICompositionConditionalValue>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::ICompositionInteractionSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTracker5>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSource2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSource3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Interactions::CompositionConditionalValue>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionSourceConfiguration>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTracker>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::VisualInteractionSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionBindingAxisModes>{ using type = enum_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionChainingMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionSourceMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerClampingOption>{ using type = enum_category; };
    template <> struct category<Windows::UI::Composition::Interactions::InteractionTrackerPositionUpdateOption>{ using type = enum_category; };
    template <> struct category<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::CompositionConditionalValue> = L"Windows.UI.Composition.Interactions.CompositionConditionalValue";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection> = L"Windows.UI.Composition.Interactions.CompositionInteractionSourceCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionSourceConfiguration> = L"Windows.UI.Composition.Interactions.InteractionSourceConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTracker> = L"Windows.UI.Composition.Interactions.InteractionTracker";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs> = L"Windows.UI.Composition.Interactions.InteractionTrackerCustomAnimationStateEnteredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs> = L"Windows.UI.Composition.Interactions.InteractionTrackerIdleStateEnteredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaModifier";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion> = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaMotion";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion> = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaNaturalMotion";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue> = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaRestingValue";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs> = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaStateEnteredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs> = L"Windows.UI.Composition.Interactions.InteractionTrackerInteractingStateEnteredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs> = L"Windows.UI.Composition.Interactions.InteractionTrackerRequestIgnoredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs> = L"Windows.UI.Composition.Interactions.InteractionTrackerValuesChangedArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier> = L"Windows.UI.Composition.Interactions.InteractionTrackerVector2InertiaModifier";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion> = L"Windows.UI.Composition.Interactions.InteractionTrackerVector2InertiaNaturalMotion";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::VisualInteractionSource> = L"Windows.UI.Composition.Interactions.VisualInteractionSource";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionBindingAxisModes> = L"Windows.UI.Composition.Interactions.InteractionBindingAxisModes";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionChainingMode> = L"Windows.UI.Composition.Interactions.InteractionChainingMode";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionSourceMode> = L"Windows.UI.Composition.Interactions.InteractionSourceMode";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode> = L"Windows.UI.Composition.Interactions.InteractionSourceRedirectionMode";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerClampingOption> = L"Windows.UI.Composition.Interactions.InteractionTrackerClampingOption";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::InteractionTrackerPositionUpdateOption> = L"Windows.UI.Composition.Interactions.InteractionTrackerPositionUpdateOption";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode> = L"Windows.UI.Composition.Interactions.VisualInteractionSourceRedirectionMode";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::ICompositionConditionalValue> = L"Windows.UI.Composition.Interactions.ICompositionConditionalValue";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics> = L"Windows.UI.Composition.Interactions.ICompositionConditionalValueStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::ICompositionInteractionSource> = L"Windows.UI.Composition.Interactions.ICompositionInteractionSource";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection> = L"Windows.UI.Composition.Interactions.ICompositionInteractionSourceCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration> = L"Windows.UI.Composition.Interactions.IInteractionSourceConfiguration";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTracker> = L"Windows.UI.Composition.Interactions.IInteractionTracker";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTracker2> = L"Windows.UI.Composition.Interactions.IInteractionTracker2";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTracker3> = L"Windows.UI.Composition.Interactions.IInteractionTracker3";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTracker4> = L"Windows.UI.Composition.Interactions.IInteractionTracker4";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTracker5> = L"Windows.UI.Composition.Interactions.IInteractionTracker5";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs> = L"Windows.UI.Composition.Interactions.IInteractionTrackerCustomAnimationStateEnteredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2> = L"Windows.UI.Composition.Interactions.IInteractionTrackerCustomAnimationStateEnteredArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs> = L"Windows.UI.Composition.Interactions.IInteractionTrackerIdleStateEnteredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2> = L"Windows.UI.Composition.Interactions.IInteractionTrackerIdleStateEnteredArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaModifier";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaModifierFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaMotion";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaMotionStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaNaturalMotion";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaNaturalMotionStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaRestingValue";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaRestingValueStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs3";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInteractingStateEnteredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2> = L"Windows.UI.Composition.Interactions.IInteractionTrackerInteractingStateEnteredArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerOwner> = L"Windows.UI.Composition.Interactions.IInteractionTrackerOwner";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs> = L"Windows.UI.Composition.Interactions.IInteractionTrackerRequestIgnoredArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerStatics> = L"Windows.UI.Composition.Interactions.IInteractionTrackerStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2> = L"Windows.UI.Composition.Interactions.IInteractionTrackerStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs> = L"Windows.UI.Composition.Interactions.IInteractionTrackerValuesChangedArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier> = L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaModifier";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory> = L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaModifierFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion> = L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaNaturalMotion";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics> = L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaNaturalMotionStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IVisualInteractionSource> = L"Windows.UI.Composition.Interactions.IVisualInteractionSource";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IVisualInteractionSource2> = L"Windows.UI.Composition.Interactions.IVisualInteractionSource2";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IVisualInteractionSource3> = L"Windows.UI.Composition.Interactions.IVisualInteractionSource3";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory> = L"Windows.UI.Composition.Interactions.IVisualInteractionSourceObjectFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics> = L"Windows.UI.Composition.Interactions.IVisualInteractionSourceStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2> = L"Windows.UI.Composition.Interactions.IVisualInteractionSourceStatics2";
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::ICompositionConditionalValue>{ 0x43250538,0xEB73,0x4561,{ 0xA7,0x1D,0x1A,0x43,0xEA,0xEB,0x7A,0x9B } }; // 43250538-EB73-4561-A71D-1A43EAEB7A9B
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>{ 0x090C4B72,0x8467,0x4D0A,{ 0x90,0x65,0xAC,0x46,0xB8,0x0A,0x55,0x22 } }; // 090C4B72-8467-4D0A-9065-AC46B80A5522
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::ICompositionInteractionSource>{ 0x043B2431,0x06E3,0x495A,{ 0xBA,0x54,0x40,0x9F,0x00,0x17,0xFA,0xC0 } }; // 043B2431-06E3-495A-BA54-409F0017FAC0
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>{ 0x1B468E4B,0xA5BF,0x47D8,{ 0xA5,0x47,0x38,0x94,0x15,0x5A,0x15,0x8C } }; // 1B468E4B-A5BF-47D8-A547-3894155A158C
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>{ 0xA78347E5,0xA9D1,0x4D02,{ 0x98,0x5E,0xB9,0x30,0xCD,0x0B,0x9D,0xA4 } }; // A78347E5-A9D1-4D02-985E-B930CD0B9DA4
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTracker>{ 0x2A8E8CB1,0x1000,0x4416,{ 0x83,0x63,0xCC,0x27,0xFB,0x87,0x73,0x08 } }; // 2A8E8CB1-1000-4416-8363-CC27FB877308
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTracker2>{ 0x25769A3E,0xCE6D,0x448C,{ 0x83,0x86,0x92,0x62,0x0D,0x24,0x07,0x56 } }; // 25769A3E-CE6D-448C-8386-92620D240756
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTracker3>{ 0xE6C5D7A2,0x5C4B,0x42C6,{ 0x84,0xB7,0xF6,0x94,0x41,0xB1,0x80,0x91 } }; // E6C5D7A2-5C4B-42C6-84B7-F69441B18091
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTracker4>{ 0xEBD222BC,0x04AF,0x4AC7,{ 0x84,0x7D,0x06,0xEA,0x36,0xE8,0x0A,0x16 } }; // EBD222BC-04AF-4AC7-847D-06EA36E80A16
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTracker5>{ 0xD3EF5DA2,0xA254,0x40E4,{ 0x88,0xD5,0x44,0xE4,0xE1,0x6B,0x58,0x09 } }; // D3EF5DA2-A254-40E4-88D5-44E4E16B5809
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>{ 0x8D1C8CF1,0xD7B0,0x434C,{ 0xA5,0xD2,0x2D,0x76,0x11,0x86,0x48,0x34 } }; // 8D1C8CF1-D7B0-434C-A5D2-2D7611864834
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>{ 0x47D579B7,0x0985,0x5E99,{ 0xB0,0x24,0x2F,0x32,0xC3,0x80,0xC1,0xA4 } }; // 47D579B7-0985-5E99-B024-2F32C380C1A4
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>{ 0x50012FAA,0x1510,0x4142,{ 0xA1,0xA5,0x01,0x9B,0x09,0xF8,0x85,0x7B } }; // 50012FAA-1510-4142-A1A5-019B09F8857B
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>{ 0xF2E771ED,0xB803,0x5137,{ 0x94,0x35,0x1C,0x96,0xE4,0x87,0x21,0xE9 } }; // F2E771ED-B803-5137-9435-1C96E48721E9
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>{ 0xA0E2C920,0x26B4,0x4DA2,{ 0x8B,0x61,0x5E,0x68,0x39,0x79,0xBB,0xE2 } }; // A0E2C920-26B4-4DA2-8B61-5E683979BBE2
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>{ 0x993818FE,0xC94E,0x4B86,{ 0x87,0xF3,0x92,0x26,0x65,0xBA,0x46,0xB9 } }; // 993818FE-C94E-4B86-87F3-922665BA46B9
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>{ 0x04922FDC,0xF154,0x4CB8,{ 0xBF,0x33,0xCC,0x1B,0xA6,0x11,0xE6,0xDB } }; // 04922FDC-F154-4CB8-BF33-CC1BA611E6DB
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>{ 0x8CC83DD6,0xBA7B,0x431A,{ 0x84,0x4B,0x6E,0xAC,0x91,0x30,0xF9,0x9A } }; // 8CC83DD6-BA7B-431A-844B-6EAC9130F99A
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>{ 0x70ACDAAE,0x27DC,0x48ED,{ 0xA3,0xC3,0x6D,0x61,0xC9,0xA0,0x29,0xD2 } }; // 70ACDAAE-27DC-48ED-A3C3-6D61C9A029D2
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>{ 0xCFDA55B0,0x5E3E,0x4289,{ 0x93,0x2D,0xEE,0x5F,0x50,0xE7,0x42,0x83 } }; // CFDA55B0-5E3E-4289-932D-EE5F50E74283
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>{ 0x86F7EC09,0x5096,0x4170,{ 0x9C,0xC8,0xDF,0x2F,0xE1,0x01,0xBB,0x93 } }; // 86F7EC09-5096-4170-9CC8-DF2FE101BB93
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>{ 0x18ED4699,0x0745,0x4096,{ 0xBC,0xAB,0x3A,0x4E,0x99,0x56,0x9B,0xCF } }; // 18ED4699-0745-4096-BCAB-3A4E99569BCF
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>{ 0x87108CF2,0xE7FF,0x4F7D,{ 0x9F,0xFD,0xD7,0x2F,0x1E,0x40,0x9B,0x63 } }; // 87108CF2-E7FF-4F7D-9FFD-D72F1E409B63
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>{ 0xB1EB32F6,0xC26C,0x41F6,{ 0xA1,0x89,0xFA,0xBC,0x22,0xB3,0x23,0xCC } }; // B1EB32F6-C26C-41F6-A189-FABC22B323CC
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>{ 0x48AC1C2F,0x47BD,0x59AF,{ 0xA5,0x8C,0x79,0xBD,0x2E,0xB9,0xEF,0x71 } }; // 48AC1C2F-47BD-59AF-A58C-79BD2EB9EF71
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>{ 0xA7263939,0xA17B,0x4011,{ 0x99,0xFD,0xB5,0xC2,0x4F,0x14,0x37,0x48 } }; // A7263939-A17B-4011-99FD-B5C24F143748
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>{ 0x509652D6,0xD488,0x59CD,{ 0x81,0x9F,0xF5,0x23,0x10,0x29,0x5B,0x11 } }; // 509652D6-D488-59CD-819F-F52310295B11
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>{ 0xDB2E8AF3,0x4DEB,0x4E53,{ 0xB2,0x9C,0xB0,0x6C,0x9F,0x96,0xD6,0x51 } }; // DB2E8AF3-4DEB-4E53-B29C-B06C9F96D651
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>{ 0x80DD82F1,0xCE25,0x488F,{ 0x91,0xDD,0xCB,0x64,0x55,0xCC,0xFF,0x2E } }; // 80DD82F1-CE25-488F-91DD-CB6455CCFF2E
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>{ 0xBBA5D7B7,0x6590,0x4498,{ 0x8D,0x6C,0xEB,0x62,0xB5,0x14,0xC9,0x2A } }; // BBA5D7B7-6590-4498-8D6C-EB62B514C92A
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>{ 0x35E53720,0x46B7,0x5CB0,{ 0xB5,0x05,0xF3,0xD6,0x88,0x4A,0x61,0x63 } }; // 35E53720-46B7-5CB0-B505-F3D6884A6163
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>{ 0xCF1578EF,0xD3DF,0x4501,{ 0xB9,0xE6,0xF0,0x2F,0xB2,0x2F,0x73,0xD0 } }; // CF1578EF-D3DF-4501-B9E6-F02FB22F73D0
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>{ 0x87E08AB0,0x3086,0x4853,{ 0xA4,0xB7,0x77,0x88,0x2A,0xD5,0xD7,0xE3 } }; // 87E08AB0-3086-4853-A4B7-77882AD5D7E3
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>{ 0x7401D6C4,0x6C6D,0x48DF,{ 0xBC,0x3E,0x17,0x1E,0x22,0x7E,0x7D,0x7F } }; // 7401D6C4-6C6D-48DF-BC3E-171E227E7D7F
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>{ 0x5F17695C,0x162D,0x4C07,{ 0x94,0x00,0xC2,0x82,0xB2,0x82,0x76,0xCA } }; // 5F17695C-162D-4C07-9400-C282B28276CA
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>{ 0x82001A48,0x09C0,0x434F,{ 0x81,0x89,0x14,0x1C,0x66,0xDF,0x36,0x2F } }; // 82001A48-09C0-434F-8189-141C66DF362F
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IVisualInteractionSource>{ 0xCA0E8A86,0xD8D6,0x4111,{ 0xB0,0x88,0x70,0x34,0x7B,0xD2,0xB0,0xED } }; // CA0E8A86-D8D6-4111-B088-70347BD2B0ED
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IVisualInteractionSource2>{ 0xAA914893,0xA73C,0x414D,{ 0x80,0xD0,0x24,0x9B,0xAD,0x2F,0xBD,0x93 } }; // AA914893-A73C-414D-80D0-249BAD2FBD93
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IVisualInteractionSource3>{ 0xD941EF2A,0x0D5C,0x4057,{ 0x92,0xD7,0xC9,0x71,0x15,0x33,0x20,0x4F } }; // D941EF2A-0D5C-4057-92D7-C9711533204F
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>{ 0xB2CA917C,0xE98A,0x41F2,{ 0xB3,0xC9,0x89,0x1C,0x92,0x66,0xC8,0xF6 } }; // B2CA917C-E98A-41F2-B3C9-891C9266C8F6
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>{ 0x369965E1,0x8645,0x4F75,{ 0xBA,0x00,0x64,0x79,0xCD,0x10,0xC8,0xE6 } }; // 369965E1-8645-4F75-BA00-6479CD10C8E6
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>{ 0xA979C032,0x5764,0x55E0,{ 0xBC,0x1F,0x07,0x78,0x78,0x6D,0xCF,0xDE } }; // A979C032-5764-55E0-BC1F-0778786DCFDE
    template <> struct default_interface<Windows::UI::Composition::Interactions::CompositionConditionalValue>{ using type = Windows::UI::Composition::Interactions::ICompositionConditionalValue; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection>{ using type = Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionSourceConfiguration>{ using type = Windows::UI::Composition::Interactions::IInteractionSourceConfiguration; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTracker>{ using type = Windows::UI::Composition::Interactions::IInteractionTracker; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion>{ using type = Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion; };
    template <> struct default_interface<Windows::UI::Composition::Interactions::VisualInteractionSource>{ using type = Windows::UI::Composition::Interactions::IVisualInteractionSource; };
    template <> struct abi<Windows::UI::Composition::Interactions::ICompositionConditionalValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::ICompositionInteractionSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Count(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Add(void*) noexcept = 0;
            virtual int32_t __stdcall Remove(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAll() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PositionXSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionXSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionYSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionYSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScaleSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleSourceMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InteractionSources(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPositionRoundingSuggested(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_MaxPosition(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_MaxScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_MaxScale(float) noexcept = 0;
            virtual int32_t __stdcall get_MinPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_MinPosition(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_MinScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_MinScale(float) noexcept = 0;
            virtual int32_t __stdcall get_NaturalRestingPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalRestingScale(float*) noexcept = 0;
            virtual int32_t __stdcall get_Owner(void**) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_PositionInertiaDecayRate(void**) noexcept = 0;
            virtual int32_t __stdcall put_PositionInertiaDecayRate(void*) noexcept = 0;
            virtual int32_t __stdcall get_PositionVelocityInPixelsPerSecond(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Scale(float*) noexcept = 0;
            virtual int32_t __stdcall get_ScaleInertiaDecayRate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ScaleInertiaDecayRate(void*) noexcept = 0;
            virtual int32_t __stdcall get_ScaleVelocityInPercentPerSecond(float*) noexcept = 0;
            virtual int32_t __stdcall AdjustPositionXIfGreaterThanThreshold(float, float) noexcept = 0;
            virtual int32_t __stdcall AdjustPositionYIfGreaterThanThreshold(float, float) noexcept = 0;
            virtual int32_t __stdcall ConfigurePositionXInertiaModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigurePositionYInertiaModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureScaleInertiaModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePosition(Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePositionBy(Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePositionWithAnimation(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePositionWithAdditionalVelocity(Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdateScale(float, Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdateScaleWithAnimation(void*, Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdateScaleWithAdditionalVelocity(float, Windows::Foundation::Numerics::float3, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConfigureCenterPointXInertiaModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureCenterPointYInertiaModifiers(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConfigureVector2PositionInertiaModifiers(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryUpdatePositionWithOption(Windows::Foundation::Numerics::float3, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall TryUpdatePositionByWithOption(Windows::Foundation::Numerics::float3, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsInertiaFromImpulse(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTracker5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryUpdatePositionWithOption(Windows::Foundation::Numerics::float3, int32_t, int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFromBinding(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFromBinding(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_Motion(void**) noexcept = 0;
            virtual int32_t __stdcall put_Motion(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalMotion(void**) noexcept = 0;
            virtual int32_t __stdcall put_NaturalMotion(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_RestingValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_RestingValue(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ModifiedRestingPosition(void**) noexcept = 0;
            virtual int32_t __stdcall get_ModifiedRestingScale(void**) noexcept = 0;
            virtual int32_t __stdcall get_NaturalRestingPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalRestingScale(float*) noexcept = 0;
            virtual int32_t __stdcall get_PositionVelocityInPixelsPerSecond(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ScaleVelocityInPercentPerSecond(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsInertiaFromImpulse(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFromBinding(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFromBinding(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CustomAnimationStateEntered(void*, void*) noexcept = 0;
            virtual int32_t __stdcall IdleStateEntered(void*, void*) noexcept = 0;
            virtual int32_t __stdcall InertiaStateEntered(void*, void*) noexcept = 0;
            virtual int32_t __stdcall InteractingStateEntered(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RequestIgnored(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ValuesChanged(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithOwner(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetBindingMode(void*, void*, uint32_t) noexcept = 0;
            virtual int32_t __stdcall GetBindingMode(void*, void*, uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_RequestId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Scale(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Condition(void**) noexcept = 0;
            virtual int32_t __stdcall put_Condition(void*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalMotion(void**) noexcept = 0;
            virtual int32_t __stdcall put_NaturalMotion(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPositionXRailsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPositionXRailsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPositionYRailsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPositionYRailsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ManipulationRedirectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ManipulationRedirectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionXChainingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionXChainingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionXSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionXSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionYChainingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionYChainingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PositionYSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PositionYSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScaleChainingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleChainingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScaleSourceMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleSourceMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall TryRedirectForManipulation(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeltaPosition(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_DeltaScale(float*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_PositionVelocity(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Scale(float*) noexcept = 0;
            virtual int32_t __stdcall get_ScaleVelocity(float*) noexcept = 0;
            virtual int32_t __stdcall ConfigureCenterPointXModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureCenterPointYModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureDeltaPositionXModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureDeltaPositionYModifiers(void*) noexcept = 0;
            virtual int32_t __stdcall ConfigureDeltaScaleModifiers(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSource3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerWheelConfig(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromIVisualElement(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ExpressionAnimation) Condition() const;
        WINRT_IMPL_AUTO(void) Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ExpressionAnimation) Value() const;
        WINRT_IMPL_AUTO(void) Value(Windows::UI::Composition::ExpressionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::ICompositionConditionalValue>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionConditionalValue<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_ICompositionConditionalValueStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::CompositionConditionalValue) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::ICompositionConditionalValueStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionConditionalValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_ICompositionInteractionSource
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::ICompositionInteractionSource>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionInteractionSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Count() const;
        WINRT_IMPL_AUTO(void) Add(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const;
        WINRT_IMPL_AUTO(void) Remove(Windows::UI::Composition::Interactions::ICompositionInteractionSource const& value) const;
        WINRT_IMPL_AUTO(void) RemoveAll() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode) PositionXSourceMode() const;
        WINRT_IMPL_AUTO(void) PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode) PositionYSourceMode() const;
        WINRT_IMPL_AUTO(void) PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode) ScaleSourceMode() const;
        WINRT_IMPL_AUTO(void) ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceRedirectionMode const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionSourceConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection) InteractionSources() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPositionRoundingSuggested() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) MaxPosition() const;
        WINRT_IMPL_AUTO(void) MaxPosition(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MaxScale() const;
        WINRT_IMPL_AUTO(void) MaxScale(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) MinPosition() const;
        WINRT_IMPL_AUTO(void) MinPosition(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MinScale() const;
        WINRT_IMPL_AUTO(void) MinScale(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) NaturalRestingPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) NaturalRestingScale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::IInteractionTrackerOwner) Owner() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>) PositionInertiaDecayRate() const;
        WINRT_IMPL_AUTO(void) PositionInertiaDecayRate(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) PositionVelocityInPixelsPerSecond() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) Scale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<float>) ScaleInertiaDecayRate() const;
        WINRT_IMPL_AUTO(void) ScaleInertiaDecayRate(Windows::Foundation::IReference<float> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) ScaleVelocityInPercentPerSecond() const;
        WINRT_IMPL_AUTO(void) AdjustPositionXIfGreaterThanThreshold(float adjustment, float positionThreshold) const;
        WINRT_IMPL_AUTO(void) AdjustPositionYIfGreaterThanThreshold(float adjustment, float positionThreshold) const;
        WINRT_IMPL_AUTO(void) ConfigurePositionXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const;
        WINRT_IMPL_AUTO(void) ConfigurePositionYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const;
        WINRT_IMPL_AUTO(void) ConfigureScaleInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier> const& modifiers) const;
        WINRT_IMPL_AUTO(int32_t) TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value) const;
        WINRT_IMPL_AUTO(int32_t) TryUpdatePositionBy(Windows::Foundation::Numerics::float3 const& amount) const;
        WINRT_IMPL_AUTO(int32_t) TryUpdatePositionWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation) const;
        WINRT_IMPL_AUTO(int32_t) TryUpdatePositionWithAdditionalVelocity(Windows::Foundation::Numerics::float3 const& velocityInPixelsPerSecond) const;
        WINRT_IMPL_AUTO(int32_t) TryUpdateScale(float value, Windows::Foundation::Numerics::float3 const& centerPoint) const;
        WINRT_IMPL_AUTO(int32_t) TryUpdateScaleWithAnimation(Windows::UI::Composition::CompositionAnimation const& animation, Windows::Foundation::Numerics::float3 const& centerPoint) const;
        WINRT_IMPL_AUTO(int32_t) TryUpdateScaleWithAdditionalVelocity(float velocityInPercentPerSecond, Windows::Foundation::Numerics::float3 const& centerPoint) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker2
    {
        WINRT_IMPL_AUTO(void) ConfigureCenterPointXInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        WINRT_IMPL_AUTO(void) ConfigureCenterPointYInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker3
    {
        WINRT_IMPL_AUTO(void) ConfigureVector2PositionInertiaModifiers(param::iterable<Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier> const& modifiers) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker4
    {
        WINRT_IMPL_AUTO(int32_t) TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const& option) const;
        WINRT_IMPL_AUTO(int32_t) TryUpdatePositionBy(Windows::Foundation::Numerics::float3 const& amount, Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const& option) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInertiaFromImpulse() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker4>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTracker5
    {
        WINRT_IMPL_AUTO(int32_t) TryUpdatePosition(Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::Interactions::InteractionTrackerClampingOption const& option, Windows::UI::Composition::Interactions::InteractionTrackerPositionUpdateOption const& posUpdateOption) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTracker5>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTracker5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RequestId() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsFromBinding() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RequestId() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsFromBinding() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifier
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifier<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifierFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifierFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifierFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ExpressionAnimation) Condition() const;
        WINRT_IMPL_AUTO(void) Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ExpressionAnimation) Motion() const;
        WINRT_IMPL_AUTO(void) Motion(Windows::UI::Composition::ExpressionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotionStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ExpressionAnimation) Condition() const;
        WINRT_IMPL_AUTO(void) Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ScalarNaturalMotionAnimation) NaturalMotion() const;
        WINRT_IMPL_AUTO(void) NaturalMotion(Windows::UI::Composition::ScalarNaturalMotionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotionStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ExpressionAnimation) Condition() const;
        WINRT_IMPL_AUTO(void) Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ExpressionAnimation) RestingValue() const;
        WINRT_IMPL_AUTO(void) RestingValue(Windows::UI::Composition::ExpressionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValueStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValueStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>) ModifiedRestingPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<float>) ModifiedRestingScale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) NaturalRestingPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) NaturalRestingScale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) PositionVelocityInPixelsPerSecond() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RequestId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) ScaleVelocityInPercentPerSecond() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInertiaFromImpulse() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsFromBinding() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RequestId() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsFromBinding() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner
    {
        WINRT_IMPL_AUTO(void) CustomAnimationStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs const& args) const;
        WINRT_IMPL_AUTO(void) IdleStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs const& args) const;
        WINRT_IMPL_AUTO(void) InertiaStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs const& args) const;
        WINRT_IMPL_AUTO(void) InteractingStateEntered(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs const& args) const;
        WINRT_IMPL_AUTO(void) RequestIgnored(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs const& args) const;
        WINRT_IMPL_AUTO(void) ValuesChanged(Windows::UI::Composition::Interactions::InteractionTracker const& sender, Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerOwner>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerOwner<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerRequestIgnoredArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RequestId() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerRequestIgnoredArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionTracker) Create(Windows::UI::Composition::Compositor const& compositor) const;
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionTracker) CreateWithOwner(Windows::UI::Composition::Compositor const& compositor, Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics2
    {
        WINRT_IMPL_AUTO(void) SetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2, Windows::UI::Composition::Interactions::InteractionBindingAxisModes const& axisMode) const;
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionBindingAxisModes) GetBindingMode(Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RequestId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) Scale() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifier
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifier<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifierFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifierFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifierFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ExpressionAnimation) Condition() const;
        WINRT_IMPL_AUTO(void) Condition(Windows::UI::Composition::ExpressionAnimation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Vector2NaturalMotionAnimation) NaturalMotion() const;
        WINRT_IMPL_AUTO(void) NaturalMotion(Windows::UI::Composition::Vector2NaturalMotionAnimation const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotionStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSource
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPositionXRailsEnabled() const;
        WINRT_IMPL_AUTO(void) IsPositionXRailsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPositionYRailsEnabled() const;
        WINRT_IMPL_AUTO(void) IsPositionYRailsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode) ManipulationRedirectionMode() const;
        WINRT_IMPL_AUTO(void) ManipulationRedirectionMode(Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionChainingMode) PositionXChainingMode() const;
        WINRT_IMPL_AUTO(void) PositionXChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionSourceMode) PositionXSourceMode() const;
        WINRT_IMPL_AUTO(void) PositionXSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionChainingMode) PositionYChainingMode() const;
        WINRT_IMPL_AUTO(void) PositionYChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionSourceMode) PositionYSourceMode() const;
        WINRT_IMPL_AUTO(void) PositionYSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionChainingMode) ScaleChainingMode() const;
        WINRT_IMPL_AUTO(void) ScaleChainingMode(Windows::UI::Composition::Interactions::InteractionChainingMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionSourceMode) ScaleSourceMode() const;
        WINRT_IMPL_AUTO(void) ScaleSourceMode(Windows::UI::Composition::Interactions::InteractionSourceMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Visual) Source() const;
        WINRT_IMPL_AUTO(void) TryRedirectForManipulation(Windows::UI::Input::PointerPoint const& pointerPoint) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSource>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) DeltaPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) DeltaScale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) PositionVelocity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) Scale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) ScaleVelocity() const;
        WINRT_IMPL_AUTO(void) ConfigureCenterPointXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        WINRT_IMPL_AUTO(void) ConfigureCenterPointYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        WINRT_IMPL_AUTO(void) ConfigureDeltaPositionXModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        WINRT_IMPL_AUTO(void) ConfigureDeltaPositionYModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
        WINRT_IMPL_AUTO(void) ConfigureDeltaScaleModifiers(param::iterable<Windows::UI::Composition::Interactions::CompositionConditionalValue> const& conditionalValues) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSource2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSource2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSource3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::InteractionSourceConfiguration) PointerWheelConfig() const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSource3>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSource3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceObjectFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSourceObjectFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceObjectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::VisualInteractionSource) Create(Windows::UI::Composition::Visual const& source) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics2
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Interactions::VisualInteractionSource) CreateFromIVisualElement(Windows::UI::Composition::IVisualElement const& source) const;
    };
    template <> struct consume<Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics2<D>;
    };
}
#endif
