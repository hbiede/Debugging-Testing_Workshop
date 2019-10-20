#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double divideBy4(double n);
int main(int argc, char** argv) {
        const double epsilon = 0.001;

        if (argc < 2) {
                fprintf(stderr, "Include a number to take the square root of\n");
                exit(1);
        }

        double x = atof(argv[1]);

        int power = 0;
        while (x < 0.5) {
                x = x * 4;
                power--;
        }
        while (x >= 2.0) {
                x = divideBy4(x);
                power++;
        }

        double a = x, aPrev, c = x - 1;
        do {
                aPrev = a;
                a -= a * c / 2;
                c *= c * (c - 3) / 4;
        } while (fabs(aPrev - a) > epsilon);
        printf("sqrt(%f) ~= %f", x * pow(4, power), a * pow(2, power));
}

double divideBy4(double n) {
        double returnValue = 10 / 4.0;
        return returnValue;
}
