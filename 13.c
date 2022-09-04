/* 13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right.
*/

#include<stdio.h>
int main()
{
    int x,new_num;
    printf("Enter a three-digit number: ");
    scanf("%d",&x);

    new_num = x%10*100;
    x = x/10;
    new_num = new_num+x%10*10;
    x = x/10;
    new_num = new_num+x;

    printf("New number = %d",new_num);

    return 0;
}