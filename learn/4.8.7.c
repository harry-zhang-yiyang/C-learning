#include <stdio.h>
#include <float.h>

int main(void) {
	double d_val = 1.0 / 3.0;
    float f_val = 1.0f / 3.0f;

    // 显示 float 和 double 计算的值
    printf("Using float:\n");
    printf("%.6f\n", f_val);
    printf("%.12f\n", f_val);
    printf("%.16f\n", f_val);

    printf("\nUsing double:\n");
    printf("%.6f\n", d_val);
    printf("%.12f\n", d_val);
    printf("%.16f\n", d_val);

    // 显示 FLT_DIG 和 DBL_DIG
    printf("\nFLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);

    return 0;
}
