
#include "routines.h"

void dsyr2k(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int n = info[2]->Uint32Value();
	const int k = info[3]->Uint32Value();
	const double alpha = info[4]->NumberValue();
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int lda = info[6]->Uint32Value();
	const double *b = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	const int ldb = info[8]->Uint32Value();
	const double beta = info[9]->NumberValue();
	double *c = reinterpret_cast<double*>(info[10].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	const int ldc = info[11]->Uint32Value();
	cblas_dsyr2k(CLBlastLayoutRowMajor, uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

void ssyr2k(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int n = info[2]->Uint32Value();
	const int k = info[3]->Uint32Value();
	const float alpha = info[4]->NumberValue();
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int lda = info[6]->Uint32Value();
	const float *b = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	const int ldb = info[8]->Uint32Value();
	const float beta = info[9]->NumberValue();
	float *c = reinterpret_cast<float*>(info[10].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	const int ldc = info[11]->Uint32Value();
	cblas_ssyr2k(CLBlastLayoutRowMajor, uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

void zsyr2k(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int n = info[2]->Uint32Value();
	const int k = info[3]->Uint32Value();
	const double *alpha = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int lda = info[6]->Uint32Value();
	const double *b = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	const int ldb = info[8]->Uint32Value();
	const double *beta = reinterpret_cast<double*>(info[9].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *c = reinterpret_cast<double*>(info[10].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	const int ldc = info[11]->Uint32Value();
	cblas_zsyr2k(CLBlastLayoutRowMajor, uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}

void csyr2k(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int n = info[2]->Uint32Value();
	const int k = info[3]->Uint32Value();
	const float *alpha = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int lda = info[6]->Uint32Value();
	const float *b = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	const int ldb = info[8]->Uint32Value();
	const float *beta = reinterpret_cast<float*>(info[9].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	float *c = reinterpret_cast<float*>(info[10].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	const int ldc = info[11]->Uint32Value();
	cblas_csyr2k(CLBlastLayoutRowMajor, uplo, trans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}
