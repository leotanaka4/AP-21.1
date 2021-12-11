#include <stdio.h>

enum dias {segunda=2, terca, quarta, quinta, sexta, sabado, domingo=1};

int main() {
  int a, b;
  a = segunda;
  b = terca;
  a++;
  if (a==terca) {printf("Estamos na terca");}
  return 0;
}
