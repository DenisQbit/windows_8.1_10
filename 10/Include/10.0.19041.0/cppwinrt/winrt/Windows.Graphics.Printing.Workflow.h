// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_Workflow_H
#define WINRT_Windows_Graphics_Printing_Workflow_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Graphics.Printing.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Printing.Workflow.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const& setupEventHandler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->add_SetupRequested(*(void**)(&setupEventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const& setupEventHandler) const
    {
        return impl::make_event_revoker<D, SetupRequested_revoker>(this, SetupRequested(setupEventHandler));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->remove_SetupRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const& submittedEventHandler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->add_Submitted(*(void**)(&submittedEventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const& submittedEventHandler) const
    {
        return impl::make_event_revoker<D, Submitted_revoker>(this, Submitted(submittedEventHandler));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->remove_Submitted(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Status() const
    {
        Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->Start());
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::GetUserPrintTicketAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->GetUserPrintTicketAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::Configuration() const
    {
        void* configuration{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->get_Configuration(&configuration));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ configuration, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::SetRequiresUI() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->SetRequiresUI());
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>::SourceAppDisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration)->get_SourceAppDisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>::JobTitle() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration)->get_JobTitle(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>::SessionId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration)->get_SessionId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const& setupEventHandler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->add_SetupRequested(*(void**)(&setupEventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const& setupEventHandler) const
    {
        return impl::make_event_revoker<D, SetupRequested_revoker>(this, SetupRequested(setupEventHandler));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->remove_SetupRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const& xpsDataAvailableEventHandler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->add_XpsDataAvailable(*(void**)(&xpsDataAvailableEventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable_revoker consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const& xpsDataAvailableEventHandler) const
    {
        return impl::make_event_revoker<D, XpsDataAvailable_revoker>(this, XpsDataAvailable(xpsDataAvailableEventHandler));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->remove_XpsDataAvailable(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::Status() const
    {
        Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->Start());
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>::GetUserPrintTicketAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs)->GetUserPrintTicketAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs)->get_Configuration(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>::GetJobPrintTicketAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent)->GetJobPrintTicketAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>::GetSourceSpoolDataAsStreamContent() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent)->GetSourceSpoolDataAsStreamContent(&result));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>::GetSourceSpoolDataAsXpsObjectModel() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent)->GetSourceSpoolDataAsXpsObjectModel(&result));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSpoolStreamContent<D>::GetInputStream() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent)->GetInputStream(&result));
        return Windows::Storage::Streams::IInputStream{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowStreamTarget<D>::GetOutputStream() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget)->GetOutputStream(&result));
        return Windows::Storage::Streams::IOutputStream{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>::Operation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs)->get_Operation(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>::GetTarget(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& jobPrintTicket) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs)->GetTarget(*(void**)(&jobPrintTicket), &result));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowTarget{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>::Complete(Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const& status) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation)->Complete(static_cast<int32_t>(status)));
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation)->get_Configuration(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>::XpsContent() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation)->get_XpsContent(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTarget<D>::TargetAsStream() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget)->get_TargetAsStream(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTarget<D>::TargetAsXpsObjectModelPackage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget)->get_TargetAsXpsObjectModelPackage(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTriggerDetails<D>::PrintWorkflowSession() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails)->get_PrintWorkflowSession(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowUIActivatedEventArgs<D>::PrintWorkflowSession() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs)->get_PrintWorkflowSession(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowXpsDataAvailableEventArgs<D>::Operation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs)->get_Operation(&value));
        return Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowXpsDataAvailableEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>
    {
        int32_t __stdcall add_SetupRequested(void* setupEventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SetupRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const*>(&setupEventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SetupRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetupRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Submitted(void* submittedEventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Submitted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const*>(&submittedEventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Submitted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Submitted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        int32_t __stdcall GetUserPrintTicketAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>>(this->shim().GetUserPrintTicketAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Configuration(void** configuration) noexcept final try
        {
            clear_abi(configuration);
            typename D::abi_guard guard(this->shim());
            *configuration = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetRequiresUI() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequiresUI();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration>
    {
        int32_t __stdcall get_SourceAppDisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SourceAppDisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_JobTitle(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().JobTitle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SessionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>
    {
        int32_t __stdcall add_SetupRequested(void* setupEventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SetupRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const*>(&setupEventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SetupRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetupRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_XpsDataAvailable(void* xpsDataAvailableEventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().XpsDataAvailable(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const*>(&xpsDataAvailableEventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_XpsDataAvailable(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XpsDataAvailable(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs>
    {
        int32_t __stdcall GetUserPrintTicketAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>>(this->shim().GetUserPrintTicketAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent>
    {
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage>
    {
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent>
    {
        int32_t __stdcall GetJobPrintTicketAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>>(this->shim().GetJobPrintTicketAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSourceSpoolDataAsStreamContent(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent>(this->shim().GetSourceSpoolDataAsStreamContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSourceSpoolDataAsXpsObjectModel(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent>(this->shim().GetSourceSpoolDataAsXpsObjectModel());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent>
    {
        int32_t __stdcall GetInputStream(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().GetInputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget>
    {
        int32_t __stdcall GetOutputStream(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().GetOutputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs>
    {
        int32_t __stdcall get_Operation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation>(this->shim().Operation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetTarget(void* jobPrintTicket, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowTarget>(this->shim().GetTarget(*reinterpret_cast<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const*>(&jobPrintTicket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation>
    {
        int32_t __stdcall Complete(int32_t status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete(*reinterpret_cast<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const*>(&status));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_XpsContent(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent>(this->shim().XpsContent());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget>
    {
        int32_t __stdcall get_TargetAsStream(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget>(this->shim().TargetAsStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetAsXpsObjectModelPackage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage>(this->shim().TargetAsXpsObjectModelPackage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails>
    {
        int32_t __stdcall get_PrintWorkflowSession(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession>(this->shim().PrintWorkflowSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs>
    {
        int32_t __stdcall get_PrintWorkflowSession(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession>(this->shim().PrintWorkflowSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs>
    {
        int32_t __stdcall get_Operation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation>(this->shim().Operation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Graphics::Printing::Workflow
{
}
namespace std
{
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTarget> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTarget> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTriggerDetails> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowUIActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowUIActivatedEventArgs> {};
    template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> {};
}
#endif
