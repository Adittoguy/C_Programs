<<<<<<< HEAD
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
=======
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
>>>>>>> 828fd58bccfaf0ecbf7c2ebc90f2eb1796d6f664
}