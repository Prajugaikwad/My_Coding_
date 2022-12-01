#include<stdio.h>
int ReverseDigits(int iNo)
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
}
int main()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = ReverseDigits(iValue) ;
    printf("the number of digits in the given numbers are: %d\n",iRet);
    return 0;  //which indicates the success to the operating system
}
