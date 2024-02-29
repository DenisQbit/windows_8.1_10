// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Http_0_H
#define WINRT_Windows_Web_Http_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct HResult;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) IAsyncOperationWithProgress;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IKeyValuePair;
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    enum class SocketSslErrorSeverity : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates
{
    struct Certificate;
    enum class ChainValidationResult : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
    struct IOutputStream;
    enum class UnicodeEncoding : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters
{
    struct IHttpFilter;
}
WINRT_EXPORT namespace winrt::Windows::Web::Http::Headers
{
    struct HttpContentHeaderCollection;
    struct HttpRequestHeaderCollection;
    struct HttpResponseHeaderCollection;
}
WINRT_EXPORT namespace winrt::Windows::Web::Http
{
    enum class HttpCompletionOption : int32_t
    {
        ResponseContentRead = 0,
        ResponseHeadersRead = 1,
    };
    enum class HttpProgressStage : int32_t
    {
        None = 0,
        DetectingProxy = 10,
        ResolvingName = 20,
        ConnectingToServer = 30,
        NegotiatingSsl = 40,
        SendingHeaders = 50,
        SendingContent = 60,
        WaitingForResponse = 70,
        ReceivingHeaders = 80,
        ReceivingContent = 90,
    };
    enum class HttpResponseMessageSource : int32_t
    {
        None = 0,
        Cache = 1,
        Network = 2,
    };
    enum class HttpStatusCode : int32_t
    {
        None = 0,
        Continue = 100,
        SwitchingProtocols = 101,
        Processing = 102,
        Ok = 200,
        Created = 201,
        Accepted = 202,
        NonAuthoritativeInformation = 203,
        NoContent = 204,
        ResetContent = 205,
        PartialContent = 206,
        MultiStatus = 207,
        AlreadyReported = 208,
        IMUsed = 226,
        MultipleChoices = 300,
        MovedPermanently = 301,
        Found = 302,
        SeeOther = 303,
        NotModified = 304,
        UseProxy = 305,
        TemporaryRedirect = 307,
        PermanentRedirect = 308,
        BadRequest = 400,
        Unauthorized = 401,
        PaymentRequired = 402,
        Forbidden = 403,
        NotFound = 404,
        MethodNotAllowed = 405,
        NotAcceptable = 406,
        ProxyAuthenticationRequired = 407,
        RequestTimeout = 408,
        Conflict = 409,
        Gone = 410,
        LengthRequired = 411,
        PreconditionFailed = 412,
        RequestEntityTooLarge = 413,
        RequestUriTooLong = 414,
        UnsupportedMediaType = 415,
        RequestedRangeNotSatisfiable = 416,
        ExpectationFailed = 417,
        UnprocessableEntity = 422,
        Locked = 423,
        FailedDependency = 424,
        UpgradeRequired = 426,
        PreconditionRequired = 428,
        TooManyRequests = 429,
        RequestHeaderFieldsTooLarge = 431,
        InternalServerError = 500,
        NotImplemented = 501,
        BadGateway = 502,
        ServiceUnavailable = 503,
        GatewayTimeout = 504,
        HttpVersionNotSupported = 505,
        VariantAlsoNegotiates = 506,
        InsufficientStorage = 507,
        LoopDetected = 508,
        NotExtended = 510,
        NetworkAuthenticationRequired = 511,
    };
    enum class HttpVersion : int32_t
    {
        None = 0,
        Http10 = 1,
        Http11 = 2,
        Http20 = 3,
    };
    struct IHttpBufferContentFactory;
    struct IHttpClient;
    struct IHttpClient2;
    struct IHttpClientFactory;
    struct IHttpContent;
    struct IHttpCookie;
    struct IHttpCookieFactory;
    struct IHttpCookieManager;
    struct IHttpFormUrlEncodedContentFactory;
    struct IHttpGetBufferResult;
    struct IHttpGetInputStreamResult;
    struct IHttpGetStringResult;
    struct IHttpMethod;
    struct IHttpMethodFactory;
    struct IHttpMethodStatics;
    struct IHttpMultipartContent;
    struct IHttpMultipartContentFactory;
    struct IHttpMultipartFormDataContent;
    struct IHttpMultipartFormDataContentFactory;
    struct IHttpRequestMessage;
    struct IHttpRequestMessageFactory;
    struct IHttpRequestResult;
    struct IHttpResponseMessage;
    struct IHttpResponseMessageFactory;
    struct IHttpStreamContentFactory;
    struct IHttpStringContentFactory;
    struct IHttpTransportInformation;
    struct HttpBufferContent;
    struct HttpClient;
    struct HttpCookie;
    struct HttpCookieCollection;
    struct HttpCookieManager;
    struct HttpFormUrlEncodedContent;
    struct HttpGetBufferResult;
    struct HttpGetInputStreamResult;
    struct HttpGetStringResult;
    struct HttpMethod;
    struct HttpMultipartContent;
    struct HttpMultipartFormDataContent;
    struct HttpRequestMessage;
    struct HttpRequestResult;
    struct HttpResponseMessage;
    struct HttpStreamContent;
    struct HttpStringContent;
    struct HttpTransportInformation;
    struct HttpProgress;
}
namespace winrt::impl
{
    template <> struct category<Windows::Web::Http::IHttpBufferContentFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpClient>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpClient2>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpClientFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpContent>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpCookie>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpCookieFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpCookieManager>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpFormUrlEncodedContentFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpGetBufferResult>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpGetInputStreamResult>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpGetStringResult>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpMethod>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpMethodFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpMethodStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpMultipartContent>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpMultipartContentFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpMultipartFormDataContent>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpMultipartFormDataContentFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpRequestMessage>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpRequestMessageFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpRequestResult>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpResponseMessage>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpResponseMessageFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpStreamContentFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpStringContentFactory>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::IHttpTransportInformation>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::HttpBufferContent>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpClient>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpCookie>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpCookieCollection>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpCookieManager>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpFormUrlEncodedContent>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpGetBufferResult>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpGetInputStreamResult>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpGetStringResult>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpMethod>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpMultipartContent>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpMultipartFormDataContent>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpRequestMessage>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpRequestResult>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpResponseMessage>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpStreamContent>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpStringContent>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpTransportInformation>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::HttpCompletionOption>{ using type = enum_category; };
    template <> struct category<Windows::Web::Http::HttpProgressStage>{ using type = enum_category; };
    template <> struct category<Windows::Web::Http::HttpResponseMessageSource>{ using type = enum_category; };
    template <> struct category<Windows::Web::Http::HttpStatusCode>{ using type = enum_category; };
    template <> struct category<Windows::Web::Http::HttpVersion>{ using type = enum_category; };
    template <> struct category<Windows::Web::Http::HttpProgress>{ using type = struct_category<Windows::Web::Http::HttpProgressStage, uint64_t, Windows::Foundation::IReference<uint64_t>, uint64_t, Windows::Foundation::IReference<uint64_t>, uint32_t>; };
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpBufferContent> = L"Windows.Web.Http.HttpBufferContent";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpClient> = L"Windows.Web.Http.HttpClient";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpCookie> = L"Windows.Web.Http.HttpCookie";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpCookieCollection> = L"Windows.Web.Http.HttpCookieCollection";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpCookieManager> = L"Windows.Web.Http.HttpCookieManager";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpFormUrlEncodedContent> = L"Windows.Web.Http.HttpFormUrlEncodedContent";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpGetBufferResult> = L"Windows.Web.Http.HttpGetBufferResult";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpGetInputStreamResult> = L"Windows.Web.Http.HttpGetInputStreamResult";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpGetStringResult> = L"Windows.Web.Http.HttpGetStringResult";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpMethod> = L"Windows.Web.Http.HttpMethod";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpMultipartContent> = L"Windows.Web.Http.HttpMultipartContent";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpMultipartFormDataContent> = L"Windows.Web.Http.HttpMultipartFormDataContent";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpRequestMessage> = L"Windows.Web.Http.HttpRequestMessage";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpRequestResult> = L"Windows.Web.Http.HttpRequestResult";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpResponseMessage> = L"Windows.Web.Http.HttpResponseMessage";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpStreamContent> = L"Windows.Web.Http.HttpStreamContent";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpStringContent> = L"Windows.Web.Http.HttpStringContent";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpTransportInformation> = L"Windows.Web.Http.HttpTransportInformation";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpCompletionOption> = L"Windows.Web.Http.HttpCompletionOption";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpProgressStage> = L"Windows.Web.Http.HttpProgressStage";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpResponseMessageSource> = L"Windows.Web.Http.HttpResponseMessageSource";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpStatusCode> = L"Windows.Web.Http.HttpStatusCode";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpVersion> = L"Windows.Web.Http.HttpVersion";
    template <> inline constexpr auto& name_v<Windows::Web::Http::HttpProgress> = L"Windows.Web.Http.HttpProgress";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpBufferContentFactory> = L"Windows.Web.Http.IHttpBufferContentFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpClient> = L"Windows.Web.Http.IHttpClient";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpClient2> = L"Windows.Web.Http.IHttpClient2";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpClientFactory> = L"Windows.Web.Http.IHttpClientFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpContent> = L"Windows.Web.Http.IHttpContent";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpCookie> = L"Windows.Web.Http.IHttpCookie";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpCookieFactory> = L"Windows.Web.Http.IHttpCookieFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpCookieManager> = L"Windows.Web.Http.IHttpCookieManager";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpFormUrlEncodedContentFactory> = L"Windows.Web.Http.IHttpFormUrlEncodedContentFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpGetBufferResult> = L"Windows.Web.Http.IHttpGetBufferResult";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpGetInputStreamResult> = L"Windows.Web.Http.IHttpGetInputStreamResult";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpGetStringResult> = L"Windows.Web.Http.IHttpGetStringResult";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpMethod> = L"Windows.Web.Http.IHttpMethod";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpMethodFactory> = L"Windows.Web.Http.IHttpMethodFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpMethodStatics> = L"Windows.Web.Http.IHttpMethodStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpMultipartContent> = L"Windows.Web.Http.IHttpMultipartContent";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpMultipartContentFactory> = L"Windows.Web.Http.IHttpMultipartContentFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpMultipartFormDataContent> = L"Windows.Web.Http.IHttpMultipartFormDataContent";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpMultipartFormDataContentFactory> = L"Windows.Web.Http.IHttpMultipartFormDataContentFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpRequestMessage> = L"Windows.Web.Http.IHttpRequestMessage";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpRequestMessageFactory> = L"Windows.Web.Http.IHttpRequestMessageFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpRequestResult> = L"Windows.Web.Http.IHttpRequestResult";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpResponseMessage> = L"Windows.Web.Http.IHttpResponseMessage";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpResponseMessageFactory> = L"Windows.Web.Http.IHttpResponseMessageFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpStreamContentFactory> = L"Windows.Web.Http.IHttpStreamContentFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpStringContentFactory> = L"Windows.Web.Http.IHttpStringContentFactory";
    template <> inline constexpr auto& name_v<Windows::Web::Http::IHttpTransportInformation> = L"Windows.Web.Http.IHttpTransportInformation";
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpBufferContentFactory>{ 0xBC20C193,0xC41F,0x4FF7,{ 0x91,0x23,0x64,0x35,0x73,0x6E,0xAD,0xC2 } }; // BC20C193-C41F-4FF7-9123-6435736EADC2
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpClient>{ 0x7FDA1151,0x3574,0x4880,{ 0xA8,0xBA,0xE6,0xB1,0xE0,0x06,0x1F,0x3D } }; // 7FDA1151-3574-4880-A8BA-E6B1E0061F3D
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpClient2>{ 0xCDD83348,0xE8B7,0x4CEC,{ 0xB1,0xB0,0xDC,0x45,0x5F,0xE7,0x2C,0x92 } }; // CDD83348-E8B7-4CEC-B1B0-DC455FE72C92
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpClientFactory>{ 0xC30C4ECA,0xE3FA,0x4F99,{ 0xAF,0xB4,0x63,0xCC,0x65,0x00,0x94,0x62 } }; // C30C4ECA-E3FA-4F99-AFB4-63CC65009462
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpContent>{ 0x6B14A441,0xFBA7,0x4BD2,{ 0xAF,0x0A,0x83,0x9D,0xE7,0xC2,0x95,0xDA } }; // 6B14A441-FBA7-4BD2-AF0A-839DE7C295DA
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpCookie>{ 0x1F5488E2,0xCC2D,0x4779,{ 0x86,0xA7,0x88,0xF1,0x06,0x87,0xD2,0x49 } }; // 1F5488E2-CC2D-4779-86A7-88F10687D249
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpCookieFactory>{ 0x6A0585A9,0x931C,0x4CD1,{ 0xA9,0x6D,0xC2,0x17,0x01,0x78,0x5C,0x5F } }; // 6A0585A9-931C-4CD1-A96D-C21701785C5F
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpCookieManager>{ 0x7A431780,0xCD4F,0x4E57,{ 0xA8,0x4A,0x5B,0x0A,0x53,0xD6,0xBB,0x96 } }; // 7A431780-CD4F-4E57-A84A-5B0A53D6BB96
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpFormUrlEncodedContentFactory>{ 0x43F0138C,0x2F73,0x4302,{ 0xB5,0xF3,0xEA,0xE9,0x23,0x8A,0x5E,0x01 } }; // 43F0138C-2F73-4302-B5F3-EAE9238A5E01
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpGetBufferResult>{ 0x53D08E7C,0xE209,0x404E,{ 0x9A,0x49,0x74,0x2D,0x82,0x36,0xFD,0x3A } }; // 53D08E7C-E209-404E-9A49-742D8236FD3A
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpGetInputStreamResult>{ 0xD5D63463,0x13AA,0x4EE0,{ 0xBE,0x95,0xA0,0xC3,0x9F,0xE9,0x12,0x03 } }; // D5D63463-13AA-4EE0-BE95-A0C39FE91203
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpGetStringResult>{ 0x9BAC466D,0x8509,0x4775,{ 0xB1,0x6D,0x89,0x53,0xF4,0x7A,0x7F,0x5F } }; // 9BAC466D-8509-4775-B16D-8953F47A7F5F
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpMethod>{ 0x728D4022,0x700D,0x4FE0,{ 0xAF,0xA5,0x40,0x29,0x9C,0x58,0xDB,0xFD } }; // 728D4022-700D-4FE0-AFA5-40299C58DBFD
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpMethodFactory>{ 0x3C51D10D,0x36D7,0x40F8,{ 0xA8,0x6D,0xE7,0x59,0xCA,0xF2,0xF8,0x3F } }; // 3C51D10D-36D7-40F8-A86D-E759CAF2F83F
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpMethodStatics>{ 0x64D171F0,0xD99A,0x4153,{ 0x8D,0xC6,0xD6,0x8C,0xC4,0xCC,0xE3,0x17 } }; // 64D171F0-D99A-4153-8DC6-D68CC4CCE317
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpMultipartContent>{ 0xDF916AFF,0x9926,0x4AC9,{ 0xAA,0xF1,0xE0,0xD0,0x4E,0xF0,0x9B,0xB9 } }; // DF916AFF-9926-4AC9-AAF1-E0D04EF09BB9
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpMultipartContentFactory>{ 0x7EB42E62,0x0222,0x4F20,{ 0xB3,0x72,0x47,0xD5,0xDB,0x5D,0x33,0xB4 } }; // 7EB42E62-0222-4F20-B372-47D5DB5D33B4
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpMultipartFormDataContent>{ 0x64D337E2,0xE967,0x4624,{ 0xB6,0xD1,0xCF,0x74,0x60,0x4A,0x4A,0x42 } }; // 64D337E2-E967-4624-B6D1-CF74604A4A42
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpMultipartFormDataContentFactory>{ 0xA04D7311,0x5017,0x4622,{ 0x93,0xA8,0x49,0xB2,0x4A,0x4F,0xCB,0xFC } }; // A04D7311-5017-4622-93A8-49B24A4FCBFC
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpRequestMessage>{ 0xF5762B3C,0x74D4,0x4811,{ 0xB5,0xDC,0x9F,0x8B,0x4E,0x2F,0x9A,0xBF } }; // F5762B3C-74D4-4811-B5DC-9F8B4E2F9ABF
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpRequestMessageFactory>{ 0x5BAC994E,0x3886,0x412E,{ 0xAE,0xC3,0x52,0xEC,0x7F,0x25,0x61,0x6F } }; // 5BAC994E-3886-412E-AEC3-52EC7F25616F
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpRequestResult>{ 0x6ACF4DA8,0xB5EB,0x4A35,{ 0xA9,0x02,0x42,0x17,0xFB,0xE8,0x20,0xC5 } }; // 6ACF4DA8-B5EB-4A35-A902-4217FBE820C5
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpResponseMessage>{ 0xFEE200FB,0x8664,0x44E0,{ 0x95,0xD9,0x42,0x69,0x61,0x99,0xBF,0xFC } }; // FEE200FB-8664-44E0-95D9-42696199BFFC
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpResponseMessageFactory>{ 0x52A8AF99,0xF095,0x43DA,{ 0xB6,0x0F,0x7C,0xFC,0x2B,0xC7,0xEA,0x2F } }; // 52A8AF99-F095-43DA-B60F-7CFC2BC7EA2F
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpStreamContentFactory>{ 0xF3E64D9D,0xF725,0x407E,{ 0x94,0x2F,0x0E,0xDA,0x18,0x98,0x09,0xF4 } }; // F3E64D9D-F725-407E-942F-0EDA189809F4
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpStringContentFactory>{ 0x46649D5B,0x2E93,0x48EB,{ 0x8E,0x61,0x19,0x67,0x78,0x78,0xE5,0x7F } }; // 46649D5B-2E93-48EB-8E61-19677878E57F
    template <> inline constexpr guid guid_v<Windows::Web::Http::IHttpTransportInformation>{ 0x70127198,0xC6A7,0x4ED0,{ 0x83,0x3A,0x83,0xFD,0x8B,0x8F,0x17,0x8D } }; // 70127198-C6A7-4ED0-833A-83FD8B8F178D
    template <> struct default_interface<Windows::Web::Http::HttpBufferContent>{ using type = Windows::Web::Http::IHttpContent; };
    template <> struct default_interface<Windows::Web::Http::HttpClient>{ using type = Windows::Web::Http::IHttpClient; };
    template <> struct default_interface<Windows::Web::Http::HttpCookie>{ using type = Windows::Web::Http::IHttpCookie; };
    template <> struct default_interface<Windows::Web::Http::HttpCookieCollection>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Web::Http::HttpCookie>; };
    template <> struct default_interface<Windows::Web::Http::HttpCookieManager>{ using type = Windows::Web::Http::IHttpCookieManager; };
    template <> struct default_interface<Windows::Web::Http::HttpFormUrlEncodedContent>{ using type = Windows::Web::Http::IHttpContent; };
    template <> struct default_interface<Windows::Web::Http::HttpGetBufferResult>{ using type = Windows::Web::Http::IHttpGetBufferResult; };
    template <> struct default_interface<Windows::Web::Http::HttpGetInputStreamResult>{ using type = Windows::Web::Http::IHttpGetInputStreamResult; };
    template <> struct default_interface<Windows::Web::Http::HttpGetStringResult>{ using type = Windows::Web::Http::IHttpGetStringResult; };
    template <> struct default_interface<Windows::Web::Http::HttpMethod>{ using type = Windows::Web::Http::IHttpMethod; };
    template <> struct default_interface<Windows::Web::Http::HttpMultipartContent>{ using type = Windows::Web::Http::IHttpContent; };
    template <> struct default_interface<Windows::Web::Http::HttpMultipartFormDataContent>{ using type = Windows::Web::Http::IHttpContent; };
    template <> struct default_interface<Windows::Web::Http::HttpRequestMessage>{ using type = Windows::Web::Http::IHttpRequestMessage; };
    template <> struct default_interface<Windows::Web::Http::HttpRequestResult>{ using type = Windows::Web::Http::IHttpRequestResult; };
    template <> struct default_interface<Windows::Web::Http::HttpResponseMessage>{ using type = Windows::Web::Http::IHttpResponseMessage; };
    template <> struct default_interface<Windows::Web::Http::HttpStreamContent>{ using type = Windows::Web::Http::IHttpContent; };
    template <> struct default_interface<Windows::Web::Http::HttpStringContent>{ using type = Windows::Web::Http::IHttpContent; };
    template <> struct default_interface<Windows::Web::Http::HttpTransportInformation>{ using type = Windows::Web::Http::IHttpTransportInformation; };
    template <> struct abi<Windows::Web::Http::IHttpBufferContentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBufferWithOffset(void*, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpClient>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DeleteAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetWithOptionAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetBufferAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetInputStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetStringAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PostAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall PutAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendRequestAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendRequestWithOptionAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultRequestHeaders(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpClient2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryDeleteAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetAsync2(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetBufferAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetInputStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetStringAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryPostAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryPutAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySendRequestAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySendRequestAsync2(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpClientFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Headers(void**) noexcept = 0;
            virtual int32_t __stdcall BufferAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReadAsBufferAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReadAsInputStreamAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReadAsStringAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryComputeLength(uint64_t*, bool*) noexcept = 0;
            virtual int32_t __stdcall WriteToStreamAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpCookie>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Domain(void**) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall get_Expires(void**) noexcept = 0;
            virtual int32_t __stdcall put_Expires(void*) noexcept = 0;
            virtual int32_t __stdcall get_HttpOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_HttpOnly(bool) noexcept = 0;
            virtual int32_t __stdcall get_Secure(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Secure(bool) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpCookieFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpCookieManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetCookie(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetCookieWithThirdParty(void*, bool, bool*) noexcept = 0;
            virtual int32_t __stdcall DeleteCookie(void*) noexcept = 0;
            virtual int32_t __stdcall GetCookies(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpFormUrlEncodedContentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpGetBufferResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_RequestMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_ResponseMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpGetInputStreamResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_RequestMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_ResponseMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpGetStringResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_RequestMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_ResponseMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpMethod>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Method(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpMethodFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpMethodStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Delete(void**) noexcept = 0;
            virtual int32_t __stdcall get_Get(void**) noexcept = 0;
            virtual int32_t __stdcall get_Head(void**) noexcept = 0;
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
            virtual int32_t __stdcall get_Patch(void**) noexcept = 0;
            virtual int32_t __stdcall get_Post(void**) noexcept = 0;
            virtual int32_t __stdcall get_Put(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpMultipartContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Add(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpMultipartContentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithSubtype(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSubtypeAndBoundary(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpMultipartFormDataContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Add(void*) noexcept = 0;
            virtual int32_t __stdcall AddWithName(void*, void*) noexcept = 0;
            virtual int32_t __stdcall AddWithNameAndFileName(void*, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpMultipartFormDataContentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithBoundary(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpRequestMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall put_Content(void*) noexcept = 0;
            virtual int32_t __stdcall get_Headers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Method(void**) noexcept = 0;
            virtual int32_t __stdcall put_Method(void*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_RequestUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_TransportInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpRequestMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpRequestResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_RequestMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_ResponseMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpResponseMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall put_Content(void*) noexcept = 0;
            virtual int32_t __stdcall get_Headers(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSuccessStatusCode(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ReasonPhrase(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReasonPhrase(void*) noexcept = 0;
            virtual int32_t __stdcall get_RequestMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_RequestMessage(void*) noexcept = 0;
            virtual int32_t __stdcall get_Source(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Source(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StatusCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StatusCode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Version(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Version(int32_t) noexcept = 0;
            virtual int32_t __stdcall EnsureSuccessStatusCode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpResponseMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpStreamContentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromInputStream(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpStringContentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStringWithEncoding(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStringWithEncodingAndMediaType(void*, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::IHttpTransportInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServerCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrorSeverity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrors(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerIntermediateCertificates(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpBufferContentFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpBufferContent) CreateFromBuffer(Windows::Storage::Streams::IBuffer const& content) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpBufferContent) CreateFromBufferWithOffset(Windows::Storage::Streams::IBuffer const& content, uint32_t offset, uint32_t count) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpBufferContentFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpBufferContentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpClient
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>) DeleteAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>) GetAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>) GetAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::HttpCompletionOption const& completionOption) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, Windows::Web::Http::HttpProgress>) GetBufferAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Http::HttpProgress>) GetInputStreamAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<hstring, Windows::Web::Http::HttpProgress>) GetStringAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>) PostAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::IHttpContent const& content) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>) PutAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::IHttpContent const& content) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>) SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>) SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request, Windows::Web::Http::HttpCompletionOption const& completionOption) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpRequestHeaderCollection) DefaultRequestHeaders() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpClient>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpClient<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpClient2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpRequestResult, Windows::Web::Http::HttpProgress>) TryDeleteAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpRequestResult, Windows::Web::Http::HttpProgress>) TryGetAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpRequestResult, Windows::Web::Http::HttpProgress>) TryGetAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::HttpCompletionOption const& completionOption) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpGetBufferResult, Windows::Web::Http::HttpProgress>) TryGetBufferAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpGetInputStreamResult, Windows::Web::Http::HttpProgress>) TryGetInputStreamAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpGetStringResult, Windows::Web::Http::HttpProgress>) TryGetStringAsync(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpRequestResult, Windows::Web::Http::HttpProgress>) TryPostAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::IHttpContent const& content) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpRequestResult, Windows::Web::Http::HttpProgress>) TryPutAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::IHttpContent const& content) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpRequestResult, Windows::Web::Http::HttpProgress>) TrySendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpRequestResult, Windows::Web::Http::HttpProgress>) TrySendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request, Windows::Web::Http::HttpCompletionOption const& completionOption) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpClient2>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpClient2<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpClientFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpClient) Create(Windows::Web::Http::Filters::IHttpFilter const& filter) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpClientFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpClientFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpContent
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpContentHeaderCollection) Headers() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>) BufferAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint64_t>) ReadAsBufferAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, uint64_t>) ReadAsInputStreamAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<hstring, uint64_t>) ReadAsStringAsync() const;
        WINRT_IMPL_AUTO(bool) TryComputeLength(uint64_t& length) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>) WriteToStreamAsync(Windows::Storage::Streams::IOutputStream const& outputStream) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpContent>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpContent<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpCookie
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Domain() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Path() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) Expires() const;
        WINRT_IMPL_AUTO(void) Expires(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HttpOnly() const;
        WINRT_IMPL_AUTO(void) HttpOnly(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Secure() const;
        WINRT_IMPL_AUTO(void) Secure(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
        WINRT_IMPL_AUTO(void) Value(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpCookie>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpCookie<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpCookieFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpCookie) Create(param::hstring const& name, param::hstring const& domain, param::hstring const& path) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpCookieFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpCookieFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpCookieManager
    {
        WINRT_IMPL_AUTO(bool) SetCookie(Windows::Web::Http::HttpCookie const& cookie) const;
        WINRT_IMPL_AUTO(bool) SetCookie(Windows::Web::Http::HttpCookie const& cookie, bool thirdParty) const;
        WINRT_IMPL_AUTO(void) DeleteCookie(Windows::Web::Http::HttpCookie const& cookie) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpCookieCollection) GetCookies(Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpCookieManager>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpCookieManager<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpFormUrlEncodedContent) Create(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& content) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpFormUrlEncodedContentFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpGetBufferResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpRequestMessage) RequestMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpResponseMessage) ResponseMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Succeeded() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) Value() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpGetBufferResult>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpGetBufferResult<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpGetInputStreamResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpRequestMessage) RequestMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpResponseMessage) ResponseMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Succeeded() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IInputStream) Value() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpGetInputStreamResult>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpGetInputStreamResult<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpGetStringResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpRequestMessage) RequestMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpResponseMessage) ResponseMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Succeeded() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpGetStringResult>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpGetStringResult<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpMethod
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Method() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpMethod>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpMethod<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpMethodFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpMethod) Create(param::hstring const& method) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpMethodFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpMethodFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpMethodStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpMethod) Delete() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpMethod) Get() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpMethod) Head() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpMethod) Options() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpMethod) Patch() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpMethod) Post() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpMethod) Put() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpMethodStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpMethodStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpMultipartContent
    {
        WINRT_IMPL_AUTO(void) Add(Windows::Web::Http::IHttpContent const& content) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpMultipartContent>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpMultipartContent<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpMultipartContentFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpMultipartContent) CreateWithSubtype(param::hstring const& subtype) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpMultipartContent) CreateWithSubtypeAndBoundary(param::hstring const& subtype, param::hstring const& boundary) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpMultipartContentFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpMultipartContentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpMultipartFormDataContent
    {
        WINRT_IMPL_AUTO(void) Add(Windows::Web::Http::IHttpContent const& content) const;
        WINRT_IMPL_AUTO(void) Add(Windows::Web::Http::IHttpContent const& content, param::hstring const& name) const;
        WINRT_IMPL_AUTO(void) Add(Windows::Web::Http::IHttpContent const& content, param::hstring const& name, param::hstring const& fileName) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpMultipartFormDataContent>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpMultipartFormDataContent<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpMultipartFormDataContentFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpMultipartFormDataContent) CreateWithBoundary(param::hstring const& boundary) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpMultipartFormDataContentFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpMultipartFormDataContentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpRequestMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::IHttpContent) Content() const;
        WINRT_IMPL_AUTO(void) Content(Windows::Web::Http::IHttpContent const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpRequestHeaderCollection) Headers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpMethod) Method() const;
        WINRT_IMPL_AUTO(void) Method(Windows::Web::Http::HttpMethod const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>) Properties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) RequestUri() const;
        WINRT_IMPL_AUTO(void) RequestUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpTransportInformation) TransportInformation() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpRequestMessage>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpRequestMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpRequestMessageFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpRequestMessage) Create(Windows::Web::Http::HttpMethod const& method, Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpRequestMessageFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpRequestMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpRequestResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpRequestMessage) RequestMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpResponseMessage) ResponseMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Succeeded() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpRequestResult>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpRequestResult<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpResponseMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::IHttpContent) Content() const;
        WINRT_IMPL_AUTO(void) Content(Windows::Web::Http::IHttpContent const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Headers::HttpResponseHeaderCollection) Headers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSuccessStatusCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ReasonPhrase() const;
        WINRT_IMPL_AUTO(void) ReasonPhrase(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpRequestMessage) RequestMessage() const;
        WINRT_IMPL_AUTO(void) RequestMessage(Windows::Web::Http::HttpRequestMessage const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpResponseMessageSource) Source() const;
        WINRT_IMPL_AUTO(void) Source(Windows::Web::Http::HttpResponseMessageSource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpStatusCode) StatusCode() const;
        WINRT_IMPL_AUTO(void) StatusCode(Windows::Web::Http::HttpStatusCode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpVersion) Version() const;
        WINRT_IMPL_AUTO(void) Version(Windows::Web::Http::HttpVersion const& value) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpResponseMessage) EnsureSuccessStatusCode() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpResponseMessage>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpResponseMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpResponseMessageFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpResponseMessage) Create(Windows::Web::Http::HttpStatusCode const& statusCode) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpResponseMessageFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpResponseMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpStreamContentFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpStreamContent) CreateFromInputStream(Windows::Storage::Streams::IInputStream const& content) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpStreamContentFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpStreamContentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpStringContentFactory
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpStringContent) CreateFromString(param::hstring const& content) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpStringContent) CreateFromStringWithEncoding(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
        WINRT_IMPL_AUTO(Windows::Web::Http::HttpStringContent) CreateFromStringWithEncodingAndMediaType(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding, param::hstring const& mediaType) const;
    };
    template <> struct consume<Windows::Web::Http::IHttpStringContentFactory>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpStringContentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_IHttpTransportInformation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) ServerCertificate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Sockets::SocketSslErrorSeverity) ServerCertificateErrorSeverity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult>) ServerCertificateErrors() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>) ServerIntermediateCertificates() const;
    };
    template <> struct consume<Windows::Web::Http::IHttpTransportInformation>
    {
        template <typename D> using type = consume_Windows_Web_Http_IHttpTransportInformation<D>;
    };
    struct struct_Windows_Web_Http_HttpProgress
    {
        int32_t Stage;
        uint64_t BytesSent;
        void* TotalBytesToSend;
        uint64_t BytesReceived;
        void* TotalBytesToReceive;
        uint32_t Retries;
    };
    template <> struct abi<Windows::Web::Http::HttpProgress>
    {
        using type = struct_Windows_Web_Http_HttpProgress;
    };
}
#endif
