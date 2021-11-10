/*
	Leia uma temperatura em °C e apresente-a convertida em °F.
	A fórmula de conversão é: F=C*(9.0/5.0).
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float c,f;

	UINT cpage_utf8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe a temperatura em Celsius (°C): ");
	scanf("%f",&c);
	
	system("cls");
	
	f=c*(9.0/5.0)+32.0;
	
	printf("%.2f°C = %.2f°F\n\n",c,f);
	
	system("pause");
}