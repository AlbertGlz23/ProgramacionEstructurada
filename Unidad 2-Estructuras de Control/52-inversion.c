/*
Autor: Rodrigo Vera
Entradas: float valorPresente, float interes, int periodos
Salidas: float valorFuturo
Procedimiento general:
Se leen los valores necesarios para el c�lculo de una cantidad futura.
Se hace el c�lculo del inter�s compuesto y se multiplica por la cantidad invertida.
Se imprime el resultado obtenido.
*/
#include <stdio.h>
void leerValores(float*,float*,int*);
float calcularValorFuturo(float,float,int);
void imprimirValorFuturo(float);
int main(int argc, char *argv[]) {
	float valorPresente=0,interes=0,valorFuturo;
	int periodos=0;
	leerValores(&valorPresente,&interes,&periodos);
	valorFuturo=calcularValorFuturo(valorPresente,interes,periodos);
	imprimirValorFuturo(valorFuturo);
	return 0;
}
/*
Se lee el valor invertido, el porcentaje de inter�s y el n�mero de periodos,
validando que �ste �ltimo sea un entero positivo.
Los valores se guardan en las variables del main por el uso de apuntadores.
@param: float*presente, float*interes, int*periodos
@return:
*/
void leerValores(float*presente,float*interes,int*periodos){
	printf("Ingresar valor presente invertido\n");
	scanf("%f",presente);
	printf("Ingresar porcentaje de inter�s\n");
	scanf("%f",interes);
	do{
	printf("Ingresar n�mero de periodos. Debe ser un entero positivo\n");
	scanf("%d",periodos);
	}while(*periodos<=0);
}
/*
Se calcula el inter�s compuesto mediante un for para despu�s multiplicar
tal valor con el valor presente para obtener el valor futuro.
@param: float presente, float interes, int periodos
@return: float valorFuturo
*/
float calcularValorFuturo(float presente, float interes, int periodos){
	float valorFuturo,interesCompuesto=1;
	int contador;
	for(contador=0;contador<periodos;contador++)
		interesCompuesto=interesCompuesto*(1+interes/100);
	valorFuturo=presente*interesCompuesto;
	return valorFuturo;
}
/*
Se imprime el valor futuro.
@param: float valorFuturo
@return:
*/
void imprimirValorFuturo(float valorFuturo){
	printf("El valor futuro de la inversi�n es %f",valorFuturo);
}
