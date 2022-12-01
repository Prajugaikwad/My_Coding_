#include<stdio.h>
int numberDivisibleByThreeFive(int iNo)
{
    int iNo = 0;

    if(iNo%3 == 0 && iNo%5 == 0)
    {
        return 0;
    }
    else
    {
      return 1;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0 ;
    printf("Enter number : \n");
    scanf("%d  ",&iValue);
    
    iRet = numberDivisibleByThreeFive(iValue);
    if(iRet != 0)
    {
       printf("%d number is not divisible by 3 and 5",&iValue);
    }
    else
    {
       printf("%d number is divisible by 3 and 5",&iValue);
    }
    return 0;
}