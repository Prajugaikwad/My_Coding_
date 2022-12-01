
#include<stdio.h>
#include<stdbool.h>
int CheckPalindrome(int iNo)
{
    int iDigit = 0 , iRev = 0;
    if(iNo < 0)
    {
       iNo = -iNo; 
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo /= 10;
    }
    return iRev;
}
bool CheckPalindrome(int iData)
{
   int iReverse = 0;
   iReverse = Reverse(iData);
   return(iReverse == iData);
}
 
int main()
{
    int iValue = 0;
    bool bRet;
    printf("Enter a number :");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);
    if(bRet == true )
    {
        printf("%d is palindrome number\n",iValue);
    }
    else
    {
        printf("%d is not palindrome number\n",iValue);
    }
    return 0;
}
