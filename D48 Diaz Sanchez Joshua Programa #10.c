//D48 Diaz Sanchez Joshua Programa #10

#include <stdio.h>

int main(){

int n,suma = 0,i;

printf("Ingrese un numero: ");
scanf("%i",&n);

for(i=1;i<=n;i++){
    suma = suma + i;
}
printf("\nLa suma total es %i\n",suma);

}
