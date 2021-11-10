/*
	Leia um valor de comprimento em centímetros e apresente-o em polegadas.
	A fórmula de conversão é: P=C/2.54.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float p,c;

	UINT cpage_utf8 = 65001;
	SetConsoleOutputCP(CP_UTF8);

	printf("Informe o comprimento em centímetros (cm): ");
	scanf("%f",&c);

	system("cls");

	p=c/2.54;

	printf("%.2f cm = %.5f in\n\n",c,p);

	system("pause");
}