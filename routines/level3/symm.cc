
#include "routines.h"

void dsymm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastSide side = static_cast<CLBlastSide>(info[0]->Uint32Value());
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[1]->Uint32Value());
	const int m = info[2]->Uint32Value();
	const int n = info[3]->Uint32Value();
	const double alpha = info[4]->NumberValue();
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int lda = info[6]->Uint32Value();
	const double *b = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	const int ldb = info[8]->Uint32Value();
	const double beta = info[9]->NumberValue();
	double *c = reinterpret_cast<double*>(info[10].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	const int ldc = info[11]->Uint32Value();
	cblas_dsymm(CLBlastLayoutRowMajor, side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc);
}

void ssymm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastSide side = static_cast<CLBlastSide>(info[0]->Uint32Value());
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[1]->Uint32Value());
	const int m = info[2]->Uint32Value();
	const int n = info[3]->Uint32Value();
	const float alpha = info[4]->NumberValue();
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int lda = info[6]->Uint32Value();
	const float *b = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	const int ldb = info[8]->Uint32Value();
	const float beta = info[9]->NumberValue();
	float *c = reinterpret_cast<float*>(info[10].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	const int ldc = info[11]->Uint32Value();
	cblas_ssymm(CLBlastLayoutRowMajor, side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc);
}

void zsymm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastSide side = static_cast<CLBlastSide>(info[0]->Uint32Value());
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[1]->Uint32Value());
	const int m = info[2]->Uint32Value();
	const int n = info[3]->Uint32Value();
	const double *alpha = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int lda = info[6]->Uint32Value();
	const double *b = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));
	const int ldb = info[8]->Uint32Value();
	const double *beta = reinterpret_cast<double*>(info[9].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	double *c = reinterpret_cast<double*>(info[10].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	const int ldc = info[11]->Uint32Value();
	cblas_zsymm(CLBlastLayoutRowMajor, side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc);
}

void csymm(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastSide side = static_cast<CLBlastSide>(info[0]->Uint32Value());
	const CLBlastTriangle uplo = static_cast<CLBlastTriangle>(info[1]->Uint32Value());
	const int m = info[2]->Uint32Value();
	const int n = info[3]->Uint32Value();
	const float *alpha = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int lda = info[6]->Uint32Value();
	const float *b = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));
	const int ldb = info[8]->Uint32Value();
	const float *beta = reinterpret_cast<float*>(info[9].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	float *c = reinterpret_cast<float*>(info[10].As<v8::Float32Array>()->Buffer()->GetContents().Data());
	const int ldc = info[11]->Uint32Value();
	cblas_csymm(CLBlastLayoutRowMajor, side, uplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc);
}
