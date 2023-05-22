//Crear una matriz tridimensional, en el que el usuario ingrese las dimensiones, filas, columnas, y numero de matrices. Y en la ultima matriz inicializarle en 1, las demàs en cero
#include<stdio.h>
int main(){
    int x, y, z, filas=0, columnas=0, matrices=0;
    printf("Por favor, ingrese el numero de filas: ");
    scanf("%d",&filas);
    printf("Por favor, ingrese el numero de columnas: ");
    scanf("%d",&columnas);
    printf("Por favor, ingrese el numero de matrices: ");
    scanf("%d",&matrices);
    x=filas;
    y=matrices;
    z=columnas;
    int Matriz[x][y][z];
    for(x=0;x<filas;x++){
        for(y=0;y<matrices;y++){
            for(z=0;z<columnas;z++){
                if(y==matrices-1){
                    Matriz[x][y][z]=1;
                }else{
                    Matriz[x][y][z]=0;
                }
                printf("%d ", Matriz[x][y][z]);
            }
            printf("\t");
        }
        printf("\n");
    }





    return 0;
}