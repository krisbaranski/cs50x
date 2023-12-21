#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // integer is for small numbers
    // int x = get_int("x: ");
    // int y = get_int("y: ");

    // long used for bigger numbers
    long x = get_long("x: ");
    long y = get_long("y: ");

    // float used for after coma numbers
    // type cssting telling c to use float!!!
    // floating-point imprecision fixed through _double_
    // float z = (float)x / (float)y;

    // double used for more precise after coma outputs
    double z = (double)x / (double)y;
    printf("%.20f\n", z);
}
