#include <stdio.h>

void main()
{
    char a = 'A', b, c;
    char mask = 0x0F;                  // 마스크 값(0000 1111)을 설정한다.

    printf("%X & %X = %X \n", a, mask, a & mask);   // 'A'와 0x0F의 비트 논리곱을 수행한다.
    printf("%X | %X = %X \n", a, mask, a | mask);   // 'A'와 0x0F의 비트 논리합을 수행한다.

    mask = 'a' - 'A';                  // 'a'와 'A'의 차이는 32이다.

    b = a ^ mask;                      // 'A'와 마스크(32)의 비트 배타적 논리합을 수행한다.
    printf("%c ^ %d = %c \n", a, mask, b);

    a = b ^ mask;                      // 'a'와 마스크(32)의 비트 배타적 논리합을 수행한다.
    printf("%c ^ %d = %c \n", b, mask, a);
}
