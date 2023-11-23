#include<stdio.h>
int main()

{
    //Circle
    float c;//c=radius of circle
    printf("Enter the radius of a circle: ");
    scanf("%f",&c);
    printf("Area of circle is: %.2f\n",3.14*c*c);
    printf("Perimeter of circle is: %.2f\n",2*3.14*c);

    //Square
     float s;//s=sideof a square
    printf("Enter the side of a square: ");
    scanf("%f",&s);
    printf("Area of square is: %.2f\n",s*s);
    printf("Perimeter of square is: %.2f\n",4*s);

    //Rectangle
    float l,w;//l=length of rectangle and w=width of rectangle
    printf("Enter the length and width of rectangle: ");
    scanf("%f%f",&l,&w);
    printf("Area of rectangle is: %.2f\n",l*w);
    printf("Perimeter of rectangle is: %.2f\n",2*(l+w));
    
    return 0;
}