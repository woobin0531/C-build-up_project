#include <stdio.h>

void main()
{
    // 정수형 서식
    printf("%d\n", 123);
    printf("%5d\n", 123);
    printf("%05d\n", 123);

    // 실수형 서식
    printf("%f\n", 123.45);
    printf("%7.1f\n", 123.45);
    printf("%7.3f\n", 123.45);

    // 문자열형 서식
    printf("%s\n", "Basic-C");
    printf("%10s\n", "Basic-C");
}
