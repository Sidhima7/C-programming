/*//Write a C program to store 10 students roll nos and 
//print all the students roll numbers and also 
//print 6th and 8th students roll numbers separately

#include<stdio.h>
int main()
{
    int i,a[10]={2,4,6,8,10,12,14,16,18,20};
    for(i=0;i<=10;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("6th student roll no is %d\n",a[5]);
    printf("8th student roll no is %d",a[7]);

    return 0;
}
*/

#include<stdio.h>
int main()
{
    int class[10]={12,13,14,15,16,17,18,19,10,20};
    printf("Size of int: %d bytes",sizeof (int));
    for(int i=0;i<10;i++)
    {
        printf("\nclass[i]=%d address=%u\n",class[i],&class[i]);
    }
    printf("\n6th student roll is %d",class[5]);
    printf("\n6th student roll is %d",class[7]);

    return 0;
}
