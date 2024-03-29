#include <stdio.h>
#include <CUnit/Basic.h>  // Include the CUnit headers

#include "../src/sum.c"

/* setups test suite */
int init_suite(void) {
    return 0;
}

/* cleans up after test suite */
int clean_suite(void) {
    return 0;
}

void test_sum() {
    CU_ASSERT_EQUAL(sum(2, 14), 16);
    CU_ASSERT_EQUAL(sum(0, 0), 0);
    CU_ASSERT_EQUAL(sum(-1 ,6), 5);
}

int add_suites_and_tests() {
    CU_pSuite pSuite = NULL;

    /* add a suite to the registry */
    pSuite = CU_add_suite("MyCode Tests", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
   }

   /* add the tests to the suite */
    if (NULL == CU_add_test(pSuite, "test_sum", test_sum))
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    return CU_get_error();
}

int main() {
    /* initialize the CUnit test registry */
    if (CU_initialize_registry() != CUE_SUCCESS) {
        fprintf(stderr, "Initialization of Test Registry failed.");
        return CU_get_error();
    }

    add_suites_and_tests();

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();

    /* clean up the test registry */
    CU_cleanup_registry();

    return CU_get_error();
}
