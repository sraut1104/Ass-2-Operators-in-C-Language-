// 3. Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    temp = a;
    a=b;
    b=temp;

    printf("%d %d",a,b);

    return 0;
}