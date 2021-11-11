/*
	Leia um valor de área em acres e apresente-o em metros quadrados.
	A fórmula de conversão é: m²=ha*4047.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float ha,m;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o valor em acres (ha): ");
	scanf("%f",&ha);
	
	system("cls");
	
	m = ha * 4047;
	
	printf("%.2f ha = %.3f m²\n\n",ha,m);
	
	system("pause");
}