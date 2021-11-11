/*
	Leia um ângulo em rad e apresente-o convertido em graus.
	A fórmula de conversão é: G=R*180/pi.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float g,r,pi=3.14159;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe o ângulo em radianos: ");
	scanf("%f",&r);
	
	system("cls");
	
	g = r * 180 / pi;
	
	printf("%.2frad = %.3f°\n\n",r,g);
	
	system("pause");
}