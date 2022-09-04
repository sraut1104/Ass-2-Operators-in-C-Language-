/* 10. Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)
*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    printf("\n%d",a/10*10);


    return 0;
}