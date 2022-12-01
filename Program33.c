#include<stdio.h>
int CountDigit(int iNo)
{
     // code
     int iDigit = 0;
     int iCnt=0;

     // code is running bt there is bug in program
     while(iNo >= 0) 
     {
        iDigit = iNo % 10;
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
//number accept and 
//count the number of digite in that number
// input:  751
//output:   3

//input:  7
//output:  1

//input:  75
//output:  2