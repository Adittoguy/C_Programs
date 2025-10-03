#include<stdio.h>

int main()
{
    double arr[] = {10.0,20.0,30.0,40.0};
    printf("Size of arr : %lu\n", sizeof(arr));   // 32

    arr++;                                        // Error


    return 0;
}