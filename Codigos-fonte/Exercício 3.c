/*
	Faça um programa que leia um número real e o imprima.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float y;
	
	UINT codepage_utf8 = 65001;
	SetConsoleOutputCP(CP_UTF8);

	printf("Informe o número a ser impresso: ");
	scanf("%f", &y);
	
	system("cls");
	
	printf("O valor informado foi: %.3f\n\n", y);
	
	system("pause");
}