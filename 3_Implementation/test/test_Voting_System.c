#include "unity.h"
#include "VotingSystem.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_login(void)
{

  TEST_ASSERT_EQUAL(1,login());

}

void test_wlogin(void)
{

  TEST_ASSERT_EQUAL(0,login());

}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_login);
  RUN_TEST(test_wlogin);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

