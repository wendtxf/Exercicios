/*
    Uma empresa contrata um encanador a R$ 30,00 por dia.
    Faça um programa que solicite o número de dias trabalhados e imprima a quantia liquida que deverá ser paga a ele.
    Sabendo-se que serão descontados 8% para o imposto de renda.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int dt,sald=30;
    float ir=8,liq,sal;

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o número de dias trabalhados: ");
    scanf("%d",&dt);

    system("cls");

    sal = sald * dt;

    liq = sal - sal * ir / 100;

    printf("Dias trabalhados: %d\n",dt);
   
    printf("Salário líquido: R$ %.2f\n\n",liq);

    system("pause");
}