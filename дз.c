#include <stdio.h>
#include <math.h>

int main() 
{
    double x = 17.421;
    double y = 10.365e-3;
    double z = 0.828e5;
    double f;

    f = pow(y + cbrt(x - 1), 0.25) / (fabs(x - y) * (pow(sin(z), 2) + tan(z)));

    printf("При x=%.3f, y=%.6e, z=%.3e\n", x, y, z);
    printf("f = %.5f\n", f);

    return 0;
}