#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// COERSÃO / TYPECAST.

int a = 7;
int b = 2;
float c = (float) a / b;
printf("O VALOR DA COERSÃO É %.1f", c);

// (float)  CONSIDERA A PARTE INTEIRA COMO UM VALOR REAL.

}
