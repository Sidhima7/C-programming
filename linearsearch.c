//program to print linear search

#include<stdio.h>
void main()
{
    int arr[30],ele,i,found=0,num;
    printf("enter the size of an array\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter thr element arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("\n enter the element to search");
    scanf("%d",&ele);
    for(i=0;i<num;i++)
    {
        if(arr[i]==ele)
        {
            printf("element is found at the index%d=%d:\n",i,ele);
            found=1;
            break;
        }
    
        if(!found)
        printf("element is not found");}
}