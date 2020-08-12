#include "unity.h"
#include "prime.h"
/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

void test_prime(void)
{
    TEST_ASSERT_EQUAL(1, prime(2));
    TEST_ASSERT_EQUAL(1, prime(3));
    TEST_ASSERT_EQUAL(1, prime(5));
    TEST_ASSERT_EQUAL(1, prime(7));
    TEST_ASSERT_EQUAL(1, prime(11));
    TEST_ASSERT_EQUAL(1, prime(13));
}
void test_notprime(void)
{
    TEST_ASSERT_EQUAL(0, prime(4));
    TEST_ASSERT_EQUAL(0, prime(6));
    TEST_ASSERT_EQUAL(0, prime(8));
    TEST_ASSERT_EQUAL(0, prime(9));
    TEST_ASSERT_EQUAL(0, prime(10));
    TEST_ASSERT_EQUAL(0, prime(12));
}
int test_main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_prime);
    RUN_TEST(test_notprime);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
