//D48 Diaz Sanchez Joshua Programa #6

#include <stdio.h>

int main(){

int Val1, Val2, RM, RD;

printf("Ingrese el primer valor: ");
scanf("%i",&Val1);
printf("Ingrese el segundo valor: ");
scanf("%i",&Val2);

if (Val1 > Val2){
    RD = Val1 / Val2;
    printf("El primer valor es mas alto asi que se realizo una division\n");
    printf("El resultado es %i",RD);
}
else{
    RM = Val1 * Val2;
    printf("El segundo valor es mas alto asi que se realizo una multiplicacion\n");
    printf("El resultado es %i",RM);
}
}
