/*
 	Leia uma temperatura em °F e apresente-a convertida em °C.
 	A fórmula de conversão é: C=5.0*(F-32.0)/9.0.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float c,f;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe a temperatura em Fahrenheit (°F): ");
	scanf("%f",&f);
	
	system("cls");

	c = 5.0 * (f - 32.0) / 9.0;
	
	printf("%.2f°F = %.2f°C\n\n",f ,c);
	
	system("pause");
}