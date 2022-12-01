#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt = 0;
    char ch = 'A';
    while(*str != '\0')
    {
        if((ch >= 'A') && (ch<='Z'))
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

    iRet = CountCapital(Arr);
    printf("Frequency of a or A is : %d\n",iRet);
    return 0;
}
