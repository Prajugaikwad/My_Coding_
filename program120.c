// bharlelli string aani ek rikami string 
// copy bharleli string in rikami string(without data)
//strcpy
#include<stdio.h>
void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
       *dest = *src; 
        src++;
        dest++;
    }
    *dest = '\0';  // hatane takaych he
}

int main() 
{
    
    char Arr[20];
    char Brr[20];

    printf("Please enter a string: \n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr, Brr); // strcpy(100, 200)

    printf("Copied string is: %s\n",Brr);

    return 0;
}
//Arr: sfgg .... *src
//Brr: Arr copied ....*dest ...*src-->*dest
//display Brr