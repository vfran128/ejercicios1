#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int choice = atoi(argv[1]);
  int answer = rand() % 100;
  printf("%s\n", choice = answer ? "ganaste" : "perdiste" );
  return 0;
}
