#include "unity.h"
#include "primenum.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_primenum(void)
{
  TEST_ASSERT_EQUAL(1, primenum(7));
  TEST_ASSERT_EQUAL(1, primenum(83));
}
void test_non_prime(void)
{
  TEST_ASSERT_EQUAL(0, primenum(88));
  TEST_ASSERT_EQUAL(0, primenum(10));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, primenum(-7));
  TEST_ASSERT_EQUAL(-1, primenum(-10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_primenum);
  RUN_TEST(test_non_prime);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

