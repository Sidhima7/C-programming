#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter no of char");
    scanf("%d",&n);
    char *ptr=(char*)calloc(n,sizeof(char));
    if(ptr==NULL)
    printf("Memory Error");
    else
    {
        for(int i=0;i<n;i++)
       {
        scanf("%c",&(*(ptr+i)));
       }
    }
       printf("The String is \n");
       for(int i=0;i<n;i++)
       printf("%c",*(ptr+i));
       free(ptr);
       printf("\n");
       for(int i=0;i<n;i++)
       printf("%c",*(ptr+i));
}
