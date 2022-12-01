#include<stdio.h>
// iteration array ani input
int Summation(int Data[], int iSize)
{
  int iCnt = 0, iSum = 0;
  //      1           2             3 
  for(iCnt =0 ; iCnt < iSize; iCnt++)
  {
    iSum = iSum + Data[iCnt];    // 4
  }
  return iSum;
}

int main()
{
    int Arr[5];
    int iCnt = 0, iRet = 0;
    printf("Enter the elemnts:\n");
    for(int iCnt =0 ; iCnt < 5; iCnt++)
    {
       scanf("%d",&Arr[iCnt]);
    }

    printf("Elements from array are: \n");
    for(int iCnt =0 ; iCnt < 5; iCnt++)
    {
       printf("%d\n",Arr[iCnt]);
    }
    //ha array fun la aani addition karun gheu
    iRet = Summation(Arr,5);//  Summation(100,5)
    printf("Addition of all elements is:",iRet);
    return 0;
}