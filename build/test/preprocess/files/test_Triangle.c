#include "build/temp/_test_Triangle.c"
#include "Triangle.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}





void test_getTriangleName_Checkwith_2_2_5(void)

{

  UnityAssertEqualString((const char*)(("Isosceles")), (const char*)((getTriangleName(2,2,5))), (

 ((void *)0)

 ), (UNITY_UINT)(16));

}



void test_getTriangleName_CheckifTriangle(void)

{

  UnityAssertEqualString((const char*)(("It's not a triangle")), (const char*)((getTriangleName(0,2,3))), (

 ((void *)0)

 ), (UNITY_UINT)(21));

}





void test_getTriangleName_Checkwith_16_16_16_expect_Equilateral(void)

{

  UnityAssertEqualString((const char*)(("Equilateral")), (const char*)((getTriangleName(16,16,16))), (

 ((void *)0)

 ), (UNITY_UINT)(27));

}



void test_getTriangleName_Checkwith_minus1_minus1_minus1_expect_Equilateral(void)

{

  UnityAssertEqualString((const char*)(("Equilateral")), (const char*)((getTriangleName(-1,-1,-1))), (

 ((void *)0)

 ), (UNITY_UINT)(32));

}
