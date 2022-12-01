#include<stdio.h>
#include<stdlib.h>
int Summation(int Arr[], int iSize)
{
  int iCnt = 0, iSum = 0;
  //      1           2             3 
  for(int iCnt =0 ; iCnt < iSize; iCnt++)
  {
    iSum = iSum + Arr[iCnt];    // 4
  }
  return iSum;
}
int main()
{
    int iLength = 0;
    int iRet = 0;
    int *ptr = NULL; // ACTUAL MAAL
    printf("Enter the elemnts that you want to store:\n");
    scanf("%d",&iLength);
    ptr = (int *)malloc(iLength * sizeof(int));
    for(int iCnt =0 ; iCnt < iLength; iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
    }
    printf("Elements from array are: \n");
    for(int iCnt =0 ; iCnt < iLength; iCnt++)
    {
       printf("%d\n",ptr[iCnt]);
    }
    //ha array fun la aani addition karun gheu
    iRet = Summation(ptr,iLength);//  Summation(100,5)
    printf("Addition of all elements is:",iRet);
    return 0;
}