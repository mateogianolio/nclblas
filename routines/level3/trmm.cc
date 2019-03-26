
#include "routines.h"

void dtrmm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastSide side = static_cast<CLBlastSide>(info[0]->Uint32Value());
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[1]->Uint32Value());
	const CLBlastTranspose transa = static_cast<CLBlastTranspose>(info[2]->Uint32Value());
	const CLBlastDiagonal diag = static_cast<CLBlastDiagonal>(info[3]->Uint32Value());
	const int m = info[4]->Uint32Value();
	const int n = info[5]->Uint32Value();
	const double alpha = info[6]->NumberValue();
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	const int lda = info[8]->Uint32Value();
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[9].As<v8::Float64Array>()));
	const int ldb = info[10]->Uint32Value();
	cblas_dtrmm(CLBlastLayoutRowMajor, side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

void strmm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastSide side = static_cast<CLBlastSide>(info[0]->Uint32Value());
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[1]->Uint32Value());
	const CLBlastTranspose transa = static_cast<CLBlastTranspose>(info[2]->Uint32Value());
	const CLBlastDiagonal diag = static_cast<CLBlastDiagonal>(info[3]->Uint32Value());
	const int m = info[4]->Uint32Value();
	const int n = info[5]->Uint32Value();
	const float alpha = info[6]->NumberValue();
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	const int lda = info[8]->Uint32Value();
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[9].As<v8::Float32Array>()));
	const int ldb = info[10]->Uint32Value();
	cblas_strmm(CLBlastLayoutRowMajor, side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

void ztrmm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastSide side = static_cast<CLBlastSide>(info[0]->Uint32Value());
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[1]->Uint32Value());
	const CLBlastTranspose transa = static_cast<CLBlastTranspose>(info[2]->Uint32Value());
	const CLBlastDiagonal diag = static_cast<CLBlastDiagonal>(info[3]->Uint32Value());
	const int m = info[4]->Uint32Value();
	const int n = info[5]->Uint32Value();
	const double *alpha = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	const int lda = info[8]->Uint32Value();
	double *b = reinterpret_cast<double*>(GET_CONTENTS(info[9].As<v8::Float64Array>()));
	const int ldb = info[10]->Uint32Value();
	cblas_ztrmm(CLBlastLayoutRowMajor, side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}

void ctrmm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastSide side = static_cast<CLBlastSide>(info[0]->Uint32Value());
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[1]->Uint32Value());
	const CLBlastTranspose transa = static_cast<CLBlastTranspose>(info[2]->Uint32Value());
	const CLBlastDiagonal diag = static_cast<CLBlastDiagonal>(info[3]->Uint32Value());
	const int m = info[4]->Uint32Value();
	const int n = info[5]->Uint32Value();
	const float *alpha = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	const int lda = info[8]->Uint32Value();
	float *b = reinterpret_cast<float*>(GET_CONTENTS(info[9].As<v8::Float32Array>()));
	const int ldb = info[10]->Uint32Value();
	cblas_ctrmm(CLBlastLayoutRowMajor, side, uplo, transa, diag, m, n, alpha, a, lda, b, ldb);
}
