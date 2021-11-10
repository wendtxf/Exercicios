/*
	Leia uma velocidade em KM/H e apresente-a convertida em M/S.
	A fórmula de conversão é: M=K/3,6
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float m,k;
	
	UINT cpage_utf8 = 65001;
	SetConsoleOutputCP(CP_UTF8);

	printf("Informe a velocidade em quilômetros por hora (KM/H): ");
	scanf("%f",&k);
	
	m=(k/3.6);
	
	system("cls");
	
	printf("%.2f KM/H = %.2f M/S\n\n",k,m);
	
	system("pause");
}