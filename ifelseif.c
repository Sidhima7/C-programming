#include<stdio.h>
int main()
{
    int choice;
    float radius,side,length,width;
    float area,perimeter;
    printf("Select your choice from the following");
    printf("\n1.Circle");
    printf("\n2.Square");
    printf("\n3.Rectangle");
    printf("\nEnter the choice: ");
    scanf("%f",&choice);

    if (choice=1)
    {
       printf("enter the radius of the circle");
       scanf("%f",&radius);
       area=3.14*radius*radius;
       perimeter=2*3.14*radius;
    }
    else if (choice=2)
    {
        printf("enter the side of square");
        scanf("%f",&side);
        area=side*side;
        perimeter=4*side;
    }
    else if (choice=3)
    {
        printf("enter the length and width of rectangle");
        scanf("%f",&length);
        scanf("%f",&width);
        area=length*width;
        perimeter=2*(length+width);
    }
    else
    {
        printf("Invalid choice");
    }
    printf("Area: %.2f",area);
    printf("\nPerimater: %.2f",perimeter);
    
     return 0;
}