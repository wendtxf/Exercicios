/*
	Leia um número real e imprima a quinta parte desse número.
*/

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
	
	y = x / 5;
	
	system("cls");
	
	printf("A quinta parte de %.0f é %.2f.\n\n",x ,y);
	
	system("pause");
}
