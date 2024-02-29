// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Media_Media3D_0_H
#define WINRT_Windows_UI_Xaml_Media_Media3D_0_H
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct DependencyProperty;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Media3D
{
    struct ICompositeTransform3D;
    struct ICompositeTransform3DStatics;
    struct IMatrix3DHelper;
    struct IMatrix3DHelperStatics;
    struct IPerspectiveTransform3D;
    struct IPerspectiveTransform3DStatics;
    struct ITransform3D;
    struct ITransform3DFactory;
    struct CompositeTransform3D;
    struct Matrix3DHelper;
    struct PerspectiveTransform3D;
    struct Transform3D;
    struct Matrix3D;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::ITransform3D>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::Transform3D>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Media3D::Matrix3D>{ using type = struct_category<double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double>; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D> = L"Windows.UI.Xaml.Media.Media3D.CompositeTransform3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper> = L"Windows.UI.Xaml.Media.Media3D.Matrix3DHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D> = L"Windows.UI.Xaml.Media.Media3D.PerspectiveTransform3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::Transform3D> = L"Windows.UI.Xaml.Media.Media3D.Transform3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::Matrix3D> = L"Windows.UI.Xaml.Media.Media3D.Matrix3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D> = L"Windows.UI.Xaml.Media.Media3D.ICompositeTransform3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics> = L"Windows.UI.Xaml.Media.Media3D.ICompositeTransform3DStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper> = L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics> = L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelperStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D> = L"Windows.UI.Xaml.Media.Media3D.IPerspectiveTransform3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics> = L"Windows.UI.Xaml.Media.Media3D.IPerspectiveTransform3DStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::ITransform3D> = L"Windows.UI.Xaml.Media.Media3D.ITransform3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory> = L"Windows.UI.Xaml.Media.Media3D.ITransform3DFactory";
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>{ 0x8977CB01,0xAF8D,0x4AF5,{ 0xB0,0x84,0xC0,0x8E,0xB9,0x70,0x4A,0xBE } }; // 8977CB01-AF8D-4AF5-B084-C08EB9704ABE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>{ 0xDDBF4D67,0x2A25,0x48F3,{ 0x98,0x08,0xC5,0x1E,0xC3,0xD5,0x5B,0xEC } }; // DDBF4D67-2A25-48F3-9808-C51EC3D55BEC
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>{ 0xE48C10EF,0x9927,0x4C9B,{ 0x82,0x13,0x07,0x77,0x55,0x12,0xBA,0x04 } }; // E48C10EF-9927-4C9B-8213-07775512BA04
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>{ 0x9264545E,0xE158,0x4E74,{ 0x88,0x99,0x68,0x91,0x60,0xBD,0x2F,0x8C } }; // 9264545E-E158-4E74-8899-689160BD2F8C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>{ 0x9A7B532A,0x30F9,0x40A1,{ 0x96,0xC9,0xC5,0x9D,0x87,0xF9,0x5A,0xC3 } }; // 9A7B532A-30F9-40A1-96C9-C59D87F95AC3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>{ 0x8E6F6400,0x620C,0x48C7,{ 0x84,0x4D,0x3F,0x09,0x84,0xDA,0x5B,0x17 } }; // 8E6F6400-620C-48C7-844D-3F0984DA5B17
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Media3D::ITransform3D>{ 0xAE3ED43A,0xA9FC,0x4C31,{ 0x86,0xCD,0x56,0xD9,0xCA,0x25,0x1A,0x69 } }; // AE3ED43A-A9FC-4C31-86CD-56D9CA251A69
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>{ 0x052C1F7A,0x8D73,0x48CD,{ 0xBB,0xB8,0xD0,0x04,0x34,0xCA,0xAE,0x5D } }; // 052C1F7A-8D73-48CD-BBB8-D00434CAAE5D
    template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D>{ using type = Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper>{ using type = Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D>{ using type = Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::Transform3D>{ using type = Windows::UI::Xaml::Media::Media3D::ITransform3D; };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterZ(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationX(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationY(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationZ(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleX(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleX(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleY(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleY(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleZ(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateX(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateX(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateY(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateY(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateZ(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateZProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Identity(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall Multiply(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall FromElements(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall GetHasInverse(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, bool*) noexcept = 0;
            virtual int32_t __stdcall GetIsIdentity(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, bool*) noexcept = 0;
            virtual int32_t __stdcall Invert(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D, struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Depth(double*) noexcept = 0;
            virtual int32_t __stdcall put_Depth(double) noexcept = 0;
            virtual int32_t __stdcall get_OffsetX(double*) noexcept = 0;
            virtual int32_t __stdcall put_OffsetX(double) noexcept = 0;
            virtual int32_t __stdcall get_OffsetY(double*) noexcept = 0;
            virtual int32_t __stdcall put_OffsetY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DepthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::ITransform3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterX() const;
        WINRT_IMPL_AUTO(void) CenterX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterY() const;
        WINRT_IMPL_AUTO(void) CenterY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterZ() const;
        WINRT_IMPL_AUTO(void) CenterZ(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RotationX() const;
        WINRT_IMPL_AUTO(void) RotationX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RotationY() const;
        WINRT_IMPL_AUTO(void) RotationY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RotationZ() const;
        WINRT_IMPL_AUTO(void) RotationZ(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ScaleX() const;
        WINRT_IMPL_AUTO(void) ScaleX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ScaleY() const;
        WINRT_IMPL_AUTO(void) ScaleY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ScaleZ() const;
        WINRT_IMPL_AUTO(void) ScaleZ(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) TranslateX() const;
        WINRT_IMPL_AUTO(void) TranslateX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) TranslateY() const;
        WINRT_IMPL_AUTO(void) TranslateY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) TranslateZ() const;
        WINRT_IMPL_AUTO(void) TranslateZ(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterZProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RotationXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RotationYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RotationZProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ScaleXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ScaleYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ScaleZProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TranslateXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TranslateYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TranslateZProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Media3D::Matrix3D) Identity() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Media3D::Matrix3D) Multiply(Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix1, Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix2) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Media3D::Matrix3D) FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44) const;
        WINRT_IMPL_AUTO(bool) GetHasInverse(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
        WINRT_IMPL_AUTO(bool) GetIsIdentity(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Media3D::Matrix3D) Invert(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Depth() const;
        WINRT_IMPL_AUTO(void) Depth(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OffsetX() const;
        WINRT_IMPL_AUTO(void) OffsetX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OffsetY() const;
        WINRT_IMPL_AUTO(void) OffsetY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DepthProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) OffsetXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) OffsetYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_ITransform3D
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::ITransform3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ITransform3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Media3D_ITransform3DFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Media3D::Transform3D) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ITransform3DFactory<D>;
    };
    struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D
    {
        double M11;
        double M12;
        double M13;
        double M14;
        double M21;
        double M22;
        double M23;
        double M24;
        double M31;
        double M32;
        double M33;
        double M34;
        double OffsetX;
        double OffsetY;
        double OffsetZ;
        double M44;
    };
    template <> struct abi<Windows::UI::Xaml::Media::Media3D::Matrix3D>
    {
        using type = struct_Windows_UI_Xaml_Media_Media3D_Matrix3D;
    };
}
#endif
