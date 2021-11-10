/*
	Leia o valor de volume em metros cúbios e apresente-o convertido em litros.
	A fórmula de conversão é: L=1000*M.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float l,m;
	
	UINT cpage_utf8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o volume em metros cúbicos (M³): ");
	scanf("%f",&m);
	
	system("cls");
	
	l=1000*m;
	
	printf("%.2f M³ = %.2f L\n\n",m,l);
	
	system("pause");
}