// 6. Write a program which takes a character as an input and displays its ASCII code

#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    printf("\nASII code of %c is %d",x,x);

    return 0;
}