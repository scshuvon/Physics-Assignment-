#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
    {
    double lnm, td, dum, lm, dm, tr, mr;
    int mi;

    printf("Enter wavelength (nm): ");
    scanf("%lf", &lnm);

    if (lnm < 380 || lnm > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }

    printf("Enter angle (degrees): ");
    scanf("%lf", &td);
    printf("Enter slit separation (micrometers): ");
    scanf("%lf", &dum);

    lm = lnm * 1e-9;
    dm = dum * 1e-6;
    tr = td * (3.1416 / 180.0);

    mr = (dm * sin(tr)) / lm;
    mi = (int)round(mr);


    int abs_m = abs(mi);
    if (abs_m == 1) {
        printf("%dst order maxima\n", mi);
    } else if (abs_m == 2) {
        printf("%dnd order maxima\n", mi);
    } else if (abs_m == 3) {
        printf("%drd order maxima\n", mi);
    } else {
        printf("%dth order maxima\n", mi);
    }

    return 0;
}
