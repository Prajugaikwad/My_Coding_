#include<stdio.h>
int CountEvenDigits(int iNo)
{
     // code
     
     int iEvenCnt=0;
     int iDigit = 0;

     if(iNo == 0)
     {
        return 1;
     }
     
     if(iNo < 0)
     {
        iNo = -iNo;
     }
     //works on both positive and negative
     while(iNo != 0) 
     {
        iDigit = iNo % 10;
        if(iDigit %2 == 0)
        {
           iEvenCnt++;
        }
        iNo = iNo / 10;
     }

    return iEvenCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue) ;
    printf("the number of digits in the given numbers are: %d\n",iRet);
    return 0;  //which indicates the success to the operating system
}
