//WAP to store the information of students marks 
//using structures and find total marks of of individual student

#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
    int sub1;
    int sub2;
    int sub3;
};
int total_marks(struct student s)
{
    return s.sub1+s.sub2+s.sub3;
}
int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the detials of students %d:\n",i+1);
        printf("name: ");
        scanf("%s",&s[i].name);
        printf("Roll Number:");
        scanf("%d",&s[i].rollno);
        printf("Marks of Subject1:");
        scanf("%d",&s[i].sub1);
        printf("Marks of Subject2:");
        scanf("%d",&s[i].sub2);
        printf("Marks of Subject3:");
        scanf("%d",&s[i].sub3);
    }
    for(int i=0;i<3;i++)
    {
        printf("Total marks of %s (Roll: %d) is %d\n",s[i].name,s[i].rollno,total_marks(s[i]));
    }
    return 0;
}