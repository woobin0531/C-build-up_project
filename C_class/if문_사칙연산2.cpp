#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    int result;
    char k;

    printf("첫 번째 계산할 값을 => ");
    scanf("%d", &a);

    printf("연산자를 입력하세요 (+, -, *, /) => ");
    scanf(" %c", &k); // 앞에 공백 필수

    printf("두 번째 계산할 값을 => ");
    scanf("%d", &b);

    if (k == '+') {
        result = a + b;
        printf("%d + %d = %d\n", a, b, result);
    }
    else if (k == '-') {
        result = a - b;
        printf("%d - %d = %d\n", a, b, result);
    }
    else if (k == '*') {
        result = a * b;
        printf("%d * %d = %d\n", a, b, result);
    }
    else if (k == '/') {
        if (b != 0) {
            result = a / b;
            printf("%d / %d = %d\n", a, b, result);
        }
        else {
            printf("0으로 나누면 안됩니다.\n");
        }
    }
    else {
        printf("올바른 연산자를 입력하세요.\n");
    }

    return 0;
}
