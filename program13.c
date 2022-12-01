
#include<stdio.h>
// it is bad programming practice to use global variable 
// using while loop
void Display(int iRet)
{
  // good programming practice
   int iCnt = 0; 
   
   // reinitialize  
    iCnt = 1 ;         //  Now value 0 to 1 
   // joparyant shijat nahi toparyant shittya mara
   while(iCnt <= iRet)
   {
    printf("Jay Ganesh...\n");
    iCnt ++;
   }
}

int main()
{
    int iValue = 0;
    printf("Enter the value : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}