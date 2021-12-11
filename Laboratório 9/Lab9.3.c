#include <stdio.h>
//3.1
struct pessoa {
  char nome[30];
  int idade;
  unsigned sexo : 1;// 1 bit
  unsigned est_civil : 2;// 2 bits
  //3.2 e 3.3
}exemplo;

int main() {
  int i, j;//3.4
  printf("Digite seu nome: ");scanf("%s", &exemplo.nome);
  printf("Digite sua idade: ");scanf("%d", &exemplo.idade);
  printf("Digite seu sexo(0:Mulher,1:Homem): ");scanf("%d", &i);exemplo.sexo = i;
  printf("Digite seu estado civil(0:Soleiro,1:Casado,2:Viuvo,3:Divorciado): ");scanf("%d", &j);exemplo.est_civil = j;
  return 0;
}
