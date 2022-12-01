#include<stdio.h>
int main()
{
   int iNo1 = 0 , iNo2 = 0;
   int iRet = 0 ;
   printf("Enter first number: \n");
   scanf("%d",&iNo1);

   printf("Enter second number: \n");
   scanf("%d",&iNo2);

    iRet = iNo1 * iNo2;
    printf("multiplication is : %d\n",iRet);
   
    return 0;

}