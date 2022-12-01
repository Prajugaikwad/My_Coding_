#include<stdio.h>
#include<stdbool.h>
// perfect number : here reuse of sumfactor
// addition of factors equal to the same number
int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    
    
    //OPTIMIZATION DAR VELES NAHI HOU SHAKAT
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   // CODE OPTIMIZATION
    {
        if((iNo % iCnt) == 0 )
        {
            iSumFact = iSumFact + iCnt;
        }
    
    }
    return iSumFact;
}

// 6  28   496   8128
bool CheckPerfect(int iData)
{
    int iAns = 0;
    iAns = SumFactors(iData);
    if(iAns == iData)  
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false ;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}