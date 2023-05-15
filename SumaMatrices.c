//Realizar un programa en el que se sumen dos matrices del mismo tamaño
#include<stdio.h>
int main(){
    int X[3][2], Y[3][2], Z[3][2], i, j;
    X[3][2]=0;
    Y[3][2]=0;
    Z[3][2]=0;
    for(i=0;i<3;i++){//filas son las i
        printf("Ingrese los valores de fila de la matriz X: ");
        scanf("%d ", &X[i][j]);
        for(j=0;j<2;j++){//columnas son las j
            printf("Ingrese los valores de columna de la matriz X: ");
            scanf("%d ", &X[i][j]);
        }
    }
    for(i=0;i<3;i++){
        printf("Ingrese los valores de fila de la matriz X: ");
        scanf("%d ", &X[i][j]);
        for(j=0;j<2;j++){
            printf("Ingrese los valores de columna la matriz Y: ");
            scanf("%d ", &Y[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            Z[i][j]=X[i][j]+Y[i][j];
        }
    }
    printf("\nLa matriz resultante es: ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",Z[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

    return 0;
}