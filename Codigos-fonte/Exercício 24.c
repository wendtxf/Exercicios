/*
	Leia o valor de uma área em metros quadrados e apresente-o convertido em acres.
	A fórmula de conversão é: HA=M/4047
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float m,ac;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o valor em metros quadrados (M²): ");
	scanf("%f",&m);
	
	system("cls");
	
	ac = m / 4047;
	
	printf("%.2f M² = %.9f HA\n\n",m,ac);
	
	system("pause");
}