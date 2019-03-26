
#include "routines.h"

void dsyrk(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int n = info[2]->Uint32Value();
	const int k = info[3]->Uint32Value();
	const double alpha = info[4]->NumberValue();
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int lda = info[6]->Uint32Value();
	const double beta = info[7]->NumberValue();
	double *c = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	const int ldc = info[9]->Uint32Value();
	cblas_dsyrk(CLBlastLayoutRowMajor, uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

void ssyrk(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int n = info[2]->Uint32Value();
	const int k = info[3]->Uint32Value();
	const float alpha = info[4]->NumberValue();
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int lda = info[6]->Uint32Value();
	const float beta = info[7]->NumberValue();
	float *c = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	const int ldc = info[9]->Uint32Value();
	cblas_ssyrk(CLBlastLayoutRowMajor, uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

void zsyrk(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int n = info[2]->Uint32Value();
	const int k = info[3]->Uint32Value();
	const double *alpha = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int lda = info[6]->Uint32Value();
	const double *beta = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	double *c = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	const int ldc = info[9]->Uint32Value();
	cblas_zsyrk(CLBlastLayoutRowMajor, uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}

void csyrk(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[0]->Uint32Value());
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[1]->Uint32Value());
	const int n = info[2]->Uint32Value();
	const int k = info[3]->Uint32Value();
	const float *alpha = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int lda = info[6]->Uint32Value();
	const float *beta = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	float *c = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	const int ldc = info[9]->Uint32Value();
	cblas_csyrk(CLBlastLayoutRowMajor, uplo, trans, n, k, alpha, a, lda, beta, c, ldc);
}
