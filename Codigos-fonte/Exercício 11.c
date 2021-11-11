/*
	Leia uma velocidade em M/S e apresente-a em KM/H.
	A fórmula de conversão é: K=M*3.6.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float k,m;

	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);

	printf("Informe a velocidade em metros por segundo (M/S): ");
	scanf("%f",&m);
	
	system("cls");
		
	k = (m * 3.6);

	printf("%.2f M/S = %.2f KM/H\n\n",m,k);
	
	system("pause");
}