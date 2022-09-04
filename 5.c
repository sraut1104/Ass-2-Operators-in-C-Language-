// 5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter a three-digit number: ");
    scanf("%d",&a);

    sum=sum+a%10;
    a=a/10;
    sum=sum+a%10;
    a=a/10;
    sum=sum+a; //sum=sum+a%10;

    printf("\nSum of the digits = %d",sum);


    return 0;
}