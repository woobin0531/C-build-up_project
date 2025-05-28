#include <stdio.h>

void main()
{
    char a, b, c;         // 문자형 변수 3개를 선언한다.

    a = 'A';              // 문자형 변수 a에 'A'를 대입한다.
    printf("%c \n", a);   // 문자형 변수 a를 문자형과 정수형으로 출력한다.
    printf("%d \n", a);

    b = 'a';              // 문자형 변수 b에 'a'를 대입한다.
    c = b + 5;            // 문자형 변수 b에 5를 더해서 문자형 변수 c에 대입한다.
    printf("%c \n", b);
    printf("%c \n", c);

    c = 90;               // 문자형 변수 c에 90을 대입한다.
    printf("%c \n", c);
}
