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
#include <string.h>
#include <time.h>

int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);
char getNumeroAleatorio(int desde , int hasta, int iniciar);


void tomaDeVectores(int vector[],int tamanioDelVector);
void imprimeVectorInt(int vector[],int tamanioDelVector);

int numeroMaximoDentroDelVector(int vector[],int tamanioDelVector);
int numeroMinimoDentroDelVector(int vector[],int tamanioDelVector);

void mostrarVector(int vector[]);


//float calcularPromedio(int numeros[]);

int main()
{

    int numeroMenor;
    int numeroMayor;
    int numeros[5];
    int opcion=0;
    int nuevoValor;
  //  float promedios[5];

   // tomaDeVectores(numeros,5);
    /** for(indiceArray = 0 ; indiceArray < CANTIDAD ; indiceArray++ )
    {
            numeroIngresado = getInt("Ingrese el valor: \n");
            arrayDeNumeros[indiceArray] = numeroIngresado;
    }*/
  //  imprimeVectorInt(numeros,5);/**UTILIZARLO CUANDO TERMINE EL PROGRAMA O CUANDO PIDA MOSTRAR*/
  //  numeroMayor=numeroMaximoDentroDelVector(numeros,5);
 //   numeroMenor=numeroMinimoDentroDelVector(numeros,5);
  //  printf("\nEl numero  mayor es  : %d\nEl numero mas chico es : %d ",numeroMayor,numeroMenor);
    //promedios[5]=calcularPromedio( numeros,5);
//    printf("\nEl promedio es %.2f ",promedios);
    tomaDeVectores(numeros,5);

    while(opcion!=3)
    {
        getInt("INGRESE UNA OPCION \n1- MOSTRAR \n2-MODIFICAR \n3-SALIR\n");
        switch(opcion)
        {
            case 1:
                     imprimeVectorInt(numeros,5);
                     numeroMayor=numeroMaximoDentroDelVector(numeros,5);
                     numeroMenor=numeroMinimoDentroDelVector(numeros,5);
                     printf("\nEl numero  mayor es  : %d\nEl numero mas chico es : %d ",numeroMayor,numeroMenor);
                     break;
                     /** case 1:
                        printf("\n\nINDICE - VALOR\n");
                        for(indiceArray = 0 ; indiceArray < CANTIDAD ; indiceArray++ )
                        {
                        printf("  %d    -   %d \n",indiceArray,arrayDeNumeros[indiceArray]);
                        }
                        break;*/
            case 2:
                    getInt("Ingrese el Indice a modificar");
                    for(int i=0; i<5;i++)
                    {
                        if(i>=0 && i<5 )
                        {
                           nuevoValor=getInt(" Ingrese Valor ");
                            numeros[i]=nuevoValor;
                        }
                        else
                        {
                            printf("EL INDICE INGRESADO ESTA FUERA DE RANGO ");
                        }
                        break;
                    }


        }
    }

    return 0;
}
//float calcularPromedio(int numeros[])
//{
  //  float promedio;
    //int sumador=0;
    //for(int i=0; i<5;i++)
    //{
        //promedio=(float)numeros/5;
      //  sumador=sumador+numeros[i];

    //}
    //promedio=(float)sumador/5;
    //return promedio;
//}
void tomaDeVectores(int vector[],int tamanioDelVector)
{
    int i;
    for( i=0; i< tamanioDelVector;i++){
        printf("\n Ingrese 5 numeros: ");
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
/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}


/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}


/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}
/**
 * \brief Genera un número aleatorio
 * \param desde Número aleatorio mínimo
 * \param hasta Número aleatorio máximo
 * \param iniciar Indica si se trata del primer número solicitado 1 indica que si
 * \return retorna el número aleatorio generado
 *
 */
char getNumeroAleatorio(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}

  /**int vector[5];
    for(int i=0; i< 5;i++){
        printf("Ingrese 5 numeros");
        scanf("\n%d",&vector[i]);
    }*/
   /** for(int i=0;i<5;i++){
        printf("\n%d",vector[i]);
    }*/

