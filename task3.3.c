#include <stdio.h>
#include <limits.h>
#include <float.h> 

int main () {
    printf("short int: from %d to %d, %zu\n", SHRT_MIN, SHRT_MAX, sizeof(short int));
    printf("int:  from %d to %d, %zu\n", INT_MIN, INT_MAX, sizeof(int));
    printf("long int: from %ld to %ld, %zu\n", LONG_MIN, LONG_MAX, sizeof(long int));
    printf("long long int: from %lld to %lld, %zu\n", LLONG_MIN, LLONG_MAX, sizeof(long long int));
    printf("float: from %f to %f, %zu\n", FLT_MIN, FLT_MAX, sizeof(float));
    printf("double: %f to %f,%zu\n", DBL_MIN, DBL_MAX, sizeof(double));
    printf("char: from %d to %d, %zu\n", CHAR_MIN, CHAR_MAX, sizeof(char));

    return 0;
}