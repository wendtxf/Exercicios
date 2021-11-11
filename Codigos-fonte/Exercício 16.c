/*
	Leia um valor de comprimento em polegadas (in) e apresente-o convertido em cent�metros (cm).
	A fórmula de conversão é: C=P*2,54.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float c,p;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o comprimento em polegadas (in): ");
	scanf("%f",&p);
	
	system("cls");
	
	c = p * 2.54;
	
	printf("%.2f in = %.2f cm\n\n",p,c);
	
	system("pause");
}