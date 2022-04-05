#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(int argc, char *argv[]) {

double t = atof(argv[1]);
double p = atof(argv[2]);
double r = atof(argv[3]);
double e = exp(r*t);
double total = p*e;

printf("El total acumulado tras %0.f años con una inversion de %.2f y un interes de %.2f  anual, seria $%.2f\n", t, p, r, total);

  return 0;
}
