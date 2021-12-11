#include <stdio.h>
#define MULT(x,y) x*y

int main(){
  int a, b;
  float c, d;
  printf("Digite dois numeros inteiros e dois pontos flutuantes:\n");
  scanf("%d %d %f %f", &a, &b, &c, &d);
  printf("Multiplicacao:\n\nEntre dois inteiros: %d\nEntre dois pontos flutuantes: %.2f\n", MULT(a,b), MULT(c,d));
  printf("Entre um inteiro e um float (correto): %.2f\n Entre um inteiro e um float (incorreto): %d", MULT(a,c), MULT(b,d));
  //Erro se colocar tipo int na representação
  return 0;
}
