#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {
  double x = atof(argv[1]);
  double y = atof(argv[2]);
  double distance = sqrt(x*x + y*y);

  printf("La distancia entre (0,0) y (%.2f,%.2f) es %.2f\n", x, y, distance) ;
  return 0;
}
