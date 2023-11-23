#include<stdio.h>
void main()
{
    char a[100];
    printf("Enter the string");
    scanf("%s",a);
    printf("The String is %s",a);
    printf("Enter the String");
    gets(a);
    printf("The string is %s",a);
    printf("Enter the String");
    scanf("%[^\n]s",a);
    printf("The string is %s",a);
}