#include <stdio.h>
#include <assert.h>

#define STR_OK          "[\x1b[1;32m OK \x1b[0m]"
#define STR_FAIL        "[\x1b[1;31mFAIL\x1b[0m]"


#define ptest() \
    printf("\nStarting test %s():%d\n", __func__, __LINE__)


#define pvassert(c,r) \
    do { \
        int i = (c); \
        if (i == r) {\
            printf(" " STR_OK "  %s %s():%d  %s retvl = %d\n", __FILE__, __func__, __LINE__, #c,i); }\
        else {\
            printf(" " STR_FAIL "  %s %s():%d  %s retvl = %d\n", __FILE__, __func__, __LINE__, #c,i); \
            assert(0);} \
    } while(0)

