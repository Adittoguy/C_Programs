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

    printf("Size of Demo is : %lu\n",sizeof(struct Demo));   // 12   will get
    printf("Size of Object is : %lu\n", sizeof(obj));        // 12   got
    return 0;
}