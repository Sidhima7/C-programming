//matrix addition

#include<stdio.h>
int main()
{
    int n,m,sum,A,B;
    printf("Enter the limits");
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m],c[n][m],i,j;
    printf("Array Elements A");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Array Element B");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    }
    
    printf("The result matrix is...\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",c[i][j]);
        printf("\n");  
    }
    return 0;
}