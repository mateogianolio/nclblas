
#include "routines.h"

void dgemv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[0]->Uint32Value());
	const int m = info[1]->Uint32Value();
	const int n = info[2]->Uint32Value();
	const double alpha = info[3]->NumberValue();
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	const int lda = info[5]->Uint32Value();
	const double *x = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	const int inc_x = info[7]->Uint32Value();
	const double beta = info[8]->NumberValue();
	double *y = reinterpret_cast<double*>(GET_CONTENTS(info[9].As<v8::Float64Array>()));
	const int inc_y = info[10]->Uint32Value();
	cblas_dgemv(CLBlastLayoutRowMajor, trans, m, n, alpha, a, lda, x, inc_x, beta, y, inc_y);
}

void sgemv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[0]->Uint32Value());
	const int m = info[1]->Uint32Value();
	const int n = info[2]->Uint32Value();
	const float alpha = info[3]->NumberValue();
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	const int lda = info[5]->Uint32Value();
	const float *x = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	const int inc_x = info[7]->Uint32Value();
	const float beta = info[8]->NumberValue();
	float *y = reinterpret_cast<float*>(GET_CONTENTS(info[9].As<v8::Float32Array>()));
	const int inc_y = info[10]->Uint32Value();
	cblas_sgemv(CLBlastLayoutRowMajor, trans, m, n, alpha, a, lda, x, inc_x, beta, y, inc_y);
}

void zgemv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[0]->Uint32Value());
	const int m = info[1]->Uint32Value();
	const int n = info[2]->Uint32Value();
	const double *alpha = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	const double *a = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	const int lda = info[5]->Uint32Value();
	const double *x = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	const int inc_x = info[7]->Uint32Value();
	const double *beta = reinterpret_cast<double*>(GET_CONTENTS(info[8].As<v8::Float64Array>()));
	double *y = reinterpret_cast<double*>(GET_CONTENTS(info[9].As<v8::Float64Array>()));
	const int inc_y = info[10]->Uint32Value();
	cblas_zgemv(CLBlastLayoutRowMajor, trans, m, n, alpha, a, lda, x, inc_x, beta, y, inc_y);
}

void cgemv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const CLBlastTranspose trans = static_cast<CLBlastTranspose>(info[0]->Uint32Value());
	const int m = info[1]->Uint32Value();
	const int n = info[2]->Uint32Value();
	const float *alpha = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	const float *a = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	const int lda = info[5]->Uint32Value();
	const float *x = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	const int inc_x = info[7]->Uint32Value();
	const float *beta = reinterpret_cast<float*>(GET_CONTENTS(info[8].As<v8::Float32Array>()));
	float *y = reinterpret_cast<float*>(GET_CONTENTS(info[9].As<v8::Float32Array>()));
	const int inc_y = info[10]->Uint32Value();
	cblas_cgemv(CLBlastLayoutRowMajor, trans, m, n, alpha, a, lda, x, inc_x, beta, y, inc_y);
}
