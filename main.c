#include <stdio.h>
 
/*- Entre com três medidas para um triângulo e verifique que tipo de triângulo ele forma: equilátero(3 lados iguais), isósceles (2 lados iguais) ou escaleno (3 lados diferentes). Somente verifique se for um triângulo válido.*/
 
int main(void) {
 
  int Lx = 0;
  int Ly = 0;
  int Lz = 0;
 
  printf("Qual valor do lado x: ");
  scanf("%i", &Lx);
  printf("\nQual valor do lado y:  ");
  scanf("%i", &Ly);
  printf("\nQual valor do lado z: ");
  scanf("%i", &Lz);
 
  if( (Lx == Ly) && (Lx == Lz) && (Ly == Lz) ){
  printf("\nO triangulo formado é equilatero\n");
  }
  else if( (Lx != Ly) && (Lx != Lz) && (Ly != Lz) ) {
  printf("\nO triangulo formado é escaleno\n");
  }
   else {
   printf("\nO triangulo formado é isoceles\n");
  }
 return 0;
}
