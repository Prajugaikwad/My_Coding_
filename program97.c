#include<stdio.h>
int main()
{
    int i = 0;
    printf("____________________________\n");
    printf("ASCII table\n");
    printf("____________________________\n");
    printf("Character\t Decimal\t Hex\t Octal");
    for(int i=0; i<=127; i++)
    {
        printf("%c  \t %c \t %x \t %o\n",i,i,i,i);
        printf("___________________________\n");
    }
    return 0;
}