//D48 Diaz Sanchez Joshua Programa #5

#include <stdio.h>

int main(){

int EntIng1, EntIng2, MayAlm=0;

printf("Ingrese el primer valor entero: ");
scanf("%i",&EntIng1);
printf("Ingrese el segundo valor entero: ");
scanf("%i",&EntIng2);

MayAlm = EntIng2;

if (EntIng1>MayAlm){
    MayAlm = EntIng1;

}
//printf("%i",MayAlm); //<-- para comprobar que se guarda el valor mas alto
}
