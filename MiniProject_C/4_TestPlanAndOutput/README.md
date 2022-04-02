# Test Plan
## Table no 1: High level test plan
Test ID | Description | Expected I/P | Expected O/P | Actual Output | Type of test  
--------|-------------|---------|---------|---------------|---------------
H_01  | Area of square| 10,20 | 30.000000 | 30.000000 | Requirement based
H_02  |Area of rectangle | 0,3 | -3.000000 | -3.000000 | Requirement based
H_03  | Perimeter of Rectangle| 2,5 | 10.000000  | 10.000000  | Requirement based
H_04  | Area of circle | 4,2  | 2.000000  | 2.000000  | Requirement based
H_05  |circumference of circle | 17,2  | 1.000000 | 1.000000 | Requirement based
H_06  | volume of sphere| 5  | 120.000000  | 120.000000  | Requirement based
H_07  | surface area of sphere | 4 | 16.000000 | 16.000000 | Requirement based
H_08  |area of triangle  | 2 | 8.000000 | 8.000000 | Requirement based
H_09  | area of equilateral triangle| 4 | 2.000000  | 2.000000  | Requirement based
H_10  | Area of Rhombus | 8  | 2.000000  | 2.000000 | Requirement based
H_11  |Frustum of cone | 2  | 0.500000 | 0.500000  | Requirement based
H_12  | volume of hallow cylinder| 2  | 0.693147  | 0.693147  | Requirement based

## Table no 2: Low level test plan

| Test ID | HLT ID |Description                                              | Expected I/P | Expected O/P | Actual Output |Type Of Test  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_06, H_07, H_08,H_09,H_10,H_11,H_12,H_13,H_14|Tested on functions which accept single value as input|  a, n |SUCCESS|SUCCESS |Technical |
|  L_02       | H_01, H_02, H_03,H_04,H_05,H_15|Tested on functions which accept two values as input|  a, b |SUCCESS|SUCCESS |Technical |
|  L_03       | H_16, H_17,H_18,H_19 |Tested on function which accept three value as input|  s,c,t  |SUCCESS|SUCCESS|Technical |
