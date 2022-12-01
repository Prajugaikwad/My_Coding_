//minimum digit in a number with optimization
#include<stdio.h>
int MinDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    while(iNo!= 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        //sadha number asel n tr purn 
        //firave lagte pn 9 jar asel tyat 
        //tr aaplyala break karta yeto program
        if(iMin == 0)
        {
            break;   // optimization
        }
        iNo = iNo / 10;
    }
    return iMin;
    // loop madhech fakt time complexity use hote
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number :");
    scanf("%d",&iValue); 

    iRet = MinDigit(iValue);
    printf("Largest Value is: %d\n",iRet);
    
}