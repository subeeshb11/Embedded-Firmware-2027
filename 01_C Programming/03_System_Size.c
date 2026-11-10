#include <stdio.h>

int main(void)
{
    printf("int = %zu bytes\n", sizeof(int));

    printf("char = %zu bytes\n", sizeof(char));

    printf("float = %zu bytes\n", sizeof(float));

    printf("double = %zu bytes\n", sizeof(double));

    printf("long = %zu bytes\n", sizeof(long));

    return 0;
}