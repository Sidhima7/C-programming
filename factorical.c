#include<stdio.h>
int main()
{
    int i,n,fact=1;//n=5
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        fact*=i;
    }
    printf("Factorical of a given number is %d",fact);
    return 0;
}