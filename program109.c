#include<stdio.h>
int CountFrequency(char *str, char ch)
{
    int iCnt = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';

    printf("Please enter string \n");
    scanf("%[^'\n']s",Arr);
    printf("please enter a character \n");
    scanf(" %c",&cValue);

    iRet = CountFrequency(Arr,cValue);
    printf("Frequency of letter is : %d\n",iRet);

    return 0;
}