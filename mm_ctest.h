#pragma once

#define MM_ASSERT(message, test)                                                                   \
    do                                                                                             \
    {                                                                                              \
        if (!(test))                                                                               \
            return message;                                                                        \
    } while (0)

#define MM_RUN_TEST(test)                                                                          \
    do                                                                                             \
    {                                                                                              \
        char *message = test();                                                                    \
        mm_num_tested++;                                                                           \
        if (message)                                                                               \
            return message;                                                                        \
    } while (0)

extern int tests_run;

#ifdef MM_CTEST_MAIN
int mm_num_tested = 0;
#endif // MM_TEST_MAIN
