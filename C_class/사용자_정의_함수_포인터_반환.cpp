#include <stdio.h>
#include <string.h>
char n[6];
char* soojebi() {
    strcpy(n, "Hello");
    return n;
}

int main() {
    char* p = soojebi();
    printf("%s\n", p);
    return 0;
}
