#include<stdio.h>
int a=50;
void main()
{
    int a=20;
    {
        int a=10;
        printf("Block=%d",a);
    }
    printf("Function=%d",a);
}