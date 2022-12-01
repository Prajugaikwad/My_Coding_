
// accept name and display on screen
#include<stdio.h>
#include<stdbool.h>
int main()
{
    char Arr[50];
    printf("Enter your full name: \n");
    //scanf("%s",Arr);
    // to take full name 
    // name of array is internally considered as base address so we havnt taken & operator
    scanf("%[^'\n']s",Arr);

    printf("Your name is: %s\n",Arr);

    return 0;

}