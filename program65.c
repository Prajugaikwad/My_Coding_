#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// TC : BC 1,  WC n,  AC 1 to n
int CheckLastOccurence(int Arr[],int iSize ,int iNo)
{
    int iCnt = 0;
    //      1          2             3
     for(iCnt = iSize-1; iCnt >= 0; iCnt--)
     {
        if(Arr[iCnt] == iNo)      //4
        {
           break;
        }
     }
     return iCnt;
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
    printf("Enter elements:\n"); //3
    for(i =0 ; i < iLength; i++)
    {
       scanf("%d",&ptr[i]);  //4
    }

     //step 3 :accept the elements in array
     
    printf("Enter the number to find out the last Occurance: ");
    scanf("%d",&iValue);
    //step 4 : call the fun
    iRet=CheckLastOccurence(ptr,iLength,iValue);
    if(iRet == -1)
    {
        printf("There is not %d in an array\n",iValue);
        
    }
    else
    {
      printf("%d is occured in an array at last index %d\n",iValue,iRet);
    }
    //step 6: deallocate the memory
    free(ptr);
    return 0;
}
// at line 16 we can write this code also
//if(iCnt == -1) // array purn firlat pn num not found
//     {       
//       return -1;
//     }
 //    else
//     {
//        return iCnt;
 //    }