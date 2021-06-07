#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int numb;
  int car;
  car = atoi(argv[1]);
  srand(time(NULL));
  numb = rand() % car + 1;
  printf("> %d",numb);
  return 0;
        
}
