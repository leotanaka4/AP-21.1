#include <stdio.h>
#include <float.h>
int main(){
  printf("Limites inferior e superior do tipo float: %.0f e %.0f.\n", FLT_MIN, FLT_MAX);
  printf("Limites inferior e superior do tipo double: %.0lf e %.0lf.\n", DBL_MIN, DBL_MAX);
  printf("Limites inferior e superior do long double: %.0lf e %.0lf.", LDBL_MIN, LDBL_MAX);
  return 0;
}
