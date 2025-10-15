<<<<<<< HEAD
// pragma use

#include <stdio.h>
#pragma pack(1)

struct Demo
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;
};

int main()
{
    printf("Size of sturcture is : %lu\n", sizeof(struct Demo));
    return 0;
=======
// pragma use

#include <stdio.h>
#pragma pack(1)

struct Demo
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;
};

int main()
{
    printf("Size of sturcture is : %lu\n", sizeof(struct Demo));
    return 0;
>>>>>>> 828fd58bccfaf0ecbf7c2ebc90f2eb1796d6f664
}