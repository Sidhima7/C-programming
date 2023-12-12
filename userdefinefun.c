//WAP to print sum of two values by using user defined function

#include<stdio.h>
int add(int,int);
int main()
{
    int x,y;
    printf("enter the values");
    scanf("%d%d",&x,&y);
    int z=add(x,y);//fun_calling//x,y are actual arguments
    printf("sum :%d",z);
}
int add(int a,int b) //fun_definition//a,b are formal arguments
{
    return a+b;
}