//  Faça um programa que leia um número inteiro e o imprima.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int x;

	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o valor: ");
	scanf("%d",&x);
	
	system("cls");
	
	printf("Valor digitado: %d\n\n",x);
	
	system("pause");
}