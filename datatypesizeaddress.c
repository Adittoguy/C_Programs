# include <stdio.h>

int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.564323;
    
    // printf("%c\n",cValue);
    // printf("%d\n",iValue);
    // printf("%f\n",fValue);
    // printf("%lf\n",dValue);

    // printf("Size of Charater is : %lu Bytes\n",sizeof(cValue));
    // printf("Size of Integer is : %lu Bytes\n",sizeof(iValue));
    // printf("Size of Float is : %lu Bytes\n",sizeof(fValue));
    // printf("Size of Double is : %lu Bytes\n",sizeof(dValue));

    printf("Address of cValue is : %lu \n",&cValue);
    printf("Address of iValue is : %lu \n",&iValue);
    printf("Address of fValue is : %lu \n",&fValue);
    printf("Address of dValue is : %lu \n",&dValue);

    return 0;
}