#include<stdio.h>
#include<stdlib.h>
void DisplayEvenOddAddition(int Arr[],int iSize)
{
    int iCnt = 0, iEvenSum=0 , iOddSum=0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
         else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
   printf("number of even count is:%d\n",iEvenSum);
   printf("Summation of odd numbers is:%d\n",iOddSum);
   //printf("number of even count is:%d\n",iSize - iEvenCnt);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    // step 1 :accept size of array
    printf("Enter number of elements : ");
    scanf("%d",&iLength);

     // step 2 :allocate ,emory for aray
     ptr = (int *)malloc(iLength * sizeof(int));//20 bytes heap var

     //step 3 :accept the elements in array
     for(i =0 ; i < iLength; i++)
    {

       scanf("%d",&ptr[i]);  //4
    }
    //step 4 : call the fun
    DisplayEvenOddAddition(ptr,iLength);

    //step 5: display number of even elements
    //printf("Number of even elements are:%d\n",iRet);

    //step 6: deallocate the memory
    free(ptr);
    return 0;

}
