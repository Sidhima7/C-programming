#include<stdio.h>
int main()
{
    int years,choice;
    printf("enter your choice: ");
    printf("\n1. Seconds\n");
    printf("2. Minutes\n");
    printf("3. Hours\n");
    printf("4. Days\n");
    printf("5. Months\n");
    scanf("%d",&years);
    switch(years)
    printf("enter your choice: ");
    scanf("%d",&choice);
    long months=years*12;
    long days=months*30;
    long hours=days*24;
    long minutes=hours*60;
    long seconds=minutes*60;
    switch(choice)
    {
        case 1:
        printf("%d years in seconds is:%d",years,seconds);
        break;
        case 2:
        printf("%d years in minutes is:%d",years,minutes);
        break;
        case 3:
        printf("%d years in hours is:%d",years,hours);
        break;
        case 4:
        printf("%d years in days is:%d",years,days);
        break;
        case 5:
        printf("%d years in months is:%d",years,months);
        break;

        default:
        printf("Invalid choice");
    }
    return 0;
}