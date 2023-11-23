#include<stdio.h>
int main()
{
    int n,max2;
    printf("Enter the size");
    scanf("%d",&n);
    int a[n],max=0,ind=0,i;
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
    {
       if(max<a[i])
       {
        max=a[i];
        ind=i;
       }
    }
    max2=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max2 && a[i]<max)
        {
            max2=a[i];
            ind=i;
        }
    }
    printf("The max element is:%d\n",max);
    printf("The second max element is:%d\n",max2);
    printf("The index of max element:%d",ind);
    
    return 0;
}