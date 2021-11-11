/*
	Leia um valor de comprimento em metros e apresente-o convertido em jardas.
	A fórmula de conversão é: J=M*1,094.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float m,j;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o comprimento em metros (M): ");
	scanf("%f",&m);
	
	system("cls");
	
	j = m * 1.094;
	
	printf("%.2f M = %.5f yd\n\n",m,j);
	
	system("pause");
}