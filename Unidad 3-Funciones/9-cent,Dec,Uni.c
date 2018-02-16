#include <stdio.h>

	/*
	Autor: Oscar Perera
	Entradas: El valor del numero menor de 1000 
	 Salida: Cantidad de centenas, decenas y unidades (se encuentran en una funci�n void independiente)
	 Procedimiento: se ingresa un numero y a trav�s de m�dulos y divisores determinaremos la cantidad de centenas, decenas y unidades que tiene, los divisores nos permitiran obtener
	 el valor en cada parte; mientras el m�dulo generar� un residuo que ser� utilizado para determinar el valor siguiente.
	 Se har� el llamado de 2 funciones. La primera nos dar� los valores en cada nivel (centenas, decenas unidades) y la segunda mandar� a imprimir los resultados. 
	 */

int divisor(int, int);
void impresion (int, int, int);

int main (){

	
	
/*entradas*/
	int numero, centenas, decenas, unidades; 
	printf("ingresar el numero a elegir:\n");
	scanf("%d",&numero);
	
/*procedimiento */
	/*llamado a la funcion 1*/
	centenas= divisor(numero,100);

	decenas= divisor(numero%100, 10);

	unidades= divisor(numero%10, 1);
	
	/*llamado a la funci�n 2*/
	impresion(centenas,decenas,unidades);

	
	
	
	
	return 0;
	
	
	
	
	
}
/*funcion 1, para obtener los valores de cada nivel
@param el numero que se ingreso y el valor por el cual quiere ser divido
@return el resultado de dividir el n�mero que se ingreso al comienzo con el valor que se quiere dividir
*/
int divisor (int numero, int dividendo){
	int resultado; 
	resultado= numero	/ dividendo;
	return resultado;
	
}
/*funci�n 2, para imprimir los resultados
@param las centenas, decenas y unidades
@return la impresi�n de los valores con una oraci�n que especifica que signifa cada valor
*/

void impresion(int centenas, int decenas, int unidades){
	printf ("estas son las centenas: %d \n", centenas);
	printf ("estas son las decenas:  %d \n", decenas);
	printf ("estas son las unidades: %d \n", unidades);
	

	
}
