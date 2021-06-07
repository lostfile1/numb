#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int inm;
  int numb;
  puts("from zero to what");
  scanf("%d", &inm);
  srand(time(NULL));
  numb = rand() % inm + 1;
  printf("> %d",numb);
  return 0;
        
}
