#include <stdio.h>

#define my_sizeof(x)  (void*)(&x+1) - (void*)&x

#define my_sizeof_t(TYPE)  (int) ((TYPE*) 0  + 1)

int main()
{
    int i;
    printf("%d\n", my_sizeof(i));
    printf("%d\n", my_sizeof_t(long long));
    return 0;
}
