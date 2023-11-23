#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n],i,sum=0,sum1=0;
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        int flag=0,j;
        for(j=2;j<=a[i]/2;j++)
    {
        if(a[i]%j==0)
    {
        flag=1;
        break;
    }
    }    
    if(flag==0)
    sum=sum+a[i];
    else
    sum1=sum1+a[i];
    }
    printf("Sum of the prime elements in arry=%d",sum);
    printf("Sum of the non prime elements in arry=%d",sum1); 
    return 0;
}