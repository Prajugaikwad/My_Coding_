
#include<stdio.h>

// using for loop
void reverseNumber(int iNo)
{
    int iCnt = 0;

    printf("_____________________\n");

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n_____________________\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    reverseNumber(iValue);

    return 0;
}