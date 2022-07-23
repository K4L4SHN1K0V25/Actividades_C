//D48 Diaz Sanchez Joshua Programa #12

#include <stdio.h>
int main(){

int filas,columnas,i,j;
printf("Cuantas filas? ");
scanf("%i",&filas);
printf("Cuantas columnas? ");
scanf("%i",&columnas);
system("cls");

for(i=1;i<=filas;i++){
    printf("\n");
    for(j=1;j<=columnas;j++){
        if(i==j){
            printf("\t%i",i*j);
        }
        else{
            printf("\t ");
        }
    }
}
}
