/*
    Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    float brl,usd, conv;

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o valor em reais: R$ ");
    scanf("%f",&brl);

    printf("Informe o valor da cotação do dólar: U$D ");
    scanf("%f",&usd);

    system("cls");

    conv = brl / usd;

    printf("%.2f R$ equivalem à %.2f USD\n\n",brl,conv);

    system("pause");
}