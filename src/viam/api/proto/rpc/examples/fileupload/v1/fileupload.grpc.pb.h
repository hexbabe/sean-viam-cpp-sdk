// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/rpc/examples/fileupload/v1/fileupload.proto
#ifndef GRPC_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto__INCLUDED
#define GRPC_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto__INCLUDED

#include "proto/rpc/examples/fileupload/v1/fileupload.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace proto {
namespace rpc {
namespace examples {
namespace fileupload {
namespace v1 {

class FileUploadService final {
 public:
  static constexpr char const* service_full_name() {
    return "proto.rpc.examples.fileupload.v1.FileUploadService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Due to an issue described by https://github.com/improbable-eng/ts-protoc-gen/pull/264
    // we use a streaming response but only expect one response.
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>> UploadFile(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>>(UploadFileRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>> AsyncUploadFile(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>>(AsyncUploadFileRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>> PrepareAsyncUploadFile(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>>(PrepareAsyncUploadFileRaw(context, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Due to an issue described by https://github.com/improbable-eng/ts-protoc-gen/pull/264
      // we use a streaming response but only expect one response.
      virtual void UploadFile(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::proto::rpc::examples::fileupload::v1::UploadFileRequest,::proto::rpc::examples::fileupload::v1::UploadFileResponse>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderWriterInterface< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>* UploadFileRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>* AsyncUploadFileRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>* PrepareAsyncUploadFileRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>> UploadFile(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>>(UploadFileRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>> AsyncUploadFile(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>>(AsyncUploadFileRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>> PrepareAsyncUploadFile(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>>(PrepareAsyncUploadFileRaw(context, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void UploadFile(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::proto::rpc::examples::fileupload::v1::UploadFileRequest,::proto::rpc::examples::fileupload::v1::UploadFileResponse>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>* UploadFileRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>* AsyncUploadFileRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>* PrepareAsyncUploadFileRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_UploadFile_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Due to an issue described by https://github.com/improbable-eng/ts-protoc-gen/pull/264
    // we use a streaming response but only expect one response.
    virtual ::grpc::Status UploadFile(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileResponse, ::proto::rpc::examples::fileupload::v1::UploadFileRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_UploadFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_UploadFile() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_UploadFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UploadFile(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileResponse, ::proto::rpc::examples::fileupload::v1::UploadFileRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUploadFile(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileResponse, ::proto::rpc::examples::fileupload::v1::UploadFileRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_UploadFile<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_UploadFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_UploadFile() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->UploadFile(context); }));
    }
    ~WithCallbackMethod_UploadFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UploadFile(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileResponse, ::proto::rpc::examples::fileupload::v1::UploadFileRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::proto::rpc::examples::fileupload::v1::UploadFileRequest, ::proto::rpc::examples::fileupload::v1::UploadFileResponse>* UploadFile(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef WithCallbackMethod_UploadFile<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_UploadFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_UploadFile() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_UploadFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UploadFile(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileResponse, ::proto::rpc::examples::fileupload::v1::UploadFileRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_UploadFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_UploadFile() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_UploadFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UploadFile(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileResponse, ::proto::rpc::examples::fileupload::v1::UploadFileRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUploadFile(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_UploadFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_UploadFile() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->UploadFile(context); }));
    }
    ~WithRawCallbackMethod_UploadFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UploadFile(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::proto::rpc::examples::fileupload::v1::UploadFileResponse, ::proto::rpc::examples::fileupload::v1::UploadFileRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* UploadFile(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace v1
}  // namespace fileupload
}  // namespace examples
}  // namespace rpc
}  // namespace proto


#endif  // GRPC_proto_2frpc_2fexamples_2ffileupload_2fv1_2ffileupload_2eproto__INCLUDED
