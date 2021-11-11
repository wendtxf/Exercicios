/*
	Leia um valor de massa em quilogramas e apresente-o convertido em libras.
	A fórmula de conversão é: l=k*2,2046.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float l,k;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe a massa em quilogramas (Kg): ");
	scanf("%f",&k);
	
	system("cls");
	
	l = k * 2.2046;
	
	printf("%.2f Kg = %.5f lb\n\n",k,l);
	
	system("pause");
}