#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int iNo)
{
    int iDigit = 0 , iRev = 0;

    //temporary variable
    int iTemp = iNo;
   //confusing for loop i will visit you double
   //conversion of while loop to for loop
    for( iRev = 0 ;iNo != 0; iNo = iNo / 10)//for(;;) its valid
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
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