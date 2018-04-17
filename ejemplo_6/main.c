/******************************************************************
* Programa: Ejemplo Clase 5
*
* Objetivo:
*   Solicitar al usuario 5 números, permitir listarlos por pantalla
*   indicando el máximo, el mínimo y el promedio
*   Permitir Modificar el valor de cualquiera de los números cargados
*   indicando el índice del mismo y su nuevo valor.
*
* Aspectos a destacar:
*   -Utilización de array
*
*
*
*
*
* *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
void tomaDeVectores(int vector[],int tamanioDelVector);
void imprimeVector(int vector[],int tamanioDelVector);
int numeroMaximo(int vector[],int tamanioDelVector);

int main()
{
    /**int vector[5];
    for(int i=0; i< 5;i++){
        printf("Ingrese 5 numeros");
        scanf("\n%d",&vector[i]);
    }*/
   /** for(int i=0;i<5;i++){
        printf("\n%d",vector[i]);
    }*/
    int numeros[5];
    tomaDeVectores(numeros,5);
    imprimeVector(numeros,5);
    numeroMaximo(numeros,5);

    return 0;
}
void tomaDeVectores(int vector[],int tamanioDelVector)
{

    for(int i=0; i< tamanioDelVector;i++){
        printf("Ingrese 5 numeros");
        scanf("\n%d",&vector[i]);
}

}
void imprimeVector(int vector[],int tamanioDelVector)
{
     for(int i=0;i<tamanioDelVector;i++){
        printf("\n%d",vector[i]);
    }

}
int numeroMaximo(int vector[],int tamanioDelVector)
{
    int maximo;
    int flag=0;

    for(int i=0;i<tamanioDelVector;i++)
    {
        if(maximo<vector[i])
        {
            maximo=vector[i];
            flag=1;
            return maximo;
        }
    }
}

