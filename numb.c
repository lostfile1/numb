#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int gok;
  int numb;
  puts("from zero to what");
  scanf("%d",gok);
  srand(time(NULL);
  numb = rand() % gok + 1;
  printf("> %d",numb);
  return 0;
        
}
  
