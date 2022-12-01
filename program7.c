
//////////////////////////////////////
//steps to follow the programming
/////////////////////////////////////
//
//1  understand the problrm statement
//2  write thr algorithm
//3  decide the programming language
//4  test the program
//5  test the program
//
//////////////////////////////////////
//problem statement :number is divisible by 5 or not
//input : 23
//output : 23 is not divisible by 5
//
//input : 25
//output : 23 is divisible by 5
//
///////////////////////////////////////

//ALGORITHM
/*
  START 
     Accept number from user
     Divide that No by 5 and check the value of remainder
     if the value is 0 
        Then Display as No is divisible by 5
     otherwise
         display as No is not divisible by 5
   END 
*/

#include<stdio.h>
/////////////////////////////////////
//function name : divisibleByFive
//Description : to check wether input is divisible by 5 or not
//Input : integer 
//Output : integer
//Author : Gaikwad Prajakta
//Date : 12/10/2022
/////////////////////////////////////

int divisibleByFive(int iNo)
{
  int iAns = 0;
  iAns = iAns % 5 ;

  if(iAns == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
//////////////////////////////////////
//ENTRY POINT OF THE APPLICATION
//////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = divisibleByFive(iValue);

    if(iRet != 0)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else
    {
        
        printf("%d is not divisible by 5\n",iValue);
    
    }
    return 0;
}
/////////////////////////////////
//
//
////////////////////////////////