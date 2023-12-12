//program to implement an arry of structure for 
//students marks for each students and pass it to function 
//for variou operator

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
void display(struct student s)
{
    printf("\n Student information");
    printf("\nName: %s",s.name);
    printf("\nRoll: %d",s.rollno);
    printf("\nsub1: %d",s.sub1);
    printf("\nsub2: %d",s.sub2);
    printf("\nsub3: %d",s.sub3);
    printf("\nTotal marks: %d",total_marks(s));
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
        display(s[i]);
    }
    return 0;
}