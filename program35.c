//accept the number and add the digits of that number 
#include<stdio.h>
int SumDigit(int iNo)
{
     // code
     int iDigit = 0;
     int iCnt=0;
     int iSum = 0;
     //works on both positive and negative
     while(iNo != 0) 
     {
       // iDigit = iNo % 10;
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
//number accept and 
//count the number of digite in that number
// input:  751
//output:   13

//input:  7
//output:  7

//input:  75
//output:  12