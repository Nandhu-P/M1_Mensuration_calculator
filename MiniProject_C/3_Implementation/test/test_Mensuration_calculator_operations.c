#include "unity.h"
#include <Mensuration_calculator_operations.h>

/* Modify these two lines according to the project */
#include <Mensuration_calculator_operations.h>
#define PROJECT_NAME    "Mensuration_calculator"

/* Prototypes for all the test functions */
void test_square(void);
void test_a_rectangle(void);
void test_p_rectangle(void);
void test_a_circle(void);
void test_c_circle(void);
void test_v_sphere(void);
void test_sa_sphere(void);
void test_triangle(void);
void test_e_triangle(void);
void test_rhombus(void);
void test_frustum_of_cone(void);
void test_hallow_cylinder(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_square);
  RUN_TEST(test_a_rectangle);
  RUN_TEST(test_p_rectangle);
  RUN_TEST(test_a_circle);
  RUN_TEST(test_c_circle);
  RUN_TEST(test_v_sphere);
  RUN_TEST(test_sa_sphere);
  RUN_TEST(test_triangle);
  RUN_TEST(test_e_triangle);
  RUN_TEST(test_rhombus);
  RUN_TEST(test_frustum_of_cone);
  RUN_TEST(test_hallow_cylinder);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_square(void) {
  TEST_ASSERT_EQUAL(25.000000, square(5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(144.000000, square(12));
}

void test_a_rectangle(void) {
  TEST_ASSERT_EQUAL(35.000000, a_rectangle(7, 5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(525.000000, a_rectangle(35, 15));
}

void test_p_rectangle(void) {
  TEST_ASSERT_EQUAL(28.000000, p_rectangle(6, 8));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10.000000, p_rectangle(2, 3));
}

void test_a_circle(void) {
  TEST_ASSERT_EQUAL(132.664993, a_circle(6.5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(19.625000, a_circle(2.5));
}

void test_c_circle(void) {
  TEST_ASSERT_EQUAL(21.980000, c_circle(3.5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(37.680000, c_circle(6));
}

void test_v_sphere(void) {
  TEST_ASSERT_EQUAL(305.635010, v_sphere(4.6));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(84.779999, v_sphere(3));
}

void test_sa_sphere(void) {
  TEST_ASSERT_EQUAL(18.086401, sa_sphere(2.4));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10.173599, sa_sphere(1.8));
}

void test_triangle(void) {
  TEST_ASSERT_EQUAL(7.500000, triangle(3,5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(16 .000000, triangle(4,8));
}

void test_e_triangle(void) {
  TEST_ASSERT_EQUAL(15.588457, e_triangle(6));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(6.928203, e_triangle(4));
}

void test_rhombus(void) {
  TEST_ASSERT_EQUAL(10.500000, rhombus(3,7));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4.000000, rhombus(4,2));
}

void test_frustum_of_cone(void) {
  TEST_ASSERT_EQUAL(78.313934, frustum_of_cone(5,3.2,1.8));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(115.394997, frustum_of_cone(7,3,1.5));
}

void test_hallow_cylinder(void) {
  TEST_ASSERT_EQUAL(602.955261, hallow_cylinder(7,4.2,3.6));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(328.946381, hallow_cylinder(5,2.8,1));
}
