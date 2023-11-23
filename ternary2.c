//write a program to check the given character is
//vowel or consonant by using conditional operator

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') ? printf("it is vowel") : printf("it is consonant");
    //conditional ? expression1 : expression2

    return 0;
}