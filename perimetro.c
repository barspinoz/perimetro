#include <stdio.h>
#include <math.h>
int main(){
	/*variables de entrada*/
	float x1=0;
	float y1=0;
	float x2=0;
	float y2=0;
	float x3=0;
	float y3=0;
	
	/*variables de salida*/
	float perimetro=0;
	
	/*variables intermedias*/
	float lado1=0;
	float lado2=0;
	float lado3=0;
	
	/*lectura de variables*/
	printf("\n Ingrese x1 para el primer punto:");
	scanf(" %f",&x1);
	printf("\n Ingrese y1 para el primer punto:");
	scanf(" %f",&y1);
	printf("\n Ingrese x2 para el segundo punto:");
	scanf(" %f",&x2);
	printf("\n Ingrese y2 para el segundo punto:");
	scanf(" %f",&y2);
	printf("\n Ingrese x3 para el tercer punto:");
	scanf(" %f",&x3);
	printf("\n Ingrese y3 para el tercer punto:");
	scanf(" %f",&y3);
	
	/*calculo de los lados*/
	lado1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	lado2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	lado3=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
	
	/*calcular perimetro*/
	perimetro=lado1+lado2+lado3;
	printf("\n El perimetro es: %f \n" ,perimetro);

}//main