/*
    Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    float val,x,desc=12;

    UINT cpage_utf8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o valor: R$ ");
    scanf("%f",&val);


    printf("\nInforme o desconto (%%): ");
    scanf("%f",&desc);

    x = val * desc / 100;

    system("cls");

    printf("Valor: R$ %.2f\n\n",val);
    
    printf("Desconto: %.2f %%\n\n",desc);

    printf("Valor Total: R$ %.2f\n\n",x);

    system("pause");
}   