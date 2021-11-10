/*
	Leia uma distância em MI e apresente-a convertida em KM.
	A fórmula de conversão é: KM=MI/0.62137
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float km,mi;
	
	UINT cpage_utf8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe a distância em milhas (M): ");
	scanf("%f",&mi);
	
	system("cls");
	
	km=mi/0.62137;
	
	printf("%.2fMI = %.2fKM\n\n",mi,km);
	
	system("pause");
}