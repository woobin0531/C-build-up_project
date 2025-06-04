#include <stdio.h>

struct Student {
    char gender;
    int age;
};

int main() {
    struct Student s[3] = {'F', 21,'M', 20,'M', 24 };
    struct Student *p = s;

    printf("%c %d\n", s[0].gender, s[0].age);
    printf("%c %d\n", (*s).gender, (*s).age);
    printf("%c %d\n", s->gender, s->age);
    printf("%c %d\n", (s+1)->gender, (s+1)->age);
    printf("%c %d\n", p[0].gender, p[0].age);
    printf("%c %d\n", (*p).gender, (*p).age);
    printf("%c %d\n", p->gender, p->age);
    printf("%c %d\n", (p+1)->gender, (p+1)->age);

    return 0;
}
