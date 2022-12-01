
/*
   &  $   $  $
   *  &   $   $
   *  *   &   $
   *  *   *   &
  
*/

#include<stdio.h>
#include<stdlib.h>
void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    if(iRow != iCol)
    {
        printf("Row number and column numbers are different\n");
        return;
    }
   for(i =1; i <= iRow; i++)
   {
    for(j =1; j <= iCol; j++)
    {
        if(i == j)
        {
            printf("&\t");
        }
       else if( i >= j )
       {
        printf("$\t");
       }
       else
       {
        printf("*\t");
       }
    }
    printf("\n\n");
   }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows : ");
    scanf("%d",&iValue1);
    printf("Enter number of columns : ");
    scanf("%d",&iValue2);
    Display(iValue1, iValue2);
    return 0;
}
