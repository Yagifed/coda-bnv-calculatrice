#include <stdlib.h>
#include <stdio.h>
#include "operations.h"

double add(int a, int b)
{
    return a + b;
}

double sub(int a, int b)
{
    return a - b;
}

double mul(int a, int b)
{
    return a * b;
}

double divi(double a, double b)
{
    return a / b;
}

double mod(int a, int b)
{
    return a % b;
}

void print_str(char *str)
{
    printf("%s", str);
}
