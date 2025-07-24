#include<stdio.h>
#include<math.h>

int main()
{
    double lnm, td, dum;
    double lm, dm, tr, mr;
    int mi;

    printf("Enter wavelength (nm): ");
    scanf("%lf", &lnm);

    if (lnm < 380 || lnm > 750)
    {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }

    printf("Enter angle (degrees): ");
    scanf("%lf", &td);
    printf("Enter slit separation (micrometers): ");
    scanf("%lf", &dum);

    lm = lnm * 1e-9;
    dm = dum * 1e-6;
    tr = td * 3.1416 / 180.0;

    mr = (dm * sin(tr)) / lm;
    mi = (int)(mr + 0.5);

    if (mi == 1)
        printf("1st order maxima\n");
    else if (mi == 2)
        printf("2nd order maxima\n");
    else if (mi == 3)
        printf("3rd order maxima\n");
    else
        printf("%dth order maxima\n", mi);

    return 0;
}