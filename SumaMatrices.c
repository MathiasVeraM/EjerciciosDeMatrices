//Realizar un programa en el que se sumen dos matrices del mismo tamaño
#include<stdio.h>
int main(){
    int X[3][2], Y[3][2], Z[3][2];
    for(int i=0;i<3;i++){//filas son las i
        for(int j=0;j<2;j++){//columnas son las j
            printf("Ingrese los valores de la matriz X: ");
            scanf("%d ", &X[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Ingrese los valores de la matriz Y: ");
            scanf("%d ", &Y[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            Z[i][j]=X[i][j]+Y[i][j];
        }
    }
    printf("\nLa matriz resultante es: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",Z[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

    return 0;
}