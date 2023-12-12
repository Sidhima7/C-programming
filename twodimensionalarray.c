//find the large element in two dimensional

#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the limits");
    scanf("%d%d",&n,&m);
    int a[n][m],i,j;
    printf("Array Elements");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    int max=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(max<a[i][j]);
            max=a[i][j];
        }
    }
    printf("The greatest element is %d\n",max);
    printf("The matrix is...\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    return 0;
}