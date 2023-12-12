//WAP to compair two strings

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    printf("enter the string");
    scanf("%s",&str1);
    //gets(str1);
    printf("enter the string");
    scanf("%s",&str2);
    //gets(str2);
    int com=strcmp(str1,str2);
    if(com==0)
    {
        printf("the string is equal");
    }
    else
    {
        printf("the string is not equal");
    }
    return 0;
}