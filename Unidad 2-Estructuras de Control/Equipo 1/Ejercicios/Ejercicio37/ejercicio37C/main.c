/*
Ejercicio 37 C
Unidad 2 - {Programaci�n Estructurada}
Equipo 1
Autor: Eyder Antonio Concha Moreno
Fecha: 5 de Febrero 2019
Entradas: n n�mero de primos a sumar
Salidas: la suma del n�mero de primos (o 0 en caso de ser un valor invalido)
---------------------------------------
Instrucci�n:
Determinar la suma de los primeros n n�meros primos.
---------------------------------------
Procedimiento General:
---------------------------------------
1.-Verificamos que la cantidad de primos escrita por el usuario sea mayor a 0
2.-Iteramos atrav�s de los n�meros naturales, comparando un contador con los n�meros desde dos hasta su mitad
  de esta manera, determinando si es primo
3.-Si el n�mero tiene un residuo de 0, se determina que el n�mero no es primo, y se representa en una variable booleana
4.-Comprobamos si la variable isPrime es verdadera o falsa
5.-Si es verdadera (si es primo) sumamos ese n�mero a la suma total, y restamos uno a la cantidad de primos
---------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Entradas*/

    //Definimos variable usada para la cantidad de n�meros primos a encontrar
    int cantidadDePrimos;

    //Variable suma para almacenar toda suma
    int suma = 0;

    //Variable contador, usada para iterar hasta que los n�meros primos hayan sido sumados
    int numero = 1;

    //Variable "booleana" saber si el n�mero en la iteraci�n es primo
    int isPrime;

    /*Procedimiento*/

    //Recibimos la cantidad de primos a sumar
    printf("Ingresa la cantidad de primos que deseas sumar \n");
    scanf("%d", &cantidadDePrimos);

    //Iteramos mientras que la cantidad de primos sea mayor a 0
    while(cantidadDePrimos > 0) {
        numero++;
        isPrime = 1;
        //Obtenemos el residuo del contador entre todos los n�meros que preceden a la mitad del mismo
        for(int i = 2; i <= (numero / 2); i++){
            //De tener un residuo de cero, es decir, no es primo, se declara al booleano "isPrime" como falso
            if((numero % i) == 0) {
                isPrime = 0;
            }
        }

        //Si la variable "es primo", es verdadera, entonces realizamos la suma
        if(isPrime) {
            suma += numero;
            //Restamos uno a la cantidad de primos a encontrar
            cantidadDePrimos--;
        }
    }

    /*Salidas*/

    printf("La suma es: %d", suma);

    return 0;
}




