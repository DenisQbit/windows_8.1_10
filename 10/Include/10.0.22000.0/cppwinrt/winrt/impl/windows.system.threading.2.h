// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Threading_2_H
#define WINRT_Windows_System_Threading_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.Threading.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Threading
{
    struct TimerDestroyedHandler : Windows::Foundation::IUnknown
    {
        TimerDestroyedHandler(std::nullptr_t = nullptr) noexcept {}
        TimerDestroyedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> TimerDestroyedHandler(L lambda);
        template <typename F> TimerDestroyedHandler(F* function);
        template <typename O, typename M> TimerDestroyedHandler(O* object, M method);
        template <typename O, typename M> TimerDestroyedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> TimerDestroyedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::System::Threading::ThreadPoolTimer const& timer) const;
    };
    struct TimerElapsedHandler : Windows::Foundation::IUnknown
    {
        TimerElapsedHandler(std::nullptr_t = nullptr) noexcept {}
        TimerElapsedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> TimerElapsedHandler(L lambda);
        template <typename F> TimerElapsedHandler(F* function);
        template <typename O, typename M> TimerElapsedHandler(O* object, M method);
        template <typename O, typename M> TimerElapsedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> TimerElapsedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::System::Threading::ThreadPoolTimer const& timer) const;
    };
    struct WorkItemHandler : Windows::Foundation::IUnknown
    {
        WorkItemHandler(std::nullptr_t = nullptr) noexcept {}
        WorkItemHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WorkItemHandler(L lambda);
        template <typename F> WorkItemHandler(F* function);
        template <typename O, typename M> WorkItemHandler(O* object, M method);
        template <typename O, typename M> WorkItemHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WorkItemHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IAsyncAction const& operation) const;
    };
    struct ThreadPool
    {
        ThreadPool() = delete;
        static auto RunAsync(Windows::System::Threading::WorkItemHandler const& handler);
        static auto RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority);
        static auto RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options);
    };
    struct __declspec(empty_bases) ThreadPoolTimer : Windows::System::Threading::IThreadPoolTimer
    {
        ThreadPoolTimer(std::nullptr_t) noexcept {}
        ThreadPoolTimer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Threading::IThreadPoolTimer(ptr, take_ownership_from_abi) {}
        static auto CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period);
        static auto CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay);
        static auto CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period, Windows::System::Threading::TimerDestroyedHandler const& destroyed);
        static auto CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay, Windows::System::Threading::TimerDestroyedHandler const& destroyed);
    };
}
#endif
