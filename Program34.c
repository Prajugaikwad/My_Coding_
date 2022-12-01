#include<stdio.h>
int CountDigit(int iNo)
{
     // code
     int iDigit = 0;
     int iCnt=0;

     if(iNo == 0) // Filter
     {
        return 1;
     }

     if(iNo < 0)   // Updator
     {
        iNo = -iNo;
     }
     //works on both positive and negative
     while(iNo > 0) 
     {
        //iDigit = iNo % 10;
        iNo = iNo / 10 ;
        iCnt++ ;
     }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue) ;
    printf("the number of digits in the given numbers are: %d\n",iRet);
    return 0;  //which indicates the success to the operating system
}

// -5   - 4  -3  -2  -1  0  1  2  3  4  5 