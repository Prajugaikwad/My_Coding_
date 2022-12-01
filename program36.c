#include<stdio.h>
int SumDigit(int iNo)
{
     // code
     int iDigit = 0;
     int iCnt=0;
     int iSum = 0;
     if(iNo < 0)
     {
        iNo = -iNo;
     }
     //works on both positive and negative
     while(iNo != 0) 
     {
        iDigit = iNo % 10;
        iNo = iNo / 10 ;
        iSum = iSum + iDigit ;
     }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue) ;
    printf("the number of digits in the given numbers are: %d\n",iRet);
    return 0;  //which indicates the success to the operating system
}
