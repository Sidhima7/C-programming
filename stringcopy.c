#include<stdio.h>
#include<string.h>
int main()
{
    char a1[100],a2[100];
    printf("Enter the string");
    scanf("%[^\n]s",a1);
    printf("Enter the string");
    scanf("%[^\n]s",a2);
    int l=strlen(a1);
    for (int i=0;i<l;i++)
    a2[i]=a1[i];
    printf("The copied the string is=%s",a2);
    return 0;
}