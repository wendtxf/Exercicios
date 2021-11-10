/*
	Leia um valor de volume em litros e apresente-o convertido em metros cúbicos M³.
	A fórmula de conversão é: M=L/1000.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float m,l;
	
	UINT cpage_utf8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o volume em litros (L): ");
	scanf("%f",&l);
	
	system("cls");
	
	m=l/1000;
	
	printf("%.2f L = %.3f M³\n\n",l,m);
	
	system("pause");
}