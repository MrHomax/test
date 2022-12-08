#include <stdio.h>
#include "func.h"
#include <math.h>

int main()
{
    int unused_var=7, n=5;
    double arr[n+1];
    printf("Hello World\n");
    printf("var = %d\n", unused_var);
    say_hello();
    printf("3+5 = %d\n", sum(3,5));
    printf("sin(0)= %.1lf\n", sin(0));
    return n;

}