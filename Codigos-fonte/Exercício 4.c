/*
	Leia um número real e imprima o resultado do quadrado desse núemero.
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float x,y;
	
	UINT cpage_utf8 = 65001;
	SetConsoleOutputCP(CP_UTF8);

	printf("Informe o valor desejado: ");
	scanf("%f",&x);
	
	system("cls");

	y=pow(x,2);
	
	printf("%.0f² = %.2f\n\n",x,y);
	
	system("pause");
}