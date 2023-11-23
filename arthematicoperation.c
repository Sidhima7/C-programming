#include<stdio.h>
void main()
{
    int a,b,sum,diff,multiply,divide;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);

    sum=a+b;
    printf("sum=%d\t",a+b);

    diff=a-b;
    printf("diff=%d\t",a-b);

    multiply=a*b;
    printf("multiply=%d\t",a*b);
    
    divide=a/b;
    printf("divide=%d\t",a/b);

}