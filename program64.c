// accept n numbers and display reverse
#include<stdio.h>
#include<stdlib.h>
void DisplayReverse(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = iSize-1; iCnt>=0 ;iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }

}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    printf("Enter number of elements:\n");//1
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));//2
    printf("Enter elements:\n"); //3
    for(i =0 ; i < iLength; i++)
    {
       scanf("%d",&ptr[i]);  //4
    }
    printf("The reverse order elements are: \n");
    DisplayReverse(ptr,iLength);//4
    free(ptr);
    
    return 0;
}
