#include<stdio.h>
int main()
{
    int m1,n1,m2,n2;
    printf("Enter the A matrix limit");
    scanf("%d%d",&m1,&n1);
    printf("Enter the B matrix limit");
    scanf("%d%d",&m2,&n2);
    int a[m1][n2],b[m2][n2];
    if(n1!=m2)
    printf("Matrix multiplication not possible");
    else
    {
        int i,j,k;
        printf("Enter A matrix element\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            scanf("%d",&a[i][j]);
        }
        printf("Enter B matrix element");
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            scanf("%d",&b[i][j]);
        }
        int c[m1][n1];
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                c[i][j]=0;
                for(k=0;k<n1;k++)
                {
                    c[i][j]=c[i][j]+a[i][j]*b[i][j];
                }
            }
        }
    
            ("Reaultant matrix");
            for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            printf("%d\t",c[i][j]);
            printf("\n");
        }
    }
    
    return 0;
}
