/*
	Leia um valor de comprimento em jardas e apresente-o convertendo em metros.
	A fórmula de conversão é: M=J*1,094.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float m,j;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o comprimento em jardas (yd): ");
	scanf("%f",&j);
	
	system("cls");
	
	m = j / 1.094;
	
	printf("%.2f yd = %.4f M\n\n",j,m);

	system("pause");
}