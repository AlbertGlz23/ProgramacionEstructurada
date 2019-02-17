/*
Autor:Jorge Ch� 16/Febrero/19
Entradas: numero (a redondear).
Salidas: cadena con el n�mero redondeado
Procedimiento general: Se ingresa un numero. Si es negativo se pide de nuevo.
Se redondea el numero a la centena m�s cercana
*/


#include <stdio.h>

int lectura();
int redondeo(int numeroX);
void impresionNumero(int numeroX);

int main(void){

//se inicia la variable que guarda el n�mero

int numero = 0;

//Entradas: se solicita el n�mero a redondear que no sea negativo

numero = lectura();

/*Proceso : si el n�mero es 100 o menor que 100 se imprime el redondeo 100. sino,
se hace el proceso de redondeo a la siguiente centena cercana */

numero = redondeo(numero);

//salidas: se imprime el n�mero

impresionNumero(numero);

return 0;

}

int lectura(){
//entradas: ninguna

    int dato = 0;

//procedimiento: se imprime la petici�n del dato y se lee

while (1){

    printf("Ingresa un numero que quieras redondear a la centena mas cercana:\n");
    scanf("%i", &dato);

    if (dato < 0){

        printf("ERROR, numero menor que 0\n");

    } else {

        break;

    }

}

//salida: el dato leido

    return dato;
}

int redondeo(int numero){

//entradas: el numero a redondear

    int numeroRedondeado = 0;

//procedimiento: se redondea el n�mero

    if (numero <= 100){

    numeroRedondeado = 100;

} else {

   numero = (numero + 50) / 100 ;
   numeroRedondeado = numero * 100;

}

//salida: el numero redondeado

return numeroRedondeado;
}

void impresionNumero(int numero){

//entrada: el numero redondeado

//procedimiento: se imprime el n�merp

printf("El numero redondeado es: %i", numero);

}
