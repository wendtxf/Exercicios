/*
    Faça um programa que leia o valor da hora de trabalho (em R$) e número de horas trabalhadas no mês.
    Imprima o valor a ser pago ao funcionário, adicionando 10% ao valor calculado.
*/
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int x;
    float y, z, acr=10;

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o número de horas trabalhadas no mês: ");
    scanf("%d",&x);

    printf("Informe a hora de trabalho: R$ ");
    scanf("%f",&y);

    system("cls");

    z = x * y;

    acr = (acr * z) / 100;

    z = z + acr;

    printf("Horas trabalhadas: %d",x);
    printf(" horas\n");
  
    printf("Valor da hora de trabalho: R$ %.2f\n",y);
  
    printf("Acréscimo: R$ %.2f\n",acr);
  
    printf("Valor: R$ %.2f\n\n",z-acr);
  
    printf("Valor a receber: R$ %.2f\n\n",z);

    system("pause");
}