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
