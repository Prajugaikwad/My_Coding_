#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Arr[5];
    int iCnt = 0;
    printf("Enter the elemnts:\n");
    for(int iCnt =0 ; iCnt < 5; iCnt++)
    {
       scanf("%d\n",&Arr[iCnt]);
    }

    printf("Elements from array are: \n");
    for(int iCnt =0 ; iCnt < 5; iCnt++)
    {
       printf("%d\n",Arr[iCnt]);
    }
    //ha array fun la aani addition karun gheu
    return 0;
}