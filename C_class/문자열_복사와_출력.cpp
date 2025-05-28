#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

void main()
{
    char str1[10];                        // 문자열 배열 str1과 str2를 선언한다.
    char str2[10];
    char str3[10] = "CookBook";           // 문자열 배열 str3을 선언과 동시에 문자열을 대입한다.

    strcpy(str1, "Basic-C");              // str1에 문자열을 대입한다.
    strcpy(str2, str3);                   // str3의 값을 str2에 복사한다.

    printf("str1 ==> %s \n", str1);       // 문자열 배열 str1, str2, str3을 출력한다.
    printf("str2 ==> %s \n", str2);
    printf("str3 ==> %s \n", str3);
}
