//frequency of a given number
#include<stdio.h>
#include<stdlib.h>
int CalculateFrequency(int Arr[],int iSize ,int iNo)
{
    int iCnt = 0, iFrequency = 0;
     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
        if(Arr[iCnt] == iNo)
        {
            iFrequency ++;
        }
     }
     return iFrequency ;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0,iValue;

    // step 1 :accept size of array
    printf("Enter number of elements : ");
    scanf("%d",&iLength);

     // step 2 :allocate memory for aray
     ptr = (int *)malloc(iLength * sizeof(int));//20 bytes heap var

     //step 3 :accept the elements in array
     for(i =0 ; i < iLength; i++)
    {

       scanf("%d",&ptr[i]);  //4
    }
    printf("Enter the number to find out the frequency: ");
    scanf("%d",&iValue);
    //step 4 : call the fun
    iRet=CalculateFrequency(ptr,iLength,iValue);
    printf("Frequency od %d is %d\n",iValue,iRet);

    //step 6: deallocate the memory
    free(ptr);

    return 0;
}