
#include<stdio.h>
// difference of factors and non factors
int DiffFactNonFact(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    
    //OPTIMIZATION DAR VELES NAHI HOU SHAKAT
     for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   // CODE OPTIMIZATION
    {
        if((iNo % iCnt) == 0 )
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    
    }
    int iDiff = iSumFact - iSumNonFact ;
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    iRet = DiffFactNonFact(iValue);
    printf("Diference  of factors and non factors is: %d\n",iRet);
    return 0;
}