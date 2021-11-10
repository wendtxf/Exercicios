/*
    Leia um valor de área em metros quadrados (M²) e apresente-o convertido em hectares (ha).
    A fórmula de conversão é: M=H*10000
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    float m,ha;

    UINT cpage_utf8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o valor em metros quadrados (M²): ");
    scanf("%f",&m);

    system("cls");
    
    ha=m/10000;

    printf("%.2f m² = %.5f ha\n\n",m,ha);

    system("pause");
}