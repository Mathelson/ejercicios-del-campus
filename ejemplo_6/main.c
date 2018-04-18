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
void imprimeVectorInt(int vector[],int tamanioDelVector);
int numeroMaximoDentroDelVector(int vector[],int tamanioDelVector);
int numeroMinimoDentroDelVector(int vector[],int tamanioDelVector);
void mostrarVector(int vector[]);

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
    int numeroMenor;
    int numeroMayor;
    int numeros[5];
    tomaDeVectores(numeros,5);
    imprimeVectorInt(numeros,5);
    numeroMayor=numeroMaximoDentroDelVector(numeros,5);
    numeroMenor=numeroMinimoDentroDelVector(numeros,5);
    printf("\nEl numero  mayor es  : %d\nEl numero mas chico es : %d ",numeroMayor,numeroMenor);

    return 0;
}
void tomaDeVectores(int vector[],int tamanioDelVector)
{
    int i;
    for( i=0; i< tamanioDelVector;i++){
        printf("Ingrese 5 numeros");
        scanf("\n%d",&vector[i]);
}

}
void imprimeVectorInt(int vector[],int tamanioDelVector)
{
    int i;
     for( i=0;i<tamanioDelVector;i++){
        mostrarVector(vector[i]);
    }

}
int numeroMaximoDentroDelVector(int vector[],int tamanioDelVector)
{
    int maximo;
    int flag=0;
    for(int i=0;i<tamanioDelVector;i++)
    {
        if(maximo<vector[i] || flag==0)
        {
            maximo=vector[i];
            flag=1;
        }
    }
      return maximo;
}
int numeroMinimoDentroDelVector(int vector[],int tamanioDelVector)
{
    int minimo;
    int flag=0;
    for(int i=0;i<tamanioDelVector;i++)
    {
        if(minimo>vector[i] || flag==0)
        {
            minimo=vector[i];
            flag=1;
        }
    }
      return minimo;

}
void mostrarVector(int vector[])
{

    printf("\n%d\n", vector);//Se agrego esto!!
}


