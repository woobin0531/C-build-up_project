#include <stdio.h>

void main()
{
    int a, b, c, d;

    a = 100 + 100;         // a에 두 수의 계산 결과를 대입한다.
    b = a + 100;           // b에 변수 a와 수의 계산 결과를 대입한다.
    c = a + b - 100;       // c에 변수 a, b의 계산 결과를 대입한다.
    d = a + b + c;         // d에 a, b, c의 덧셈 결과를 대입한다.

    printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);

    printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", 100, 200, 200, 500);

    a = 100;
    a = a + 200;           // a에 자신의 값과 200을 더한 값을 다시 대입한다.
    printf("a의 값 ==> %d \n", a);
}
