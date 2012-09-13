#include <stdio.h>

#define OFFSET_OF(STRUCT, VAR)   (int) &(((STRUCT*) 0)->VAR)

typedef struct test
{
    int a;
    char b;
    int c;
}
    __attribute__ ((packed)) test;

int main()
{
    test t;
    printf("%d\n", OFFSET_OF(test, c));
    return 0;
}
