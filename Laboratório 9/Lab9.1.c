#include <stdio.h>
struct varP {
  int num1;int num2;int num3;
};
//1.1
struct varS {
  char caractere;int inteiro;float ponto_flutuante;double real_duplo;
  struct varP;//1.3
}var;
//1.4
typedef struct testeT {
  int teste1;int teste2;int teste3;
}extype;
//1.5
struct varP funcao() {printf("Teste");};
int main() {
  struct varP *ptr;//1.7
  printf("Digite um caractere: ");scanf("%c", &var.caractere);//1.2 e 1.6
  printf("Digite um numero inteiro: ");scanf("%d", &ptr->num1);
  printf("Teste final: %d", ptr->num1);
  return 0;
}
