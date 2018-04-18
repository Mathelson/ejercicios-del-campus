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
void imprimeVectorDeEnteros(int vector[],int tamanioDelVector);
int numeroMaximoDeEnteros(int vector[],int tamanioDelVector);
//void mostrarVectorDeEnteros( int vector[]);

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
    int maximo;
    tomaDeVectores(numeros,5);
    imprimeVectorDeEnteros(numeros,5);
    maximo = numeroMaximoDeEnteros(numeros,5);
    printf("El numero mas grande es: %d ",maximo);

    return 0;
}
void tomaDeVectores(int vector[],int tamanioDelVector)
{

    for(int i=0; i< tamanioDelVector;i++){
        printf("Ingrese 5 numeros : \n");
        scanf("\n%d",&vector[i]);
}

}
void imprimeVectorDeEnteros(int vector[],int tamanioDelVector)
{
     for(int i=0;i<tamanioDelVector;i++)
    {
        printf("\n%d",vector[i]);
      // mostrarVector(vector[i]);
    }

}
int numeroMaximoDeEnteros(int vector[],int tamanioDelVector)
{
    int maximo;
   // int flag=0;

    for(int i=0;i<tamanioDelVector;i++)
    {
        if(maximo<vector[i])
        {
            maximo=vector[i];
     //       flag=1;

        }

    }
     return maximo;

}
//void mostrarVectorDeEnteros (int vector[])
//{

//    printf("\n%d",vector);
//}

