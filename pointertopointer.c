#include<stdio.h>

int main()
{
    int no = 11;
    int *p = &no;
    int **q = &p;
    int ***a = &q;
    int ****b = &a;
    int *****c = &b;
    
    printf("%d\n",no);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",***a);
    printf("%d\n",****b);
    printf("%d\n",*****c);
    printf("%d\n",**c);           // Didn't print but accepted
    // printf("%d\n",no);
    // printf("%d\n",no);

    return 0;
}