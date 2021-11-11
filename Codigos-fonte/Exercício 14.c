/*
	Leia um ângulo em graus e apresente-o convertido em radianos.
	A fórmula de conversão é: R=G*pi/180
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float r,g,pi=3.14159;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o ângulo em graus: ");
	scanf("%f",&g);
	
	system("cls");
	
	r = g * pi / 180;
	
	printf("%.2f° = %.3frad\n\n",g,r);
	
	system("pause");
}