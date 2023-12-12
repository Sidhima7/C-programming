//With arguments with returntype.
//Program for sum of two numbers.

#include<stdio.h>
void main()
{
    int add(int,int);
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=add(a,b);                  // fun call
    printf("Sum=%d",c);
}
    int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}