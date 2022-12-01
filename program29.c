#include<stdio.h>

// using while loop

void reverseNumber(int iNo)
{

    printf("_____________________\n");
    int iCnt = iNo;

    while( iCnt >= 1 )
    {
        printf("%d\t",iCnt);
        iCnt--;
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