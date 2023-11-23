#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size");
    scanf("%d",&n);
    int a[n],min=0,ind=0,i;
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            ind=i;
        }
    }
    printf("The min element is:%d\n",min);
    printf("The index of min element:%d",ind);

    return 0;
}