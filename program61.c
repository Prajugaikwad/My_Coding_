#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// TC : BC 1,  WC n,  AC 1 to n
int CheckOccurence(int Arr[],int iSize ,int iNo)
{
    int iCnt = 0;
     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
        
     }
     if(iCnt == iSize) // array purn firlat pn num not found
     {       
       return -1;
     }
     else
     {
        return iCnt;
     }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iRet = 0;
    int iValue = 0;

    // step 1 :accept size of array
    printf("Enter number of elements : ");
    scanf("%d",&iLength);

     // step 2 :allocate memory for aray
     ptr = (int *)malloc(iLength * sizeof(int));//20 bytes heap var

     //step 3 :accept the elements in array
     
    printf("Enter the number to find out the Occurance: ");
    scanf("%d",&iValue);
    //step 4 : call the fun
    iRet=CheckOccurence(ptr,iLength,iValue);
    if(iRet == -1)
    {
        printf("There is not %d in an array\n",iValue);
        
    }
    else
    {
      printf("%d is occured in an array at index %d\n",iValue,iRet);
    }
    //step 6: deallocate the memory
    free(ptr);
    return 0;
}