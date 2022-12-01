#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int iNo)
{
    int iDigit = 0 , iRev = 0;

    //temporary variable
    int iTemp = iNo;

    for(   ;iNo!=0;  )//for(;;) its valid
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev==iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
    //return(iTemp == iRev)
    //instead of if else statement

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