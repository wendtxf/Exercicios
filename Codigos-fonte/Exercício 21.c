/*
	Leia um valor de massa em libras e apresente-o convertido em quilogramas.
	A fórmula de conversão é: K=L*0,45
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float k,l;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe a massa em libras (lb): ");
	scanf("%f",&l);
	
	system("cls");

	k = l / 2.2046;
	
	printf("%.2f lb = %.2f Kg\n\n",l,k);

	system("pause");
}