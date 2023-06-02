#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cantidadValores();
void cargarVector(int vec[], int tam);
void mostrarVector(int vec[], int tam);
void vectorInvertido(int vec[], int tam);
float calcularPromedio (int vec[], int tam);

int main(){
    srand(time(0));

    int tam=cantidadValores();
    int vec[tam];
    cargarVector(vec,tam);
    mostrarVector(vec, tam);

    vectorInvertido(vec,tam);

    calcularPromedio(vec,tam);

    return 0;
}

int cantidadValores(){
    int cant;
    do{
        printf("Ingresar un tamanio impar de dos cifras: \n");
        scanf("%d", &cant);
    } while(cant<10 || cant>99 || cant%2==0);
    return cant;
};

void cargarVector(int vec[], int tam){
    for(int i=0; i<tam; i++){
        vec[i]= -100-rand()%-899;
    }
};

void mostrarVector(int vec[], int tam){
    printf("||");
    for (int i=0; i<tam; i++){
       printf(" %d ", vec[i]);
    }
    printf("||");
};

void vectorInvertido(int vec[], int tam){
    printf("\n");
    printf("||");
    for(int i=tam-1; i>=0; i--){
        printf(" %d ", vec[i]);
    }
    printf("||");
};

float calcularPromedio(int vec[], int tam){
    float prom=0;
    int contador=0;

    for(int i=0; i<tam; i++){
        if(vec[i] % 7==0){
            prom=prom+vec[i];
            contador=contador+1;
        }
    }
    prom=prom/contador;
    printf("\n\nPROM: %f",prom);
    return prom;
};
