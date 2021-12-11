#include <stdio.h>
//5.1 e 5.2
union flasco {
  float flamengo;
  int vasco;
  char botafogo;
}times;

int main() {
  times.flamengo = 7.0;
  times.vasco = 4;
  times.botafogo = 2;
  printf("Titulos brasileros do Flamengo: %f\n", times.flamengo);
  printf("Titulos brasileros do Vasco: %f\n", times.vasco);
  printf("Titulos brasileros do Botafogo: %f", times.botafogo);
  return 0;
}
