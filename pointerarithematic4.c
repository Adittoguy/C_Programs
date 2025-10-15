<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int Arr[]={11,21,51,101,111};
    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    //printf("Result of addition is : %d\n", q+p);
    printf("Result of substraction is : %ld\n", q-p);  // Allowed

    q = q - 2;                                         // Allowed
    printf("Data Pointed by q is : %d\n", *q);
    
    

    return 0;
=======
#include <stdio.h>

int main()
{
    int Arr[]={11,21,51,101,111};
    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    //printf("Result of addition is : %d\n", q+p);
    printf("Result of substraction is : %ld\n", q-p);  // Allowed

    q = q - 2;                                         // Allowed
    printf("Data Pointed by q is : %d\n", *q);
    
    

    return 0;
>>>>>>> 828fd58bccfaf0ecbf7c2ebc90f2eb1796d6f664
}