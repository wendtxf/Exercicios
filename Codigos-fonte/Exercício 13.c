/*
	Leia uma distância em KM e apresente-a convertida em MI.
	A fórmula de conversão é: MI=KM*0.62137
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float mi,km;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe a distância em quilômetros (KM): ");
	scanf("%f",&km);
	
	system("cls");
	
	mi = km * 0.62137;
	
	printf("%.2fKM = %.3fMI\n\n",km,mi);
	
	system("pause");
}