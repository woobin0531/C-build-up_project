#include <stdio.h>
int main() {
    int a = 10;
    int *b = &a;
    print("%d %d %d", a, *b, *(&a));
    return 0;
}