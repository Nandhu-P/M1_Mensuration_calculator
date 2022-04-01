#include<Mensuration_calculator_operations.h>
void square()
{
    printf("Enter the side of the square: ");
    float a,r;
    scanf("%f", &a);
    r=a*a;
    printf("The area of square  is %f\n",r);
}
void a_rectangle()
{
    printf("Enter the length and breadth of the rectangle: ");
    float a, b, r;
    scanf("%f%f", &a, &b);
    r=a*b;
    printf("The difference between %f and %f is %f\n", a, b, r);
}
void p_rectangle()
{
    printf("Enter the length and breadth of the rectangle: ");
    float a, b, r;
    scanf("%f%f", &a, &b);
    r=2*(a+b);
    printf("The perimeter of rectangle is %f\n", r);
}
void a_circle()
{
    printf("Enter the radius of the circle: ");
	float r,a;
    scanf("%f", &a);
    r=3.14*a*a;
    printf("The area of circle  is %f\n", r);
}
void c_circle()
{
    printf("Enter the radius of the circle: ");
    float a,r;
    scanf("%f", &a);
    r=2*3.14*a;
    printf("The circumference of circle is %f\n", r);
}
void v_sphere()
{
    float r,a;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &a);
    r=(4/3)*3.14*a*a*a;
    printf("The volume of the sphere  is %f", r);
}
void sa_sphere()
{
    float a,r;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &a);
    r = (4/3)*3.14*a*a;
    printf("The surface area of the sphere is  %f", r);
}
void triangle()
{
    float a,b,r;
    printf("Enter the base and height value of the triangle : ");
    scanf("%f%f", &a,&b);
    r = 0.5*a*b;
    printf("The area of triangle is %f", r);
}
void e_triangle()
{
    float a,r,sq;
    printf("Enter the side of triangle: ");
    scanf("%f", &a);
    sq = sqrt(3)/4;
    r= sq*a*a;
    printf("The area of equilateral triangles %f", r);
}
void rhombus()
{
    float a,r,b;
    printf("Enter the diagonals of the rhombus : ");
    scanf("%f%f", &a,&b);
    r= 0.5*a*b;
    printf("The area of rhombus is %f", r);
}
void frustum_of_cone()
{
    float a,b,c,r;
    printf("Enter the height ,outer radius and inner radius of the cone : ");
    scanf("%f%f%f",&a,&b,&c);
    r=(((3.14*a)/3)*(((b*b*b)-(c*c*c))/c));
    printf("Volume of frustum of cone is %f",r);
}
void hallow_cylinder()
{
    float a,b,c,r;
    printf("Enter the height ,outer and inner radius of hallow cylinder :");
    scanf("%f%f%f",&a,&b,&c);
    r=(3.14*a*((b*b*b)-(c*c*c)));
    printf("volume of hallow cylinder is %f",r);
}
int main()
{
    printf("\t\t *****START DOING CALCULATION***** \n\n");
    int choice;
    printf("Enter 0 to quit the program \n");
    printf("Enter 1 for area of square \n");
    printf("Enter 2 for arae of rectangle \n");
    printf("Enter 3 for perimeter of rectangle \n");
    printf("Enter 4 for area of circle \n");
    printf("Enter 5 for circumference of circle\n");
    printf("Enter 6 for volume of sphere \n");
    printf("Enter 7 for surface area of sphere \n");
    printf("Enter 8 for area of triangle \n");
    printf("Enter 9 for equilateral triangle\n");
    printf("Enter 10 for area of rhombus\n");
    printf("Enter 11 for frustum of cone\n");
    printf("Enter 12 for volume of hallow cylinder\n");
  
    while (1)
    {
        printf("\n\nEnter the operation you want to do: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            square();
            break;
        case 2:
            a_rectangle();
            break;
        case 3:
            p_rectangle();
            break;
        case 4:
            a_circle();
            break;
        case 5:
            c_circle();
            break;
        case 6:
            v_sphere();
            break;
        case 7:
            sa_sphere();
            break;
        case 8:
            triangle();
            break;
        case 9:
            e_triangle();
            break;
        case 10:
            rhombus();
            break;
        case 11:
            frustum_of_cone();
            break;
        case 12:
            hallow_cylinder();
            break;
        case 0:
            exit(0);
        default:
            printf("\nInvalid operation\n");
        }
    }
    return 0;
}
