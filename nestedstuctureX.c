#include<stdio.h>

struct demo
{
    int i;
    float f;
    struct Hello
    {
        int j;
        float marks;
        double d;
    }hobj;
};

int main()
{
    printf("Size of demo structure : %lu\n",sizeof(struct demo));
    return 0;
}