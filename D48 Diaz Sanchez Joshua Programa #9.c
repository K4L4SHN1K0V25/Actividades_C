//D48 Diaz Sanchez Joshua Programa #9

#include <stdio.h>

int main (){

int n, m = 0, o;

do{
    printf("\nIngrese un numero para sumar: ");
    scanf("%i",&n);

    m = n + m;

    if (m<5000){
        printf("Si desea continuar ingrese 1, si desea salir ingrese 0: ");
        scanf("%i",&o);
    }
}while(m < 5000 && o == 1);

printf("\nLa suma de los numeros ingresados da un resultado de: %i",m);

}
