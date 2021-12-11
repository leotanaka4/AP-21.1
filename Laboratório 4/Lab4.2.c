#include <stdio.h>
int main()
{
int n, i, j, num, chave; printf("Tamanho do vetor: "); scanf("%d", &n); int vetor1[n], vetor2[n], vetorf[n*2];
if (n<=100)
{
for (i=0;i<=n-1;i++) {
  printf("Escreva um numero para vetor1: ");scanf("%d", &num);vetor1[i] = num;
}
for (i=0;i<=n-1;i++) {
  printf("Escreva um numero para vetor2: ");scanf("%d", &num);vetor2[i] = num;
}
for (j=1;j<n;j++) {
  chave=vetor1[j];
  i=j-1;
  while (i>-1&&vetor1[i]>chave)
  {
    vetor1[i+1]=vetor1[i];
    i=i-1;
    vetor1[i+1]=chave;
  }
}
for (j=1;j<n;j++) {
  chave=vetor2[j];
  i=j-1;
  while (i>-1&&vetor2[i]>chave)
  {
    vetor1[i+1]=vetor2[i];
    i=i-1;
    vetor2[i+1]=chave;
  }
}
for (i=0;i<=n-1;i++) {
  vetorf[i]=vetor1[i];
  vetorf[n+i]=vetor2[i];
}
for (j=1;j<2*n;j++) {
  chave=vetorf[j];
  i=j-1;
  while (i>-1&&vetorf[i]>chave)
  {
    vetorf[i+1]=vetorf[i];
    i=i-1;
    vetorf[i+1]=chave;
  }
}
for (i=0;i<=2*n-1;i++)
{
    printf("%d\t", vetorf[i]);
}
}
return 0;
}
