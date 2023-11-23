#include<stdio.h>
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    printf("Enter the co-ordinates of first");
    scanf("%d%d",&x1,&y1);

    printf("Enter the co-ordinates of second");
    scanf("%d%d",&x2,&y2);

    double d=sqrt(pow(x2-x1,2)+(pow(y2-y1,2)));
    printf("Enter the two points in a plane is: %.1d",d);

    return 0;
}