#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of element");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int j;
    for(i=0;i<n-1;i++)
    {   
        int k=0;
        for(j=k+1;j<n-i;j++)
        {
            if(a[k]>a[j])
            {
                int t=a[j];
                a[j]=a[k];
                a[k]=t;
            }
            k++;
        }
    }
    printf("The sorted array");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);

    return 0;
}

// bubblesort
// 5 2 3 4
// 2 5 3 4
// 2 3 5 4
// 2 3 4 5