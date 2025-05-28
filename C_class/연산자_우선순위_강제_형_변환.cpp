#include <stdio.h>

void main()
{
    int a = 2, b = 3, c = 4;           // 정수형 변수를 선언한다.
    int result1, mok, namugi;
    float result2;                     // 실수형 변수를 선언한다.

    result1 = a + b - c;               // 더하기와 빼기 연산을 동시에 수행한다.
    printf("%d + %d - %d = %d \n", a, b, c, result1);

    result1 = a + b + c;               // 더하기와 합하기 연산을 동시에 수행한다.
    printf("%d + %d + %d = %d \n", a, b, c, result1);

    result2 = a + b / (float)c;        // 정수 값을 실수로 강제 변환한 후 연산한다.
    printf("%d + %d / %d = %f \n", a, b, c, result2);

    mok = c / b;                       // 몫을 구한다.
    printf("%d / %d 의 몫은 %d \n", c, b, mok);

    namugi = c % b;                    // 나머지를 구한다.
    printf("%d %% %d 의 나머지는 %d \n", c, b, namugi);
}
