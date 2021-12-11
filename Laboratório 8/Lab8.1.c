#include <stdio.h>
int main() {
  int x = 100;//Parte 1
  printf("%x\n", &x);//Parte 2
  printf("%d", sizeof(x));//Parte 3
  float a = 1.0, b = 2.0, c = 3.0;//Parte 4
  printf("%x\t%x\t%x\n", &a, &b, &c);//Parte 4
  printf("%d\t%d\t%d\n", sizeof(a), sizeof(b), sizeof(c));
  char vet[5]={0,1,2,3,4};//Parte 4
  printf("%x\t%x\t%x\t%x\t%x\n", &vet[0], &vet[1], &vet[2], &vet[3], &vet[4]);//Parte 4
  printf("%d\t%d\t%d\t%d\t%d", sizeof(vet[0]), sizeof(vet[1]), sizeof(vet[2]), sizeof(vet[3]), sizeof(vet[4]));
  return 0;
}
