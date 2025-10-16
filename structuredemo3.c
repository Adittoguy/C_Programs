#include <stdio.h>
struct Demo
{
    int i;
    int j;
    float f;
};

int main()
{
    struct Demo obj;
    struct Demo *p = &obj; // becoz of pointer we have to use indirect accessing operator

    p->i = 11;
    p->f = 90.4f;
    p->j = 21;

    printf("%d\n", p->i);  //  11
    printf("%f\n", p->f);  //  90.4
    printf("%d\n", p->j);  //  21
    return 0;
}