#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// COERS�O / TYPECAST.

int a = 7;
int b = 2;
float c = (float) a / b;
printf("O VALOR DA COERS�O � %.1f", c);

// (float)  CONSIDERA A PARTE INTEIRA COMO UM VALOR REAL.

}
