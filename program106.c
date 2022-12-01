#include<stdio.h>
int CountSmall(char *str)
{
    int iCnt = 0;
    char ch = 'a';
    while(*str != '\0')
    {
        if((ch >= 'a') && (ch<='z'))
        {
            iCnt ++;
        }
        str ++;
    }
    return iCnt;
}
int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Please enter string \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCh(Arr);
    printf("Frequency of a or A is : %d\n",iRet);
    return 0;
}
