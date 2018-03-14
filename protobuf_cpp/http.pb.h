// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: http.proto

#ifndef PROTOBUF_http_2eproto__INCLUDED
#define PROTOBUF_http_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace KismetHttp {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_http_2eproto();
void protobuf_AssignDesc_http_2eproto();
void protobuf_ShutdownFile_http_2eproto();

class HttpRegisterUri;
class HttpRequest;
class HttpResponse;

// ===================================================================

class HttpRegisterUri : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:KismetHttp.HttpRegisterUri) */ {
 public:
  HttpRegisterUri();
  virtual ~HttpRegisterUri();

  HttpRegisterUri(const HttpRegisterUri& from);

  inline HttpRegisterUri& operator=(const HttpRegisterUri& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HttpRegisterUri& default_instance();

  void Swap(HttpRegisterUri* other);

  // implements Message ----------------------------------------------

  inline HttpRegisterUri* New() const { return New(NULL); }

  HttpRegisterUri* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HttpRegisterUri& from);
  void MergeFrom(const HttpRegisterUri& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HttpRegisterUri* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string uri = 1;
  bool has_uri() const;
  void clear_uri();
  static const int kUriFieldNumber = 1;
  const ::std::string& uri() const;
  void set_uri(const ::std::string& value);
  void set_uri(const char* value);
  void set_uri(const char* value, size_t size);
  ::std::string* mutable_uri();
  ::std::string* release_uri();
  void set_allocated_uri(::std::string* uri);

  // required string method = 2;
  bool has_method() const;
  void clear_method();
  static const int kMethodFieldNumber = 2;
  const ::std::string& method() const;
  void set_method(const ::std::string& value);
  void set_method(const char* value);
  void set_method(const char* value, size_t size);
  ::std::string* mutable_method();
  ::std::string* release_method();
  void set_allocated_method(::std::string* method);

  // @@protoc_insertion_point(class_scope:KismetHttp.HttpRegisterUri)
 private:
  inline void set_has_uri();
  inline void clear_has_uri();
  inline void set_has_method();
  inline void clear_has_method();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr uri_;
  ::google::protobuf::internal::ArenaStringPtr method_;
  friend void  protobuf_AddDesc_http_2eproto();
  friend void protobuf_AssignDesc_http_2eproto();
  friend void protobuf_ShutdownFile_http_2eproto();

  void InitAsDefaultInstance();
  static HttpRegisterUri* default_instance_;
};
// -------------------------------------------------------------------

class HttpRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:KismetHttp.HttpRequest) */ {
 public:
  HttpRequest();
  virtual ~HttpRequest();

  HttpRequest(const HttpRequest& from);

  inline HttpRequest& operator=(const HttpRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HttpRequest& default_instance();

  void Swap(HttpRequest* other);

  // implements Message ----------------------------------------------

  inline HttpRequest* New() const { return New(NULL); }

  HttpRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HttpRequest& from);
  void MergeFrom(const HttpRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HttpRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // required uint32 req_id = 1;
  bool has_req_id() const;
  void clear_req_id();
  static const int kReqIdFieldNumber = 1;
  ::google::protobuf::uint32 req_id() const;
  void set_req_id(::google::protobuf::uint32 value);

  // required string uri = 2;
  bool has_uri() const;
  void clear_uri();
  static const int kUriFieldNumber = 2;
  const ::std::string& uri() const;
  void set_uri(const ::std::string& value);
  void set_uri(const char* value);
  void set_uri(const char* value, size_t size);
  ::std::string* mutable_uri();
  ::std::string* release_uri();
  void set_allocated_uri(::std::string* uri);

  // required string method = 3;
  bool has_method() const;
  void clear_method();
  static const int kMethodFieldNumber = 3;
  const ::std::string& method() const;
  void set_method(const ::std::string& value);
  void set_method(const char* value);
  void set_method(const char* value, size_t size);
  ::std::string* mutable_method();
  ::std::string* release_method();
  void set_allocated_method(::std::string* method);

  // map<string, string> post_data = 4;
  int post_data_size() const;
  void clear_post_data();
  static const int kPostDataFieldNumber = 4;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      post_data() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_post_data();

  // @@protoc_insertion_point(class_scope:KismetHttp.HttpRequest)
 private:
  inline void set_has_req_id();
  inline void clear_has_req_id();
  inline void set_has_uri();
  inline void clear_has_uri();
  inline void set_has_method();
  inline void clear_has_method();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr uri_;
  ::google::protobuf::internal::ArenaStringPtr method_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 >
      HttpRequest_PostDataEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > post_data_;
  ::google::protobuf::uint32 req_id_;
  friend void  protobuf_AddDesc_http_2eproto();
  friend void protobuf_AssignDesc_http_2eproto();
  friend void protobuf_ShutdownFile_http_2eproto();

  void InitAsDefaultInstance();
  static HttpRequest* default_instance_;
};
// -------------------------------------------------------------------

class HttpResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:KismetHttp.HttpResponse) */ {
 public:
  HttpResponse();
  virtual ~HttpResponse();

  HttpResponse(const HttpResponse& from);

  inline HttpResponse& operator=(const HttpResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HttpResponse& default_instance();

  void Swap(HttpResponse* other);

  // implements Message ----------------------------------------------

  inline HttpResponse* New() const { return New(NULL); }

  HttpResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HttpResponse& from);
  void MergeFrom(const HttpResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HttpResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 req_id = 1;
  bool has_req_id() const;
  void clear_req_id();
  static const int kReqIdFieldNumber = 1;
  ::google::protobuf::uint32 req_id() const;
  void set_req_id(::google::protobuf::uint32 value);

  // optional bytes content = 2;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 2;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  void set_content(const char* value);
  void set_content(const void* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // optional uint32 resultcode = 3;
  bool has_resultcode() const;
  void clear_resultcode();
  static const int kResultcodeFieldNumber = 3;
  ::google::protobuf::uint32 resultcode() const;
  void set_resultcode(::google::protobuf::uint32 value);

  // optional bool close_response = 4;
  bool has_close_response() const;
  void clear_close_response();
  static const int kCloseResponseFieldNumber = 4;
  bool close_response() const;
  void set_close_response(bool value);

  // @@protoc_insertion_point(class_scope:KismetHttp.HttpResponse)
 private:
  inline void set_has_req_id();
  inline void clear_has_req_id();
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_resultcode();
  inline void clear_has_resultcode();
  inline void set_has_close_response();
  inline void clear_has_close_response();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::uint32 req_id_;
  ::google::protobuf::uint32 resultcode_;
  bool close_response_;
  friend void  protobuf_AddDesc_http_2eproto();
  friend void protobuf_AssignDesc_http_2eproto();
  friend void protobuf_ShutdownFile_http_2eproto();

  void InitAsDefaultInstance();
  static HttpResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HttpRegisterUri

// required string uri = 1;
inline bool HttpRegisterUri::has_uri() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HttpRegisterUri::set_has_uri() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HttpRegisterUri::clear_has_uri() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HttpRegisterUri::clear_uri() {
  uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_uri();
}
inline const ::std::string& HttpRegisterUri::uri() const {
  // @@protoc_insertion_point(field_get:KismetHttp.HttpRegisterUri.uri)
  return uri_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRegisterUri::set_uri(const ::std::string& value) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:KismetHttp.HttpRegisterUri.uri)
}
inline void HttpRegisterUri::set_uri(const char* value) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:KismetHttp.HttpRegisterUri.uri)
}
inline void HttpRegisterUri::set_uri(const char* value, size_t size) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:KismetHttp.HttpRegisterUri.uri)
}
inline ::std::string* HttpRegisterUri::mutable_uri() {
  set_has_uri();
  // @@protoc_insertion_point(field_mutable:KismetHttp.HttpRegisterUri.uri)
  return uri_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRegisterUri::release_uri() {
  // @@protoc_insertion_point(field_release:KismetHttp.HttpRegisterUri.uri)
  clear_has_uri();
  return uri_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRegisterUri::set_allocated_uri(::std::string* uri) {
  if (uri != NULL) {
    set_has_uri();
  } else {
    clear_has_uri();
  }
  uri_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uri);
  // @@protoc_insertion_point(field_set_allocated:KismetHttp.HttpRegisterUri.uri)
}

// required string method = 2;
inline bool HttpRegisterUri::has_method() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HttpRegisterUri::set_has_method() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HttpRegisterUri::clear_has_method() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HttpRegisterUri::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_method();
}
inline const ::std::string& HttpRegisterUri::method() const {
  // @@protoc_insertion_point(field_get:KismetHttp.HttpRegisterUri.method)
  return method_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRegisterUri::set_method(const ::std::string& value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:KismetHttp.HttpRegisterUri.method)
}
inline void HttpRegisterUri::set_method(const char* value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:KismetHttp.HttpRegisterUri.method)
}
inline void HttpRegisterUri::set_method(const char* value, size_t size) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:KismetHttp.HttpRegisterUri.method)
}
inline ::std::string* HttpRegisterUri::mutable_method() {
  set_has_method();
  // @@protoc_insertion_point(field_mutable:KismetHttp.HttpRegisterUri.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRegisterUri::release_method() {
  // @@protoc_insertion_point(field_release:KismetHttp.HttpRegisterUri.method)
  clear_has_method();
  return method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRegisterUri::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    set_has_method();
  } else {
    clear_has_method();
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:KismetHttp.HttpRegisterUri.method)
}

// -------------------------------------------------------------------

// HttpRequest

// required uint32 req_id = 1;
inline bool HttpRequest::has_req_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HttpRequest::set_has_req_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HttpRequest::clear_has_req_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HttpRequest::clear_req_id() {
  req_id_ = 0u;
  clear_has_req_id();
}
inline ::google::protobuf::uint32 HttpRequest::req_id() const {
  // @@protoc_insertion_point(field_get:KismetHttp.HttpRequest.req_id)
  return req_id_;
}
inline void HttpRequest::set_req_id(::google::protobuf::uint32 value) {
  set_has_req_id();
  req_id_ = value;
  // @@protoc_insertion_point(field_set:KismetHttp.HttpRequest.req_id)
}

// required string uri = 2;
inline bool HttpRequest::has_uri() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HttpRequest::set_has_uri() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HttpRequest::clear_has_uri() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HttpRequest::clear_uri() {
  uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_uri();
}
inline const ::std::string& HttpRequest::uri() const {
  // @@protoc_insertion_point(field_get:KismetHttp.HttpRequest.uri)
  return uri_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_uri(const ::std::string& value) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:KismetHttp.HttpRequest.uri)
}
inline void HttpRequest::set_uri(const char* value) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:KismetHttp.HttpRequest.uri)
}
inline void HttpRequest::set_uri(const char* value, size_t size) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:KismetHttp.HttpRequest.uri)
}
inline ::std::string* HttpRequest::mutable_uri() {
  set_has_uri();
  // @@protoc_insertion_point(field_mutable:KismetHttp.HttpRequest.uri)
  return uri_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRequest::release_uri() {
  // @@protoc_insertion_point(field_release:KismetHttp.HttpRequest.uri)
  clear_has_uri();
  return uri_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_allocated_uri(::std::string* uri) {
  if (uri != NULL) {
    set_has_uri();
  } else {
    clear_has_uri();
  }
  uri_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uri);
  // @@protoc_insertion_point(field_set_allocated:KismetHttp.HttpRequest.uri)
}

// required string method = 3;
inline bool HttpRequest::has_method() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HttpRequest::set_has_method() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HttpRequest::clear_has_method() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HttpRequest::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_method();
}
inline const ::std::string& HttpRequest::method() const {
  // @@protoc_insertion_point(field_get:KismetHttp.HttpRequest.method)
  return method_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_method(const ::std::string& value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:KismetHttp.HttpRequest.method)
}
inline void HttpRequest::set_method(const char* value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:KismetHttp.HttpRequest.method)
}
inline void HttpRequest::set_method(const char* value, size_t size) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:KismetHttp.HttpRequest.method)
}
inline ::std::string* HttpRequest::mutable_method() {
  set_has_method();
  // @@protoc_insertion_point(field_mutable:KismetHttp.HttpRequest.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpRequest::release_method() {
  // @@protoc_insertion_point(field_release:KismetHttp.HttpRequest.method)
  clear_has_method();
  return method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpRequest::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    set_has_method();
  } else {
    clear_has_method();
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:KismetHttp.HttpRequest.method)
}

// map<string, string> post_data = 4;
inline int HttpRequest::post_data_size() const {
  return post_data_.size();
}
inline void HttpRequest::clear_post_data() {
  post_data_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
HttpRequest::post_data() const {
  // @@protoc_insertion_point(field_map:KismetHttp.HttpRequest.post_data)
  return post_data_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
HttpRequest::mutable_post_data() {
  // @@protoc_insertion_point(field_mutable_map:KismetHttp.HttpRequest.post_data)
  return post_data_.MutableMap();
}

// -------------------------------------------------------------------

// HttpResponse

// required uint32 req_id = 1;
inline bool HttpResponse::has_req_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HttpResponse::set_has_req_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HttpResponse::clear_has_req_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HttpResponse::clear_req_id() {
  req_id_ = 0u;
  clear_has_req_id();
}
inline ::google::protobuf::uint32 HttpResponse::req_id() const {
  // @@protoc_insertion_point(field_get:KismetHttp.HttpResponse.req_id)
  return req_id_;
}
inline void HttpResponse::set_req_id(::google::protobuf::uint32 value) {
  set_has_req_id();
  req_id_ = value;
  // @@protoc_insertion_point(field_set:KismetHttp.HttpResponse.req_id)
}

// optional bytes content = 2;
inline bool HttpResponse::has_content() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HttpResponse::set_has_content() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HttpResponse::clear_has_content() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HttpResponse::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& HttpResponse::content() const {
  // @@protoc_insertion_point(field_get:KismetHttp.HttpResponse.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpResponse::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:KismetHttp.HttpResponse.content)
}
inline void HttpResponse::set_content(const char* value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:KismetHttp.HttpResponse.content)
}
inline void HttpResponse::set_content(const void* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:KismetHttp.HttpResponse.content)
}
inline ::std::string* HttpResponse::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:KismetHttp.HttpResponse.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpResponse::release_content() {
  // @@protoc_insertion_point(field_release:KismetHttp.HttpResponse.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpResponse::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:KismetHttp.HttpResponse.content)
}

// optional uint32 resultcode = 3;
inline bool HttpResponse::has_resultcode() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HttpResponse::set_has_resultcode() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HttpResponse::clear_has_resultcode() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HttpResponse::clear_resultcode() {
  resultcode_ = 0u;
  clear_has_resultcode();
}
inline ::google::protobuf::uint32 HttpResponse::resultcode() const {
  // @@protoc_insertion_point(field_get:KismetHttp.HttpResponse.resultcode)
  return resultcode_;
}
inline void HttpResponse::set_resultcode(::google::protobuf::uint32 value) {
  set_has_resultcode();
  resultcode_ = value;
  // @@protoc_insertion_point(field_set:KismetHttp.HttpResponse.resultcode)
}

// optional bool close_response = 4;
inline bool HttpResponse::has_close_response() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void HttpResponse::set_has_close_response() {
  _has_bits_[0] |= 0x00000008u;
}
inline void HttpResponse::clear_has_close_response() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void HttpResponse::clear_close_response() {
  close_response_ = false;
  clear_has_close_response();
}
inline bool HttpResponse::close_response() const {
  // @@protoc_insertion_point(field_get:KismetHttp.HttpResponse.close_response)
  return close_response_;
}
inline void HttpResponse::set_close_response(bool value) {
  set_has_close_response();
  close_response_ = value;
  // @@protoc_insertion_point(field_set:KismetHttp.HttpResponse.close_response)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace KismetHttp

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_http_2eproto__INCLUDED
