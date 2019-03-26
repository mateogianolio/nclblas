
#include "routines.h"

void dgemm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTranspose transa = static_cast<CLBlastTranspose>(info[0]->Uint32Value());
	const CLBlastTranspose transb = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int m = info[2]->Uint32Value();
	const int n = info[3]->Uint32Value();
	const int k = info[4]->Uint32Value();
	const double alpha = info[5]->NumberValue();
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	const int lda = info[7]->Uint32Value();
	const double *b = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	const int ldb = info[9]->Uint32Value();
	const double beta = info[10]->NumberValue();
	double *c = reinterpret_cast<double*>(info[11].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	const int ldc = info[12]->Uint32Value();
	cblas_dgemm(CLBlastLayoutRowMajor, transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

void sgemm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTranspose transa = static_cast<CLBlastTranspose>(info[0]->Uint32Value());
	const CLBlastTranspose transb = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int m = info[2]->Uint32Value();
	const int n = info[3]->Uint32Value();
	const int k = info[4]->Uint32Value();
	const float alpha = info[5]->NumberValue();
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	const int lda = info[7]->Uint32Value();
	const float *b = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	const int ldb = info[9]->Uint32Value();
	const float beta = info[10]->NumberValue();
	float *c = reinterpret_cast<float*>(info[11].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	const int ldc = info[12]->Uint32Value();
	cblas_sgemm(CLBlastLayoutRowMajor, transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

void zgemm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTranspose transa = static_cast<CLBlastTranspose>(info[0]->Uint32Value());
	const CLBlastTranspose transb = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int m = info[2]->Uint32Value();
	const int n = info[3]->Uint32Value();
	const int k = info[4]->Uint32Value();
	const double *alpha = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	const int lda = info[7]->Uint32Value();
	const double *b = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	const int ldb = info[9]->Uint32Value();
	const double *beta = reinterpret_cast<double*>(info[10].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *c = reinterpret_cast<double*>(info[11].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	const int ldc = info[12]->Uint32Value();
	cblas_zgemm(CLBlastLayoutRowMajor, transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

void cgemm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTranspose transa = static_cast<CLBlastTranspose>(info[0]->Uint32Value());
	const CLBlastTranspose transb = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int m = info[2]->Uint32Value();
	const int n = info[3]->Uint32Value();
	const int k = info[4]->Uint32Value();
	const float *alpha = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	const int lda = info[7]->Uint32Value();
	const float *b = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	const int ldb = info[9]->Uint32Value();
	const float *beta = reinterpret_cast<float*>(info[10].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	float *c = reinterpret_cast<float*>(info[11].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	const int ldc = info[12]->Uint32Value();
	cblas_cgemm(CLBlastLayoutRowMajor, transa, transb, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}
