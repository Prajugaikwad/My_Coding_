#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors are :\n");
    
    //OPTIMIZATION DAR VELES NAHI HOU SHAKAT
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   // CODE OPTIMIZATION
    {
        if((iNo%iCnt) == 0 )
        {
            printf("%d\n",iCnt);

        }
        //else
        //{
        //    printf("%d is not Factor of %d\n",iCnt,iNo);
        //}
    }


}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    DisplayFactors(iValue);

    return 0;
}