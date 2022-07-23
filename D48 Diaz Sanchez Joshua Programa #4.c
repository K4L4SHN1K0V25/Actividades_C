//D48 Diaz Sanchez Joshua Programa #4

#include <stdio.h>

int main(){

int a, b, r, s;

printf("Programa para obtener la division de 2 numeros enteros\n");
printf("Ingrese el primer numero: ");
scanf("%i",&a);
printf("Ingrese el segundo numero: ");
scanf("%i",&b);

r = a / b;
s = a % b;
printf("El resultado es: %i \n",r);
printf("El residuo es: %i",s);

return 0;
}
