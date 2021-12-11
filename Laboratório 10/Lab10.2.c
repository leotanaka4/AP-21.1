#include <stdio.h>
#define MULT(x,y) x*y

int iMult(int a, int b)
{
  return a*b;
}

float fMult(float a, float b)
{
  return a*b;
}

int main(int argc, char *argv[]){
  printf("%d %s\n", argc, argv[1]);
  printf("%f %d %f", MULT(3.0,4), iMult(3,4), fMult(3.0,4.0));//float tem preferencia pra int nesse caso
  return 0;
}
