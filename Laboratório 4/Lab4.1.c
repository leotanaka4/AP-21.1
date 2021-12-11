#include <stdio.h>
int main()
{
int n, num, i, j, k, aux;printf("Tamanho do vetor: ");scanf("%d", &n);
if (n<=100)
{
int vetor[n];
for (i=0;i<n;i++)
{
  printf("Escreva um numero: ");
  scanf("%d", &num);
  vetor[i] = num;
}
for (j=0;j<(n/2);j++)
{
  aux=vetor[j];
  vetor[j]=vetor[n-j-1];
  vetor[n-j-1]=aux;
}
for (k=0;k<=n-1;k++)
{
    printf("%d\t", vetor[k]);
}
}
return 0;
}
