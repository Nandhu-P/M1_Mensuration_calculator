## Introduction :
* Mathematical operations play a major role in our daily lives. In our daily life, we will be involving with different types of calculations. All things around us is filled with different types of shapes and dimensions .so we need to calculate the dimensions of the things for the daily required activities such as area, perimeter, surface area of different objects
## Objective :
* The main objective of this project is to solve basic and advanced mathematical problems. The operations to be performed are area of square ,area of rectangle, Perimeter of rectangle, frustum of cone, volume of hallow cylinder, area of rhombus area of triangle  area of equilateral triangle, and volume of sphere etc.
## Features :
*  Area of square: The  square() function takes one operands as input and it results in a*a.
*  Area of Rectangle: The  a_rectangle() function takes two operands as input and it results in a*b.
*  Perimeter of Rectangle: The perimeter of rectangle P_rectangle() function takes two operands as input and it results in 2*(a+b).
*  Area of circle: The Area of circle a_circle() function takes one operand as input and it results in 3.14*a*a
*  Circumference of circle: The circumference of circle c_circle() function takes one operands as input and it results in 2*3.14*a.
*  Volume of sphere: The volume of sphere v_sphere() function takes one operand as input and it results in (4/3)*3.14*a*a*a.
*  Surface area of sphere: The surface area of sphere sa__sphere() function takes one operand as input and it results in (4/3)*3.14*a*a
*  Area of triangle: The Area of triangle triangle() function takes two operand as input and it results in 0.5*a*b
*  Area of equilateral triangle: The Area of  equilateral triangle e_triangle() function takes one operand as input and it results in sqrt(3/4)*a*a
*  Area of Rhombus: The Area of Rhombus rhombus() function takes two operand as input and it results in 0.5*a*b.
*  frustum of cone: The frustum of cone frustum_of_cone() function takes three operand as input and it results in (((3.14*a)/3)*(((b*b*b)-(c*c*c))/c))
* Volume of hallow cylinder : The Volume of Hallow  cylinder hallow_cylinder() function takes three operand as input and results in (3.14*a*((b*b*b)-(c*c*c))).
## 4W’s and 1’H:
## Who:
* This project is used by everyone in day-to-day life. All students and employee will use this project to find solutions for difficult problems. Software engineers, manufacturing industry researchers, mathematician etc will use this project to make calculations easy.
## What:
* Difficult problems can be solved easily using this project that contains functions such as are area of square ,area of rectangle, Perimeter of rectangle, frustum of cone, volume of hallow cylinder, area of rhombus area of triangle  area of equilateral triangle, and volume of sphere etc .are implemented using C language. User can use the program and get the required solutions.
## When:
* This project can be used whenever difficult calculations are required to perform and also the results will be obtained quickly. Researchers can use this project to get quick calculation output. For doing calculations with large numbers, this project is more helpful.
## Where:
* This project can be used in all the domains. Students, employee, researchers etc all over the world.
## How:
* This project is implemented in C language. This program can be executed in system which has Linux or Windows operating system.
## SWOT ANALYSIS:
## STRENGTH:
* Able to solve difficult problems.
## WEAKNESS:
* Limited number of operations are defined.
## OPPORTUNITIES:
* Solve problems contain large numbers.
## THREATS:
* Security issues.
# Design
* Structural diagram
* Behavioural diagram
 ![structural diagram](https://user-images.githubusercontent.com/102171569/161420674-b2d57065-3111-401d-bac8-6a982a3a6748.JPG)
 ![Behavioural diagram](https://user-images.githubusercontent.com/102171569/161420681-cf4f1137-b6f0-4d7e-9d14-596df54a9cb0.JPG)
## Implementation
## Folder Structure
Folder        | description
--------------| ----------------------------------------------
`inc`         | All header files
`src`         | Main source code for Calculator operations
`test`        | All source code and data for testing purposes
`unity`       | Unity files
# Test Plan
## Table no 1: High level test plan
Test ID | Description | Expected I/P | Expected O/P | Actual Output | Type of test  
--------|-------------|---------|---------|---------------|---------------
H_01  | Area of square| 5| 25.000000 | 25.000000 | Requirement based
H_02  |Area of rectangle | 7,5 | 35.000000 | 35.000000 | Requirement based
H_03  | Perimeter of Rectangle| 12,4 | 32.000000  | 32.000000  | Requirement based
H_04  | Area of circle | 3.5 | 38.465000  | 38.465000  | Requirement based
H_05  |circumference of circle | 2.6  | 16.327999 | 16.32799 | Requirement based
H_06  | volume of sphere| 4| 200.960007  | 200.960007  | Requirement based
H_07  | surface area of sphere | 6.8 | 145.193604 | 145.193604 | Requirement based
H_08  |area of triangle  | 5,9| 22.500000 | 22.500000 | Requirement based
H_09  | area of equilateral triangle| 7| 21.217621  | 21.217621  | Requirement based
H_10  | Area of Rhombus | 5,7  | 17.500000  | 17.500000 | Requirement based
H_11  |Frustum of cone | 7,3.5,1.2 | 251.225281 | 251.225281  | Requirement based
H_12  | volume of hallow cylinder| 5,3,1.8 | 332.337616  | 332.337616  | Requirement based

## Table no 2: Low level test plan

| Test ID | HLT ID |Description                                              | Expected I/P | Expected O/P | Actual Output |Type Of Test  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01, H_04, H_05,H_06,H_07,H_09|Tested on functions which accept single value as input|  a |SUCCESS|SUCCESS |Technical |
|  L_02       | H_02, H_03, H_08,H_10,|Tested on functions which accept two values as input|  a, b |SUCCESS|SUCCESS |Technical |
|  L_03       | H_12 H_13 |Tested on function which accept three value as input|  a,b,c,  |SUCCESS|SUCCESS|Technical |
