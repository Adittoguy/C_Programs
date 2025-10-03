#include <stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
    char ch;
};

int main()
{
    printf("Size of sturcture is : %lu\n", sizeof(struct Demo));
    return 0;
}