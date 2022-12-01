#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// TC : BC 1,  WC n,  AC 1 to n
bool CheckOccurence(int Arr[],int iSize ,int iNo)
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
       return false;
     }
     else
     {
        return true ;
     }

      
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    bool bRet = false;
    int iValue = 0;

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
    printf("Enter the number to find out the Occurance: ");
    scanf("%d",&iValue);
    //step 4 : call the fun
    bRet=CheckOccurence(ptr,iLength,iValue);
    if(bRet == true)
    {
        printf("%d is occured in an array\n",iValue);

    }
    else
    {
        printf("%d is not occured in an array\n",iValue);

    }
    //step 6: deallocate the memory
    free(ptr);

    return 0;
}