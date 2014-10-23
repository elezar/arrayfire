#pragma once

#include "af/defines.h"

#ifdef __cplusplus
extern "C" {
#endif
    typedef enum transpose {
        AF_NO_TRANSPOSE,
        AF_TRANSPOSE,
        AF_CONJUGATE_TRANSPOSE
    } af_blas_transpose;

    AFAPI af_err af_matmul( af_array *out ,
                            const af_array lhs, const af_array rhs,
                            af_blas_transpose optLhs, af_blas_transpose optRhs);

    AFAPI af_err af_dot(    af_array *out,
                            const af_array lhs, const af_array rhs,
                            af_blas_transpose optLhs, af_blas_transpose optRhs);

    // matrix transpose
    AFAPI af_err af_transpose(af_array *out, af_array in);


#ifdef __cplusplus
}
#endif
