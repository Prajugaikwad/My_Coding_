// accept string and  whitespaces count kara
#include<stdio.h>
int CountWhitespace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
      if(*str == ' ')
      {
         iCnt++;
      }
        str++;
    }
    return iCnt;

}

 int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter a string: \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhitespace(Arr); // strlwx(100);

    printf("Number of whitespaces in a string are : %d\n",iRet);

    return 0;
}