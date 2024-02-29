// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Search_0_H
#define WINRT_Windows_Storage_Search_0_H
WINRT_EXPORT namespace winrt::Windows::Data::Text
{
    struct TextSegment;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageItem;
    struct StorageFile;
    struct StorageFolder;
    struct StorageLibraryChangeTracker;
}
WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties
{
    enum class PropertyPrefetchOptions : uint32_t;
    enum class ThumbnailMode : int32_t;
    enum class ThumbnailOptions : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Search
{
    enum class CommonFileQuery : int32_t
    {
        DefaultQuery = 0,
        OrderByName = 1,
        OrderByTitle = 2,
        OrderByMusicProperties = 3,
        OrderBySearchRank = 4,
        OrderByDate = 5,
    };
    enum class CommonFolderQuery : int32_t
    {
        DefaultQuery = 0,
        GroupByYear = 100,
        GroupByMonth = 101,
        GroupByArtist = 102,
        GroupByAlbum = 103,
        GroupByAlbumArtist = 104,
        GroupByComposer = 105,
        GroupByGenre = 106,
        GroupByPublishedYear = 107,
        GroupByRating = 108,
        GroupByTag = 109,
        GroupByAuthor = 110,
        GroupByType = 111,
    };
    enum class DateStackOption : int32_t
    {
        None = 0,
        Year = 1,
        Month = 2,
    };
    enum class FolderDepth : int32_t
    {
        Shallow = 0,
        Deep = 1,
    };
    enum class IndexedState : int32_t
    {
        Unknown = 0,
        NotIndexed = 1,
        PartiallyIndexed = 2,
        FullyIndexed = 3,
    };
    enum class IndexerOption : int32_t
    {
        UseIndexerWhenAvailable = 0,
        OnlyUseIndexer = 1,
        DoNotUseIndexer = 2,
        OnlyUseIndexerAndOptimizeForIndexedProperties = 3,
    };
    struct IContentIndexer;
    struct IContentIndexerQuery;
    struct IContentIndexerQueryOperations;
    struct IContentIndexerStatics;
    struct IIndexableContent;
    struct IQueryOptions;
    struct IQueryOptionsFactory;
    struct IQueryOptionsWithProviderFilter;
    struct IStorageFileQueryResult;
    struct IStorageFileQueryResult2;
    struct IStorageFolderQueryOperations;
    struct IStorageFolderQueryResult;
    struct IStorageItemQueryResult;
    struct IStorageLibraryChangeTrackerTriggerDetails;
    struct IStorageLibraryContentChangedTriggerDetails;
    struct IStorageQueryResultBase;
    struct IValueAndLanguage;
    struct ContentIndexer;
    struct ContentIndexerQuery;
    struct IndexableContent;
    struct QueryOptions;
    struct SortEntryVector;
    struct StorageFileQueryResult;
    struct StorageFolderQueryResult;
    struct StorageItemQueryResult;
    struct StorageLibraryChangeTrackerTriggerDetails;
    struct StorageLibraryContentChangedTriggerDetails;
    struct ValueAndLanguage;
    struct SortEntry;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::Search::IContentIndexer>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IContentIndexerQuery>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IContentIndexerQueryOperations>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IContentIndexerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IIndexableContent>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IQueryOptions>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IQueryOptionsFactory>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IQueryOptionsWithProviderFilter>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IStorageFileQueryResult>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IStorageFileQueryResult2>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IStorageFolderQueryOperations>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IStorageFolderQueryResult>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IStorageItemQueryResult>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IStorageLibraryChangeTrackerTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IStorageQueryResultBase>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::IValueAndLanguage>{ using type = interface_category; };
    template <> struct category<Windows::Storage::Search::ContentIndexer>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::ContentIndexerQuery>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::IndexableContent>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::QueryOptions>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::SortEntryVector>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::StorageFileQueryResult>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::StorageFolderQueryResult>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::StorageItemQueryResult>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::StorageLibraryChangeTrackerTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::ValueAndLanguage>{ using type = class_category; };
    template <> struct category<Windows::Storage::Search::CommonFileQuery>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Search::CommonFolderQuery>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Search::DateStackOption>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Search::FolderDepth>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Search::IndexedState>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Search::IndexerOption>{ using type = enum_category; };
    template <> struct category<Windows::Storage::Search::SortEntry>{ using type = struct_category<hstring, bool>; };
    template <> inline constexpr auto& name_v<Windows::Storage::Search::ContentIndexer> = L"Windows.Storage.Search.ContentIndexer";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::ContentIndexerQuery> = L"Windows.Storage.Search.ContentIndexerQuery";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IndexableContent> = L"Windows.Storage.Search.IndexableContent";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::QueryOptions> = L"Windows.Storage.Search.QueryOptions";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::SortEntryVector> = L"Windows.Storage.Search.SortEntryVector";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::StorageFileQueryResult> = L"Windows.Storage.Search.StorageFileQueryResult";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::StorageFolderQueryResult> = L"Windows.Storage.Search.StorageFolderQueryResult";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::StorageItemQueryResult> = L"Windows.Storage.Search.StorageItemQueryResult";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::StorageLibraryChangeTrackerTriggerDetails> = L"Windows.Storage.Search.StorageLibraryChangeTrackerTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails> = L"Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::ValueAndLanguage> = L"Windows.Storage.Search.ValueAndLanguage";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::CommonFileQuery> = L"Windows.Storage.Search.CommonFileQuery";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::CommonFolderQuery> = L"Windows.Storage.Search.CommonFolderQuery";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::DateStackOption> = L"Windows.Storage.Search.DateStackOption";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::FolderDepth> = L"Windows.Storage.Search.FolderDepth";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IndexedState> = L"Windows.Storage.Search.IndexedState";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IndexerOption> = L"Windows.Storage.Search.IndexerOption";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::SortEntry> = L"Windows.Storage.Search.SortEntry";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IContentIndexer> = L"Windows.Storage.Search.IContentIndexer";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IContentIndexerQuery> = L"Windows.Storage.Search.IContentIndexerQuery";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IContentIndexerQueryOperations> = L"Windows.Storage.Search.IContentIndexerQueryOperations";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IContentIndexerStatics> = L"Windows.Storage.Search.IContentIndexerStatics";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IIndexableContent> = L"Windows.Storage.Search.IIndexableContent";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IQueryOptions> = L"Windows.Storage.Search.IQueryOptions";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IQueryOptionsFactory> = L"Windows.Storage.Search.IQueryOptionsFactory";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IQueryOptionsWithProviderFilter> = L"Windows.Storage.Search.IQueryOptionsWithProviderFilter";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IStorageFileQueryResult> = L"Windows.Storage.Search.IStorageFileQueryResult";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IStorageFileQueryResult2> = L"Windows.Storage.Search.IStorageFileQueryResult2";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IStorageFolderQueryOperations> = L"Windows.Storage.Search.IStorageFolderQueryOperations";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IStorageFolderQueryResult> = L"Windows.Storage.Search.IStorageFolderQueryResult";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IStorageItemQueryResult> = L"Windows.Storage.Search.IStorageItemQueryResult";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IStorageLibraryChangeTrackerTriggerDetails> = L"Windows.Storage.Search.IStorageLibraryChangeTrackerTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails> = L"Windows.Storage.Search.IStorageLibraryContentChangedTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IStorageQueryResultBase> = L"Windows.Storage.Search.IStorageQueryResultBase";
    template <> inline constexpr auto& name_v<Windows::Storage::Search::IValueAndLanguage> = L"Windows.Storage.Search.IValueAndLanguage";
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IContentIndexer>{ 0xB1767F8D,0xF698,0x4982,{ 0xB0,0x5F,0x3A,0x6E,0x8C,0xAB,0x01,0xA2 } }; // B1767F8D-F698-4982-B05F-3A6E8CAB01A2
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IContentIndexerQuery>{ 0x70E3B0F8,0x4BFC,0x428A,{ 0x88,0x89,0xCC,0x51,0xDA,0x9A,0x7B,0x9D } }; // 70E3B0F8-4BFC-428A-8889-CC51DA9A7B9D
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IContentIndexerQueryOperations>{ 0x28823E10,0x4786,0x42F1,{ 0x97,0x30,0x79,0x2B,0x35,0x66,0xB1,0x50 } }; // 28823E10-4786-42F1-9730-792B3566B150
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IContentIndexerStatics>{ 0x8C488375,0xB37E,0x4C60,{ 0x9B,0xA8,0xB7,0x60,0xFD,0xA3,0xE5,0x9D } }; // 8C488375-B37E-4C60-9BA8-B760FDA3E59D
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IIndexableContent>{ 0xCCF1A05F,0xD4B5,0x483A,{ 0xB0,0x6E,0xE0,0xDB,0x1E,0xC4,0x20,0xE4 } }; // CCF1A05F-D4B5-483A-B06E-E0DB1EC420E4
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IQueryOptions>{ 0x1E5E46EE,0x0F45,0x4838,{ 0xA8,0xE9,0xD0,0x47,0x9D,0x44,0x6C,0x30 } }; // 1E5E46EE-0F45-4838-A8E9-D0479D446C30
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IQueryOptionsFactory>{ 0x032E1F8C,0xA9C1,0x4E71,{ 0x80,0x11,0x0D,0xEE,0x9D,0x48,0x11,0xA3 } }; // 032E1F8C-A9C1-4E71-8011-0DEE9D4811A3
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IQueryOptionsWithProviderFilter>{ 0x5B9D1026,0x15C4,0x44DD,{ 0xB8,0x9A,0x47,0xA5,0x9B,0x7D,0x7C,0x4F } }; // 5B9D1026-15C4-44DD-B89A-47A59B7D7C4F
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IStorageFileQueryResult>{ 0x52FDA447,0x2BAA,0x412C,{ 0xB2,0x9F,0xD4,0xB1,0x77,0x8E,0xFA,0x1E } }; // 52FDA447-2BAA-412C-B29F-D4B1778EFA1E
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IStorageFileQueryResult2>{ 0x4E5DB9DD,0x7141,0x46C4,{ 0x8B,0xE3,0xE9,0xDC,0x9E,0x27,0x27,0x5C } }; // 4E5DB9DD-7141-46C4-8BE3-E9DC9E27275C
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IStorageFolderQueryOperations>{ 0xCB43CCC9,0x446B,0x4A4F,{ 0xBE,0x97,0x75,0x77,0x71,0xBE,0x52,0x03 } }; // CB43CCC9-446B-4A4F-BE97-757771BE5203
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IStorageFolderQueryResult>{ 0x6654C911,0x7D66,0x46FA,{ 0xAE,0xCF,0xE4,0xA4,0xBA,0xA9,0x3A,0xB8 } }; // 6654C911-7D66-46FA-AECF-E4A4BAA93AB8
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IStorageItemQueryResult>{ 0xE8948079,0x9D58,0x47B8,{ 0xB2,0xB2,0x41,0xB0,0x7F,0x47,0x95,0xF9 } }; // E8948079-9D58-47B8-B2B2-41B07F4795F9
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IStorageLibraryChangeTrackerTriggerDetails>{ 0x1DC7A369,0xB7A3,0x4DF2,{ 0x9D,0x61,0xEB,0xA8,0x5A,0x03,0x43,0xD2 } }; // 1DC7A369-B7A3-4DF2-9D61-EBA85A0343D2
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>{ 0x2A371977,0xABBF,0x4E1D,{ 0x8A,0xA5,0x63,0x85,0xD8,0x88,0x47,0x99 } }; // 2A371977-ABBF-4E1D-8AA5-6385D8884799
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IStorageQueryResultBase>{ 0xC297D70D,0x7353,0x47AB,{ 0xBA,0x58,0x8C,0x61,0x42,0x5D,0xC5,0x4B } }; // C297D70D-7353-47AB-BA58-8C61425DC54B
    template <> inline constexpr guid guid_v<Windows::Storage::Search::IValueAndLanguage>{ 0xB9914881,0xA1EE,0x4BC4,{ 0x92,0xA5,0x46,0x69,0x68,0xE3,0x04,0x36 } }; // B9914881-A1EE-4BC4-92A5-466968E30436
    template <> struct default_interface<Windows::Storage::Search::ContentIndexer>{ using type = Windows::Storage::Search::IContentIndexer; };
    template <> struct default_interface<Windows::Storage::Search::ContentIndexerQuery>{ using type = Windows::Storage::Search::IContentIndexerQuery; };
    template <> struct default_interface<Windows::Storage::Search::IndexableContent>{ using type = Windows::Storage::Search::IIndexableContent; };
    template <> struct default_interface<Windows::Storage::Search::QueryOptions>{ using type = Windows::Storage::Search::IQueryOptions; };
    template <> struct default_interface<Windows::Storage::Search::SortEntryVector>{ using type = Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry>; };
    template <> struct default_interface<Windows::Storage::Search::StorageFileQueryResult>{ using type = Windows::Storage::Search::IStorageFileQueryResult; };
    template <> struct default_interface<Windows::Storage::Search::StorageFolderQueryResult>{ using type = Windows::Storage::Search::IStorageFolderQueryResult; };
    template <> struct default_interface<Windows::Storage::Search::StorageItemQueryResult>{ using type = Windows::Storage::Search::IStorageItemQueryResult; };
    template <> struct default_interface<Windows::Storage::Search::StorageLibraryChangeTrackerTriggerDetails>{ using type = Windows::Storage::Search::IStorageLibraryChangeTrackerTriggerDetails; };
    template <> struct default_interface<Windows::Storage::Search::StorageLibraryContentChangedTriggerDetails>{ using type = Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails; };
    template <> struct default_interface<Windows::Storage::Search::ValueAndLanguage>{ using type = Windows::Storage::Search::IValueAndLanguage; };
    template <> struct abi<Windows::Storage::Search::IContentIndexer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteMultipleAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RetrievePropertiesAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Revision(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IContentIndexerQuery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCountAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPropertiesRangeAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetRangeAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryFolder(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IContentIndexerQueryOperations>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateQueryWithSortOrderAndLanguage(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateQueryWithSortOrder(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateQuery(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IContentIndexerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetIndexerWithName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIndexer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IIndexableContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Stream(void**) noexcept = 0;
            virtual int32_t __stdcall put_Stream(void*) noexcept = 0;
            virtual int32_t __stdcall get_StreamContentType(void**) noexcept = 0;
            virtual int32_t __stdcall put_StreamContentType(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IQueryOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FileTypeFilter(void**) noexcept = 0;
            virtual int32_t __stdcall get_FolderDepth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FolderDepth(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationSearchFilter(void**) noexcept = 0;
            virtual int32_t __stdcall put_ApplicationSearchFilter(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserSearchFilter(void**) noexcept = 0;
            virtual int32_t __stdcall put_UserSearchFilter(void*) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall put_Language(void*) noexcept = 0;
            virtual int32_t __stdcall get_IndexerOption(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IndexerOption(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SortOrder(void**) noexcept = 0;
            virtual int32_t __stdcall get_GroupPropertyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DateStackOption(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SaveToString(void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromString(void*) noexcept = 0;
            virtual int32_t __stdcall SetThumbnailPrefetch(int32_t, uint32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetPropertyPrefetch(uint32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IQueryOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCommonFileQuery(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCommonFolderQuery(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IQueryOptionsWithProviderFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StorageProviderIdFilter(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IStorageFileQueryResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFilesAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFilesAsyncDefaultStartAndCount(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IStorageFileQueryResult2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetMatchingPropertiesWithRanges(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IStorageFolderQueryOperations>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetIndexedStateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileQueryOverloadDefault(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileQuery(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFileQueryWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFolderQueryOverloadDefault(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFolderQuery(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFolderQueryWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateItemQuery(void**) noexcept = 0;
            virtual int32_t __stdcall CreateItemQueryWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFilesAsync(int32_t, uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFilesAsyncOverloadDefaultStartAndCount(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFoldersAsync(int32_t, uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFoldersAsyncOverloadDefaultStartAndCount(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetItemsAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall AreQueryOptionsSupported(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsCommonFolderQuerySupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsCommonFileQuerySupported(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IStorageFolderQueryResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFoldersAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetFoldersAsyncDefaultStartAndCount(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IStorageItemQueryResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetItemsAsync(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetItemsAsyncDefaultStartAndCount(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IStorageLibraryChangeTrackerTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Folder(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChangeTracker(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Folder(void**) noexcept = 0;
            virtual int32_t __stdcall CreateModifiedSinceQuery(int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IStorageQueryResultBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetItemCountAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Folder(void**) noexcept = 0;
            virtual int32_t __stdcall add_ContentsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ContentsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_OptionsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OptionsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall FindStartIndexAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentQueryOptions(void**) noexcept = 0;
            virtual int32_t __stdcall ApplyNewQueryOptions(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Search::IValueAndLanguage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall put_Language(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IContentIndexer
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) AddAsync(Windows::Storage::Search::IIndexableContent const& indexableContent) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) UpdateAsync(Windows::Storage::Search::IIndexableContent const& indexableContent) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DeleteAsync(param::hstring const& contentId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DeleteMultipleAsync(param::async_iterable<hstring> const& contentIds) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DeleteAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>) RetrievePropertiesAsync(param::hstring const& contentId, param::async_iterable<hstring> const& propertiesToRetrieve) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) Revision() const;
    };
    template <> struct consume<Windows::Storage::Search::IContentIndexer>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IContentIndexer<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IContentIndexerQuery
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<uint32_t>) GetCountAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>>) GetPropertiesAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>>) GetPropertiesAsync(uint32_t startIndex, uint32_t maxItems) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>>) GetAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::Search::IIndexableContent>>) GetAsync(uint32_t startIndex, uint32_t maxItems) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) QueryFolder() const;
    };
    template <> struct consume<Windows::Storage::Search::IContentIndexerQuery>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IContentIndexerQuery<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IContentIndexerQueryOperations
    {
        WINRT_IMPL_AUTO(Windows::Storage::Search::ContentIndexerQuery) CreateQuery(param::hstring const& searchFilter, param::iterable<hstring> const& propertiesToRetrieve, param::iterable<Windows::Storage::Search::SortEntry> const& sortOrder, param::hstring const& searchFilterLanguage) const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::ContentIndexerQuery) CreateQuery(param::hstring const& searchFilter, param::iterable<hstring> const& propertiesToRetrieve, param::iterable<Windows::Storage::Search::SortEntry> const& sortOrder) const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::ContentIndexerQuery) CreateQuery(param::hstring const& searchFilter, param::iterable<hstring> const& propertiesToRetrieve) const;
    };
    template <> struct consume<Windows::Storage::Search::IContentIndexerQueryOperations>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IContentIndexerQueryOperations<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IContentIndexerStatics
    {
        WINRT_IMPL_AUTO(Windows::Storage::Search::ContentIndexer) GetIndexer(param::hstring const& indexName) const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::ContentIndexer) GetIndexer() const;
    };
    template <> struct consume<Windows::Storage::Search::IContentIndexerStatics>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IContentIndexerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IIndexableContent
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        WINRT_IMPL_AUTO(void) Id(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>) Properties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStream) Stream() const;
        WINRT_IMPL_AUTO(void) Stream(Windows::Storage::Streams::IRandomAccessStream const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) StreamContentType() const;
        WINRT_IMPL_AUTO(void) StreamContentType(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Storage::Search::IIndexableContent>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IIndexableContent<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IQueryOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) FileTypeFilter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Search::FolderDepth) FolderDepth() const;
        WINRT_IMPL_AUTO(void) FolderDepth(Windows::Storage::Search::FolderDepth const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ApplicationSearchFilter() const;
        WINRT_IMPL_AUTO(void) ApplicationSearchFilter(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserSearchFilter() const;
        WINRT_IMPL_AUTO(void) UserSearchFilter(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Language() const;
        WINRT_IMPL_AUTO(void) Language(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Search::IndexerOption) IndexerOption() const;
        WINRT_IMPL_AUTO(void) IndexerOption(Windows::Storage::Search::IndexerOption const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Storage::Search::SortEntry>) SortOrder() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) GroupPropertyName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Search::DateStackOption) DateStackOption() const;
        WINRT_IMPL_AUTO(hstring) SaveToString() const;
        WINRT_IMPL_AUTO(void) LoadFromString(param::hstring const& value) const;
        WINRT_IMPL_AUTO(void) SetThumbnailPrefetch(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions const& options) const;
        WINRT_IMPL_AUTO(void) SetPropertyPrefetch(Windows::Storage::FileProperties::PropertyPrefetchOptions const& options, param::iterable<hstring> const& propertiesToRetrieve) const;
    };
    template <> struct consume<Windows::Storage::Search::IQueryOptions>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IQueryOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IQueryOptionsFactory
    {
        WINRT_IMPL_AUTO(Windows::Storage::Search::QueryOptions) CreateCommonFileQuery(Windows::Storage::Search::CommonFileQuery const& query, param::iterable<hstring> const& fileTypeFilter) const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::QueryOptions) CreateCommonFolderQuery(Windows::Storage::Search::CommonFolderQuery const& query) const;
    };
    template <> struct consume<Windows::Storage::Search::IQueryOptionsFactory>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IQueryOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IQueryOptionsWithProviderFilter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) StorageProviderIdFilter() const;
    };
    template <> struct consume<Windows::Storage::Search::IQueryOptionsWithProviderFilter>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IQueryOptionsWithProviderFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IStorageFileQueryResult
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>) GetFilesAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>) GetFilesAsync() const;
    };
    template <> struct consume<Windows::Storage::Search::IStorageFileQueryResult>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IStorageFileQueryResult<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IStorageFileQueryResult2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>>) GetMatchingPropertiesWithRanges(Windows::Storage::StorageFile const& file) const;
    };
    template <> struct consume<Windows::Storage::Search::IStorageFileQueryResult2>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IStorageFileQueryResult2<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IStorageFolderQueryOperations
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Search::IndexedState>) GetIndexedStateAsync() const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::StorageFileQueryResult) CreateFileQuery() const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::StorageFileQueryResult) CreateFileQuery(Windows::Storage::Search::CommonFileQuery const& query) const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::StorageFileQueryResult) CreateFileQueryWithOptions(Windows::Storage::Search::QueryOptions const& queryOptions) const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::StorageFolderQueryResult) CreateFolderQuery() const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::StorageFolderQueryResult) CreateFolderQuery(Windows::Storage::Search::CommonFolderQuery const& query) const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::StorageFolderQueryResult) CreateFolderQueryWithOptions(Windows::Storage::Search::QueryOptions const& queryOptions) const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::StorageItemQueryResult) CreateItemQuery() const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::StorageItemQueryResult) CreateItemQueryWithOptions(Windows::Storage::Search::QueryOptions const& queryOptions) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>) GetFilesAsync(Windows::Storage::Search::CommonFileQuery const& query, uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>) GetFilesAsync(Windows::Storage::Search::CommonFileQuery const& query) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>>) GetFoldersAsync(Windows::Storage::Search::CommonFolderQuery const& query, uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>>) GetFoldersAsync(Windows::Storage::Search::CommonFolderQuery const& query) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>) GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const;
        WINRT_IMPL_AUTO(bool) AreQueryOptionsSupported(Windows::Storage::Search::QueryOptions const& queryOptions) const;
        WINRT_IMPL_AUTO(bool) IsCommonFolderQuerySupported(Windows::Storage::Search::CommonFolderQuery const& query) const;
        WINRT_IMPL_AUTO(bool) IsCommonFileQuerySupported(Windows::Storage::Search::CommonFileQuery const& query) const;
    };
    template <> struct consume<Windows::Storage::Search::IStorageFolderQueryOperations>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IStorageFolderQueryOperations<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IStorageFolderQueryResult
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>>) GetFoldersAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>>) GetFoldersAsync() const;
    };
    template <> struct consume<Windows::Storage::Search::IStorageFolderQueryResult>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IStorageFolderQueryResult<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IStorageItemQueryResult
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>) GetItemsAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>) GetItemsAsync() const;
    };
    template <> struct consume<Windows::Storage::Search::IStorageItemQueryResult>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IStorageItemQueryResult<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IStorageLibraryChangeTrackerTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) Folder() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageLibraryChangeTracker) ChangeTracker() const;
    };
    template <> struct consume<Windows::Storage::Search::IStorageLibraryChangeTrackerTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IStorageLibraryChangeTrackerTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IStorageLibraryContentChangedTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) Folder() const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::StorageItemQueryResult) CreateModifiedSinceQuery(Windows::Foundation::DateTime const& lastQueryTime) const;
    };
    template <> struct consume<Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IStorageLibraryContentChangedTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IStorageQueryResultBase
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<uint32_t>) GetItemCountAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) Folder() const;
        WINRT_IMPL_AUTO(winrt::event_token) ContentsChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& handler) const;
        using ContentsChanged_revoker = impl::event_revoker<Windows::Storage::Search::IStorageQueryResultBase, &impl::abi_t<Windows::Storage::Search::IStorageQueryResultBase>::remove_ContentsChanged>;
        [[nodiscard]] ContentsChanged_revoker ContentsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ContentsChanged(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) OptionsChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& changedHandler) const;
        using OptionsChanged_revoker = impl::event_revoker<Windows::Storage::Search::IStorageQueryResultBase, &impl::abi_t<Windows::Storage::Search::IStorageQueryResultBase>::remove_OptionsChanged>;
        [[nodiscard]] OptionsChanged_revoker OptionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Search::IStorageQueryResultBase, Windows::Foundation::IInspectable> const& changedHandler) const;
        WINRT_IMPL_AUTO(void) OptionsChanged(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<uint32_t>) FindStartIndexAsync(Windows::Foundation::IInspectable const& value) const;
        WINRT_IMPL_AUTO(Windows::Storage::Search::QueryOptions) GetCurrentQueryOptions() const;
        WINRT_IMPL_AUTO(void) ApplyNewQueryOptions(Windows::Storage::Search::QueryOptions const& newQueryOptions) const;
    };
    template <> struct consume<Windows::Storage::Search::IStorageQueryResultBase>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IStorageQueryResultBase<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Search_IValueAndLanguage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Language() const;
        WINRT_IMPL_AUTO(void) Language(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Value() const;
        WINRT_IMPL_AUTO(void) Value(Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::Storage::Search::IValueAndLanguage>
    {
        template <typename D> using type = consume_Windows_Storage_Search_IValueAndLanguage<D>;
    };
    struct struct_Windows_Storage_Search_SortEntry
    {
        void* PropertyName;
        bool AscendingOrder;
    };
    template <> struct abi<Windows::Storage::Search::SortEntry>
    {
        using type = struct_Windows_Storage_Search_SortEntry;
    };
}
#endif
