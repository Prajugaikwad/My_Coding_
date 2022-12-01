#include<stdio.h>
#include<stdlib.h>
//float Average(int *Arr, int iSize)
float Average(int Arr[], int iSize)
{
   int iSum = 0, iCnt = 0;
   //     1         2          3
   for(iCnt = 0; iCnt<iSize; iCnt++)
   {
    //1   2    4    3
     iSum = iSum + Arr[iCnt];     //4
   }
   return(iSum/iSize);  // (150/5)   30.00
}

int main()
{
    int *ptr = NULL;//auto stack var
    int iLength = 0 , i =0 ;//auto stack var
    float fRet= 0.0f;//auto  stack var

    printf("Enter the number of elements");
    scanf("%d",&iLength);

    //allocate the memory for array
    ptr = (int *)malloc(iLength * sizeof(int));//20 bytes heap var
    // ptr = (int *)malloc(5*4)

    printf("please enter the numbers:");
    //   1       2          3
    for(i =0 ; i < iLength; i++)
    {

       scanf("%d",&ptr[i]);  //4
    }
    //fRet = Average(500,5)
    fRet = Average(ptr, iLength); // 30.00

    printf("Average of numbers is: %f",fRet);
    free(ptr);//free(500) MM will deallocate the memory
    //memory manager
    return 0;
}