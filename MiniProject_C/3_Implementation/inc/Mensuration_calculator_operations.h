/**
 * @file Mensuration_calculator_operations.h
 * @author Nandhu.P ()
 * @brief Mensuration Calculator application with 12 mathematical operations
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __MENSURATION_CALCULATOR_OPERATIONS_H__
#define __MENSURATION_CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
*  square area calculated by a and returns the result
* @param[in] a 
* @return Result of r
*/
void square(float a);

/**
*  rectangle area calculated by a, b and returns the result
* @param[in] a
* @param[in] b 
* @return Result of r
*/
void a_rectangle(float a, float b);

/**
*  perimeter of rectangle calculted by a, b and returns the result
* @param[in] a 
* @param[in] b
* @return Result of r
*/
void p_rectangle(float a, float b);

/**
* area of circle calculated  by a and returns the result 
* @param[in] a 
* @return Result of r
*/
void a_circle(float a);

/**
* circumference of circle by a and returns the result 
* @param[in] a
* @return Result of r
*/
void c_circle(float a);

/**
*  volume of sphere calculated by a and returns the result
* @param[in] a
* @return Result of r
*/
void v_sphere(float a);

/**
*  surfacearea  of sphere calculated by a and returns the result
* @param[in] a 
* @return Result of r
*/
void sa_sphere(float a);

/**
*  area of triangle calculated by  a,b and returns the result
* @param[in] a 
* @param[in] b
* @return Result of r
*/
void triangle(float a,float b);

/**
*  area of equilateral triangle calculated by a  and returns the result
* @param[in] a 
* @return Result of r
*/
void e_triangle(float a);

/**
*  area of rhombus calculated by a,b and returns the result
* @param[in] a
* @param[in] b
* @return Result of r
*/
void rhombus(float a,float b);

/**
* frustum of cone calculated by of  a,b,c and returns the result
* @param[in] a 
* @param[in] b
* @param[in] c
* @return Result of r
*/
void frustum_of_cone(float a,float b,float c);

/**
* volume of hallowcylinder calculated by a,b,c and returns the result
* @param[in] a 
* @param[in] b
* @param[in] c
* @return Result of r
*/
void hallow_cylinder(float a,float b,float c);

#endif  /* #define __MENSURATION_CALCULATOR_OPERATIONS_H__ */
