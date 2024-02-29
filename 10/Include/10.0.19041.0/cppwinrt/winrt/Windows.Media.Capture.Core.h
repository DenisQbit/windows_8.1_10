// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Capture_Core_H
#define WINRT_Windows_Media_Capture_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Media.Capture.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Capture.Core.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>::Frame() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs)->get_Frame(&value));
        return Windows::Media::Capture::CapturedFrame{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>::CaptureTimeOffset() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs)->get_CaptureTimeOffset(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>::UsedFrameControllerIndex() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs)->get_UsedFrameControllerIndex(&value));
        return Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>::CapturedFrameControlValues() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs)->get_CapturedFrameControlValues(&value));
        return Windows::Media::Capture::CapturedFrameControlValues{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::StartAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->StartAsync(&operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::StopAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->StopAsync(&operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::FinishAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->FinishAsync(&operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->add_PhotoCaptured(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::PhotoCaptured_revoker consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PhotoCaptured_revoker>(this, PhotoCaptured(handler));
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::PhotoCaptured(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->remove_PhotoCaptured(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->add_Stopped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::Stopped_revoker consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Stopped_revoker>(this, Stopped(handler));
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::Stopped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->remove_Stopped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture2<D>::UpdateSettingsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2)->UpdateSettingsAsync(&operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs> : produce_base<D, Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>
    {
        int32_t __stdcall get_Frame(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CapturedFrame>(this->shim().Frame());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CaptureTimeOffset(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().CaptureTimeOffset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UsedFrameControllerIndex(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().UsedFrameControllerIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CapturedFrameControlValues(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CapturedFrameControlValues>(this->shim().CapturedFrameControlValues());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> : produce_base<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>
    {
        int32_t __stdcall StartAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StopAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FinishAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().FinishAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_PhotoCaptured(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PhotoCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PhotoCaptured(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoCaptured(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Stopped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Stopped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2> : produce_base<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
    {
        int32_t __stdcall UpdateSettingsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UpdateSettingsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Media::Capture::Core
{
}
namespace std
{
    template<> struct hash<winrt::Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs> {};
    template<> struct hash<winrt::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> {};
    template<> struct hash<winrt::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2> {};
    template<> struct hash<winrt::Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> {};
    template<> struct hash<winrt::Windows::Media::Capture::Core::VariablePhotoSequenceCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::Core::VariablePhotoSequenceCapture> {};
}
#endif
