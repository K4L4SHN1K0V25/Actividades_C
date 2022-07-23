//D48 Diaz Sanchez Joshua Programa #13

#include <stdio.h>

int main(){

int m[100][100],n[100][100],r[100][100],f,c,i,j;

printf("Ingresa el numero de filas: ");
scanf("%i",&f);
printf("Ingrese el numero de columnas: ");
scanf("%i",&c);

for(i=1;i<=f;i++){
    for(j=1;j<=c;j++){
        printf("Ingrese el dato (%i, %i): ",i,j);
        scanf("%i",&n[i][j]);
    }
}

system("cls");

for(i=1;i<=f;i++){
    for(j=1;j<=c;j++){
        printf("Ingrese el dato (%i, %i): ",i,j);
        scanf("%i",&m[i][j]);
    }
}

system("cls");

for(i=1;i<=f;i++){
    for(j=1;j<=c;j++){
        r[i][j]=(n[i][1]*m[1][j])+(n[i][2]*m[2][j])+(n[i][3]*m[3][j]);
    }
}

for(i=1;i<=f;i++){
    printf("\n");
    for(j=1;j<=c;j++){
        printf("\t%i\t",r[i][j]);
    }
    printf("\n");
}

}
