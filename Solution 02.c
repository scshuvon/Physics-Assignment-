#include<stdio.h>
#include<math.h>

int main()
{
    double td = 45.0;
    double tr = (td * 3.1416 / 180.0);
    double st = sin(tr);
    double ratio = 1.0 / st;

    printf("The ratio of slit width to wavelength for the first minimum at 45 degrees is %.4f\n", ratio);
    return 0;
}