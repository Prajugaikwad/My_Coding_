#include<stdio.h>
int MaxDigit(int iNo)
{

    int iDigit = 0;
    int iMax = 0;

    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    while(iNo!= 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        //sadha number asel n tr purn 
        //firave lagte pn 9 jar asel tyat 
        //tr aaplyala break karta yeto program
        if(iMax == 9)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMax;
    // loop madhech fakt time complexity use hote
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number :");
    scanf("%d",&iValue); 

    iRet = MaxDigit(iValue);
    printf("Largest Value is: %d\n",iRet);
    
}