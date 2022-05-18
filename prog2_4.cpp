/*Autor: Oscar Eduardo Fletes Ixta, 31/03/22
	Hacer Un programa que pida un caracter y diga si es una letra, un numero o un caracter 
	de puntuacion
	
	Programa en lenguaje c que pida un caracter e identifique si es letra, numero un caracter, con el uso de condicones.
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo unsigned char
		* Operaciones aritmeticas  
		* Uso de condiciones
		* printf para monstrar los valroes de las variables

	Objetivo:
	
	Mostrar el uso de variables unsigned char, condiciones, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:

	El programa  pide como entrada 1 variable del tipo unsigned char (caracter),
	El programa pide un caracter y que diga si es una letra, un numero o un caracter de puntuacion
	*/
	
#include<stdio.h>//libreria para c

int main(){
	unsigned char c;//variable para cadenas que usa menos memoria
	//Ejempplo de impresion de caracteres especiales 
	//printf("Pa%cuelo, Canci%cn \n",164,162);
	printf("Introduce un caracter: ");//imprime mensaje
	scanf("%c",&c);//lee el numero insertado por el teclado
	//printf("Se introdujo el caracter <%c> y su codigo ASCII es %d \n",dato,dato);
	//Probar si es una letra
	//	Mayusculas			Minusculas			acentos y ñ			Ü		   é
	if(c>='A' && c<='Z'|| c>='a' && c<='z' || c>=160 && c<=165 || c==129 || c==130){
		/*condicon, si c es mayor o igual a A y menor o igual a Z son mayusculas, 
			o si c es mayor o igual a A y menor o igual a Z son Minusculas,
			o si c es mayor o igual a 160 y menor o igual a 165 son acentos y ñ,
			o si c es igual a 129 es Ü
			o si c es igual a 130 es é
			*/
		printf("<%c> es una letra\n",c);//imprime lo que es c
	}else if(c>='0' && c<='9'){//y si, c es mayor o igual a 0 y c menor o igual a 9
		printf("<%c> es un numero\n",c);//imprime el caracter insertado con la leyenda ya puesta
	}else{//y si no...
		printf("<%c> es un caracter especial\n",c);//imprime el caracter insertado con la leyenda ya puesta
	}
	
	return 0;
}
