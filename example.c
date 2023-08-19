#include <stdio.h>

#define MM_CTEST_MAIN // define this in your main tester file
#include "mm_ctest.h"


int foo = 7;
int bar = 4;

static char *test_foo()
{
    MM_ASSERT("error, foo != 7", foo == 7);
    return 0;
}

static char *test_bar()
{
    MM_ASSERT("error, bar != 5", bar == 5);
    return 0;
}

static char *all_tests()
{
    MM_RUN_TEST(test_foo);
    MM_RUN_TEST(test_bar);
    return 0;
}

int main()
{
    char *result = all_tests();
    
    if (result != 0)
    {
        printf("%s\n", result);
    }
    else
    {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}