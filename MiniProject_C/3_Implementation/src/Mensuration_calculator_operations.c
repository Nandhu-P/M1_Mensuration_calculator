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

