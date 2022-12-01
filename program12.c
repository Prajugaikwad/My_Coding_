

#include<stdio.h>
//Return_Datatype Function_Name(Paramter_List)
//{
   // function body   
//}
void Display(iValue)
{
  int iCnt = 0;
  // joparyanty shijat nahi toparyant 5 shittya mara
 for(int iCnt = 0; iCnt < iValue; iCnt++)
 {
   printf("Jay Ganesh...\n",iCnt);
 }
}

//function block start
int main()
{
    
    int iNo = 0;
    printf("Enter the number of iterations :");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}