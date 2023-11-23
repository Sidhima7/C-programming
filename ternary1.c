//Write a program to check given character is even or odd
// by using ternary opreator

#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    (ch%2==0) ? printf("it is even") : printf("it is odd");
    //condition ? expression1 : expression2
    
    return 0;

}