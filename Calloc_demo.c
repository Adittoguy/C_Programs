<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length =0;
    int *Arr = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&length);

    // step1 : Allocate the memory
    Arr = (int *) calloc (length , sizeof(int));
    if(Arr==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets successfully allocated\n");
    }
    //Step2: use the memory

    //Step3: Free the memory
    free(Arr);

    return 0;
=======
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length =0;
    int *Arr = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&length);

    // step1 : Allocate the memory
    Arr = (int *) calloc (length , sizeof(int));
    if(Arr==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets successfully allocated\n");
    }
    //Step2: use the memory

    //Step3: Free the memory
    free(Arr);

    return 0;
>>>>>>> 828fd58bccfaf0ecbf7c2ebc90f2eb1796d6f664
}