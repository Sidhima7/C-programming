//With arguments without returntype
//Program for sum of two numbers

#include<stdio.h>
void main()
{
    void add(int,int);
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    add(a,b);                  
}
void add(int a,int b)
{
    int z;
    z=a+b;
    printf("Sum=%d",z);
}