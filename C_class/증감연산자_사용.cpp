#include <stdio.h>

void main()
{
    int a = 10, b;

    b = a++;            // b = a를 수행한 후 a를 1 증가시킨다.
    printf("%d \n", b);

    b = ++a;            // a를 1 증가시킨 후 b = a를 수행한다.
    printf("%d \n", b);
}
