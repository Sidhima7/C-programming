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
    scanf("%d",&choice);
    switch (choice)
    {
       case 1:
       printf("enter the radius of the circle");
       scanf("%f",&radius);
       area=3.14*radius*radius;
       perimeter=2*3.14*radius;
       printf("area of circle: %.2f",3.14*radius*radius); 
       printf("\nperimeter of circle: %.2f",2*3.14*radius);    
       break;

       case 2:
       printf("enter the side of square");
       scanf("%f",&side);
       area=side*side;
       perimeter=4*side;
       printf("area of square: %.2f",side*side);
       printf("\nperimeter of square: %.2f",4*side);
       break;
    
       case 3:
       printf("enter the length and width of rectangle");
       scanf("%f",&length);
       scanf("%f",&width);
       area=length*width;
       perimeter=2*(length+width);
       printf("area of rectangle: %.2f",length*width);
       printf("\nperimeter of rectangle: %.2f",2*(length*width));
       break;

       default:
       printf("Area: %.2f",area);
       printf("\nPerimater: %.2f",perimeter);
       break;
    
    }
return 0;
}
