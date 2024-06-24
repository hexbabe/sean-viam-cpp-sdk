// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: app/v1/billing.proto

#include "app/v1/billing.pb.h"
#include "app/v1/billing.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace viam {
namespace app {
namespace v1 {

static const char* BillingService_method_names[] = {
  "/viam.app.v1.BillingService/GetCurrentMonthUsage",
  "/viam.app.v1.BillingService/GetOrgBillingInformation",
  "/viam.app.v1.BillingService/GetInvoicesSummary",
  "/viam.app.v1.BillingService/GetInvoicePdf",
};

std::unique_ptr< BillingService::Stub> BillingService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< BillingService::Stub> stub(new BillingService::Stub(channel, options));
  return stub;
}

BillingService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetCurrentMonthUsage_(BillingService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetOrgBillingInformation_(BillingService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetInvoicesSummary_(BillingService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetInvoicePdf_(BillingService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status BillingService::Stub::GetCurrentMonthUsage(::grpc::ClientContext* context, const ::viam::app::v1::GetCurrentMonthUsageRequest& request, ::viam::app::v1::GetCurrentMonthUsageResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::app::v1::GetCurrentMonthUsageRequest, ::viam::app::v1::GetCurrentMonthUsageResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetCurrentMonthUsage_, context, request, response);
}

void BillingService::Stub::async::GetCurrentMonthUsage(::grpc::ClientContext* context, const ::viam::app::v1::GetCurrentMonthUsageRequest* request, ::viam::app::v1::GetCurrentMonthUsageResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::app::v1::GetCurrentMonthUsageRequest, ::viam::app::v1::GetCurrentMonthUsageResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetCurrentMonthUsage_, context, request, response, std::move(f));
}

void BillingService::Stub::async::GetCurrentMonthUsage(::grpc::ClientContext* context, const ::viam::app::v1::GetCurrentMonthUsageRequest* request, ::viam::app::v1::GetCurrentMonthUsageResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetCurrentMonthUsage_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::app::v1::GetCurrentMonthUsageResponse>* BillingService::Stub::PrepareAsyncGetCurrentMonthUsageRaw(::grpc::ClientContext* context, const ::viam::app::v1::GetCurrentMonthUsageRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::app::v1::GetCurrentMonthUsageResponse, ::viam::app::v1::GetCurrentMonthUsageRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetCurrentMonthUsage_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::app::v1::GetCurrentMonthUsageResponse>* BillingService::Stub::AsyncGetCurrentMonthUsageRaw(::grpc::ClientContext* context, const ::viam::app::v1::GetCurrentMonthUsageRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetCurrentMonthUsageRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status BillingService::Stub::GetOrgBillingInformation(::grpc::ClientContext* context, const ::viam::app::v1::GetOrgBillingInformationRequest& request, ::viam::app::v1::GetOrgBillingInformationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::app::v1::GetOrgBillingInformationRequest, ::viam::app::v1::GetOrgBillingInformationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetOrgBillingInformation_, context, request, response);
}

void BillingService::Stub::async::GetOrgBillingInformation(::grpc::ClientContext* context, const ::viam::app::v1::GetOrgBillingInformationRequest* request, ::viam::app::v1::GetOrgBillingInformationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::app::v1::GetOrgBillingInformationRequest, ::viam::app::v1::GetOrgBillingInformationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetOrgBillingInformation_, context, request, response, std::move(f));
}

void BillingService::Stub::async::GetOrgBillingInformation(::grpc::ClientContext* context, const ::viam::app::v1::GetOrgBillingInformationRequest* request, ::viam::app::v1::GetOrgBillingInformationResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetOrgBillingInformation_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::app::v1::GetOrgBillingInformationResponse>* BillingService::Stub::PrepareAsyncGetOrgBillingInformationRaw(::grpc::ClientContext* context, const ::viam::app::v1::GetOrgBillingInformationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::app::v1::GetOrgBillingInformationResponse, ::viam::app::v1::GetOrgBillingInformationRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetOrgBillingInformation_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::app::v1::GetOrgBillingInformationResponse>* BillingService::Stub::AsyncGetOrgBillingInformationRaw(::grpc::ClientContext* context, const ::viam::app::v1::GetOrgBillingInformationRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetOrgBillingInformationRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status BillingService::Stub::GetInvoicesSummary(::grpc::ClientContext* context, const ::viam::app::v1::GetInvoicesSummaryRequest& request, ::viam::app::v1::GetInvoicesSummaryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::app::v1::GetInvoicesSummaryRequest, ::viam::app::v1::GetInvoicesSummaryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetInvoicesSummary_, context, request, response);
}

void BillingService::Stub::async::GetInvoicesSummary(::grpc::ClientContext* context, const ::viam::app::v1::GetInvoicesSummaryRequest* request, ::viam::app::v1::GetInvoicesSummaryResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::app::v1::GetInvoicesSummaryRequest, ::viam::app::v1::GetInvoicesSummaryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetInvoicesSummary_, context, request, response, std::move(f));
}

void BillingService::Stub::async::GetInvoicesSummary(::grpc::ClientContext* context, const ::viam::app::v1::GetInvoicesSummaryRequest* request, ::viam::app::v1::GetInvoicesSummaryResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetInvoicesSummary_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::app::v1::GetInvoicesSummaryResponse>* BillingService::Stub::PrepareAsyncGetInvoicesSummaryRaw(::grpc::ClientContext* context, const ::viam::app::v1::GetInvoicesSummaryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::app::v1::GetInvoicesSummaryResponse, ::viam::app::v1::GetInvoicesSummaryRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetInvoicesSummary_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::app::v1::GetInvoicesSummaryResponse>* BillingService::Stub::AsyncGetInvoicesSummaryRaw(::grpc::ClientContext* context, const ::viam::app::v1::GetInvoicesSummaryRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetInvoicesSummaryRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::viam::app::v1::GetInvoicePdfResponse>* BillingService::Stub::GetInvoicePdfRaw(::grpc::ClientContext* context, const ::viam::app::v1::GetInvoicePdfRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::viam::app::v1::GetInvoicePdfResponse>::Create(channel_.get(), rpcmethod_GetInvoicePdf_, context, request);
}

void BillingService::Stub::async::GetInvoicePdf(::grpc::ClientContext* context, const ::viam::app::v1::GetInvoicePdfRequest* request, ::grpc::ClientReadReactor< ::viam::app::v1::GetInvoicePdfResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::viam::app::v1::GetInvoicePdfResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_GetInvoicePdf_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::viam::app::v1::GetInvoicePdfResponse>* BillingService::Stub::AsyncGetInvoicePdfRaw(::grpc::ClientContext* context, const ::viam::app::v1::GetInvoicePdfRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::viam::app::v1::GetInvoicePdfResponse>::Create(channel_.get(), cq, rpcmethod_GetInvoicePdf_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::viam::app::v1::GetInvoicePdfResponse>* BillingService::Stub::PrepareAsyncGetInvoicePdfRaw(::grpc::ClientContext* context, const ::viam::app::v1::GetInvoicePdfRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::viam::app::v1::GetInvoicePdfResponse>::Create(channel_.get(), cq, rpcmethod_GetInvoicePdf_, context, request, false, nullptr);
}

BillingService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BillingService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BillingService::Service, ::viam::app::v1::GetCurrentMonthUsageRequest, ::viam::app::v1::GetCurrentMonthUsageResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BillingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::app::v1::GetCurrentMonthUsageRequest* req,
             ::viam::app::v1::GetCurrentMonthUsageResponse* resp) {
               return service->GetCurrentMonthUsage(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BillingService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BillingService::Service, ::viam::app::v1::GetOrgBillingInformationRequest, ::viam::app::v1::GetOrgBillingInformationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BillingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::app::v1::GetOrgBillingInformationRequest* req,
             ::viam::app::v1::GetOrgBillingInformationResponse* resp) {
               return service->GetOrgBillingInformation(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BillingService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BillingService::Service, ::viam::app::v1::GetInvoicesSummaryRequest, ::viam::app::v1::GetInvoicesSummaryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BillingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::app::v1::GetInvoicesSummaryRequest* req,
             ::viam::app::v1::GetInvoicesSummaryResponse* resp) {
               return service->GetInvoicesSummary(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BillingService_method_names[3],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< BillingService::Service, ::viam::app::v1::GetInvoicePdfRequest, ::viam::app::v1::GetInvoicePdfResponse>(
          [](BillingService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::app::v1::GetInvoicePdfRequest* req,
             ::grpc::ServerWriter<::viam::app::v1::GetInvoicePdfResponse>* writer) {
               return service->GetInvoicePdf(ctx, req, writer);
             }, this)));
}

BillingService::Service::~Service() {
}

::grpc::Status BillingService::Service::GetCurrentMonthUsage(::grpc::ServerContext* context, const ::viam::app::v1::GetCurrentMonthUsageRequest* request, ::viam::app::v1::GetCurrentMonthUsageResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BillingService::Service::GetOrgBillingInformation(::grpc::ServerContext* context, const ::viam::app::v1::GetOrgBillingInformationRequest* request, ::viam::app::v1::GetOrgBillingInformationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BillingService::Service::GetInvoicesSummary(::grpc::ServerContext* context, const ::viam::app::v1::GetInvoicesSummaryRequest* request, ::viam::app::v1::GetInvoicesSummaryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BillingService::Service::GetInvoicePdf(::grpc::ServerContext* context, const ::viam::app::v1::GetInvoicePdfRequest* request, ::grpc::ServerWriter< ::viam::app::v1::GetInvoicePdfResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace viam
}  // namespace app
}  // namespace v1

