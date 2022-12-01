
//  row      4
//  columns  4
/*

     *   *    *   *
     *   *    *   *
     *   *    *   *   
     *   *    *   * 
       
*/

#include<stdio.h>
void Display(int iRow, int iCol) //N
{
    int i = 0, j = 0;
    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }
    
    //     1      2      3
    for(i = 1; i<=iRow; i++ ) // outer
    {
      for(j = 1; j<=iCol; j++) // inner  4 of outer
      {
        printf("*\t");  // 4 of innner
      }
      printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows: \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns: \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
    
}