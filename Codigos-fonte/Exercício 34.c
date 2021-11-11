/*
    Leia o valor do raio de um círculo, calcule e imprima a área do circulo correspondente.
    Área do circulo é π*raio².
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    float raio,area,pi=3.141592;

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o raio: ");
    scanf("%f",&raio);

    system("cls");
  
    area = pi * pow(raio,2);

    printf("Área do circulo: %.3f\n\n",area);

    system("pause");
}