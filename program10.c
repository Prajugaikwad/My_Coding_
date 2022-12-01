#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)

{
    int iAns1 = iNo % 3;
    int iAns2 = iNo % 5 ;
   if((iAns1 == 0) && (iAns2 == 0))
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
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = DivisibleByThreeAndFive(iValue);
    if(bRet == true )
    {
        printf("Number is divisible by 3 and 5");
    }
    else
    {
        printf("Number is not divisible by 3 or 5");
    }
    return 0;
}