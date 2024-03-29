#include <stdio.h>

#define ENABLE_ASSERT 1

#include <AquIce/sys/sys.h>
#include <AquIce/sys/eval.h>
#include <AquIce/sys/types.h>
#include <AquIce/sys/math.h>
#include <AquIce/sys/geo2.h>
#include <AquIce/sys/geo3.h>
#include <AquIce/sys/assert.h>

int main()
{
	printf("\n----- Assert -----\n");
	int a = 1;
	int b = 2;
	Assert(a < b);

	printf("\n----- Array Count -----\n");
	int arr[] = {1, 2, 3, 4, 5};
	size_t array_count = ArrayCount(arr);
	EvalPrint32(array_count);

	printf("\n----- Min/Max -----\n");
	int min = Min(a, b);
	int max = Max(a, b);
	EvalPrint32(min);
	EvalPrint32(max);

	printf("\n----- Math Functions -----\n");
	Assert(32.3f == abs_f32(32.3f));
	Assert(32.3 == abs_f64(32.3));
	return 0;
}