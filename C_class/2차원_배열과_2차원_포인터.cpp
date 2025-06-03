#include <stdio.h>

int main() {
    int a[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    int (*p)[2] = a;
    int (*q)[2] = a+1;
    int *r = a[1];
    int **s = &r;

    printf("%d %d %d\n", a[0][0], a[0][1], a[1][0]);
    printf("%d %d %d\n", p[0][0], p[0][1], p[1][0]);
    printf("%d %d %d\n", q[0][0], q[0][1], q[1][0]);
    printf("%d %d %d\n", r[-1], r[0], r[1]);
    printf("%d %d %d\n", (*(*s-1)), (*(*s)), (*(*s) + 1));
    return 0;
}
