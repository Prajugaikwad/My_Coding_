#include<stdio.h>
#include<stdbool.h>
// perfect number : here reuse of sumfactor
// addition of factors equal to the same number
int CheckPerfect(int iNo)
{
    int iCnt =0, iSum = 0;
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   // CODE OPTIMIZATION
    {
        if((iNo % iCnt) == 0 )
        {
            iSum = iSum + iCnt;

        }
    
    }
    if(iSum  == iNo)  
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 6  28   496   8128

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