#include "unity.h"
#include "Triangle.h"


void setUp(void)
{
}

void tearDown(void)
{
}


void test_getTriangleName_Checkwith_2_2_5_expect_Isosceles(void)
{
  TEST_ASSERT_EQUAL_STRING("Isosceles",getTriangleName(2,2,5));
}

void test_getTriangleName_Checkwith_5_5_5_expect_Equilateral(void)
{
  TEST_ASSERT_EQUAL_STRING("Equilateral",getTriangleName(5,5,5));
}

void test_getTriangleName_Checkwith_10_4_5_expect_Scalene(void)
{
  TEST_ASSERT_EQUAL_STRING("Scalene",getTriangleName(10,4,5));
}

void test_check_if_triangle_expect_not(void)
{
  TEST_ASSERT_EQUAL_STRING("It's not a triangle",checkIfTriangle(0,2,3));
}

void test_getTriangleName_Checkwith_16_16_16_expect_Equilateral(void)
{
  TEST_ASSERT_EQUAL_STRING("Equilateral",getTriangleName(16,16,16));
}

void test_getTriangleName_Checkwith_minus1_minus1_minus1_expect_Equilateral(void)
{
  TEST_ASSERT_EQUAL_STRING("It's not a triangle",getTriangleName_and_check_validity(-1,-1,-1));
}

/*void test_add_2_with_5_expect_7(void)
{
  int result = add(2, 5);

  printf("result = %d", result);          // %d = integer

  TEST_ASSERT_EQUAL(7,result);            //(X,Y), X=expected, Y= Actual check if equal
  }
 */
/*void test_add_9_with_minus20_minus_11(void)
{
  int result = add(-20, 9);

  //printf("result = %d", result);          // %d = integer

  TEST_ASSERT_EQUAL(-11,result);            //(X,Y), X=expected, Y= Actual check if equal
  }
*/
