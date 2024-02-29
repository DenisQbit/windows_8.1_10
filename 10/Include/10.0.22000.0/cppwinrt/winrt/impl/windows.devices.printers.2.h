// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Printers_2_H
#define WINRT_Windows_Devices_Printers_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Printers.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    struct __declspec(empty_bases) IppAttributeError : Windows::Devices::Printers::IIppAttributeError
    {
        IppAttributeError(std::nullptr_t) noexcept {}
        IppAttributeError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IIppAttributeError(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IppAttributeValue : Windows::Devices::Printers::IIppAttributeValue
    {
        IppAttributeValue(std::nullptr_t) noexcept {}
        IppAttributeValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IIppAttributeValue(ptr, take_ownership_from_abi) {}
        static auto CreateUnsupported();
        static auto CreateUnknown();
        static auto CreateNoValue();
        static auto CreateInteger(int32_t value);
        static auto CreateIntegerArray(param::iterable<int32_t> const& values);
        static auto CreateBoolean(bool value);
        static auto CreateBooleanArray(param::iterable<bool> const& values);
        static auto CreateEnum(int32_t value);
        static auto CreateEnumArray(param::iterable<int32_t> const& values);
        static auto CreateOctetString(Windows::Storage::Streams::IBuffer const& value);
        static auto CreateOctetStringArray(param::iterable<Windows::Storage::Streams::IBuffer> const& values);
        static auto CreateDateTime(Windows::Foundation::DateTime const& value);
        static auto CreateDateTimeArray(param::iterable<Windows::Foundation::DateTime> const& values);
        static auto CreateResolution(Windows::Devices::Printers::IppResolution const& value);
        static auto CreateResolutionArray(param::iterable<Windows::Devices::Printers::IppResolution> const& values);
        static auto CreateRangeOfInteger(Windows::Devices::Printers::IppIntegerRange const& value);
        static auto CreateRangeOfIntegerArray(param::iterable<Windows::Devices::Printers::IppIntegerRange> const& values);
        static auto CreateCollection(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Devices::Printers::IppAttributeValue>> const& memberAttributes);
        static auto CreateCollectionArray(param::iterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Devices::Printers::IppAttributeValue>>> const& memberAttributesArray);
        static auto CreateTextWithLanguage(Windows::Devices::Printers::IppTextWithLanguage const& value);
        static auto CreateTextWithLanguageArray(param::iterable<Windows::Devices::Printers::IppTextWithLanguage> const& values);
        static auto CreateNameWithLanguage(Windows::Devices::Printers::IppTextWithLanguage const& value);
        static auto CreateNameWithLanguageArray(param::iterable<Windows::Devices::Printers::IppTextWithLanguage> const& values);
        static auto CreateTextWithoutLanguage(param::hstring const& value);
        static auto CreateTextWithoutLanguageArray(param::iterable<hstring> const& values);
        static auto CreateNameWithoutLanguage(param::hstring const& value);
        static auto CreateNameWithoutLanguageArray(param::iterable<hstring> const& values);
        static auto CreateKeyword(param::hstring const& value);
        static auto CreateKeywordArray(param::iterable<hstring> const& values);
        static auto CreateUri(Windows::Foundation::Uri const& value);
        static auto CreateUriArray(param::iterable<Windows::Foundation::Uri> const& values);
        static auto CreateUriSchema(param::hstring const& value);
        static auto CreateUriSchemaArray(param::iterable<hstring> const& values);
        static auto CreateCharset(param::hstring const& value);
        static auto CreateCharsetArray(param::iterable<hstring> const& values);
        static auto CreateNaturalLanguage(param::hstring const& value);
        static auto CreateNaturalLanguageArray(param::iterable<hstring> const& values);
        static auto CreateMimeMedia(param::hstring const& value);
        static auto CreateMimeMediaArray(param::iterable<hstring> const& values);
    };
    struct __declspec(empty_bases) IppIntegerRange : Windows::Devices::Printers::IIppIntegerRange
    {
        IppIntegerRange(std::nullptr_t) noexcept {}
        IppIntegerRange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IIppIntegerRange(ptr, take_ownership_from_abi) {}
        IppIntegerRange(int32_t start, int32_t end);
    };
    struct __declspec(empty_bases) IppPrintDevice : Windows::Devices::Printers::IIppPrintDevice
    {
        IppPrintDevice(std::nullptr_t) noexcept {}
        IppPrintDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IIppPrintDevice(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IppResolution : Windows::Devices::Printers::IIppResolution
    {
        IppResolution(std::nullptr_t) noexcept {}
        IppResolution(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IIppResolution(ptr, take_ownership_from_abi) {}
        IppResolution(int32_t width, int32_t height, Windows::Devices::Printers::IppResolutionUnit const& unit);
    };
    struct __declspec(empty_bases) IppSetAttributesResult : Windows::Devices::Printers::IIppSetAttributesResult
    {
        IppSetAttributesResult(std::nullptr_t) noexcept {}
        IppSetAttributesResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IIppSetAttributesResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IppTextWithLanguage : Windows::Devices::Printers::IIppTextWithLanguage
    {
        IppTextWithLanguage(std::nullptr_t) noexcept {}
        IppTextWithLanguage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IIppTextWithLanguage(ptr, take_ownership_from_abi) {}
        IppTextWithLanguage(param::hstring const& language, param::hstring const& text);
    };
    struct __declspec(empty_bases) Print3DDevice : Windows::Devices::Printers::IPrint3DDevice
    {
        Print3DDevice(std::nullptr_t) noexcept {}
        Print3DDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IPrint3DDevice(ptr, take_ownership_from_abi) {}
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) PrintSchema : Windows::Devices::Printers::IPrintSchema
    {
        PrintSchema(std::nullptr_t) noexcept {}
        PrintSchema(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Printers::IPrintSchema(ptr, take_ownership_from_abi) {}
    };
}
#endif
