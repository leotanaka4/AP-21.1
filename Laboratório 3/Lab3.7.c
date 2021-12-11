#include <stdio.h>
int main(){
  int a = 5, b = 20, c;
  if (a && b) {
    printf("OP 1 - Cond. verdadeira ; c = %i\n", c);
  }
  if (a || b) {
    printf("OP 2 - Cond. verdadeira\n");
  }
  a = 0;
  b = 10;
  c = a && b;
  if (a && b){
    printf("OP 3 - Cond. verdadeira ; c = %i\n", c);
  }
  else {printf("OP 3 - Cond. falsa ; c = %i\n", c);}
  if ( !(a && b)){
    printf("OP 4 - Cond. verdadeira\n");
  }
  return 0;
}
