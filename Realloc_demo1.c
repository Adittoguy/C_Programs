<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;


    // step1 : Allocate the memory
    Arr = (int *) malloc ( 5 * sizeof(int));


    //Step2: use the memory

    Arr = (int *) realloc (Arr, 10 * sizeof(int));

    //Step3: Free the memory
    free(Arr);

    return 0;
=======
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;


    // step1 : Allocate the memory
    Arr = (int *) malloc ( 5 * sizeof(int));


    //Step2: use the memory

    Arr = (int *) realloc (Arr, 10 * sizeof(int));

    //Step3: Free the memory
    free(Arr);

    return 0;
>>>>>>> 828fd58bccfaf0ecbf7c2ebc90f2eb1796d6f664
}