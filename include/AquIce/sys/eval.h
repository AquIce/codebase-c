#ifndef __AQUICE_SYS_EVAL_H__
#define __AQUICE_SYS_EVAL_H__

#include "sys.h"
#include "types.h"

#define EvalPrint32(x) printf("%s = %d\n", Name(x), (i32)x)
#define EvalPrint64(x) printf("%s = %lld\n", Name(x), (i64)x)
#define EvalPrintU32(x) printf("%s = %ud\n", Name(x), (u32)x)
#define EvalPrintU64(x) printf("%s = %llud\n", Name(x), (u64)x)
#define EvalPrintF32(x) printf("%s = %f\n", Name(x), (f32)x)
#define EvalPrintF64(x) printf("%s = %lf\n", Name(x), (f64)x)

#endif // __AQUICE_SYS_EVAL_H__