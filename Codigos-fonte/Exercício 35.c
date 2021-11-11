/*
    Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: hipotenusa=√a²+b².
    Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa.
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int a,b;
    float hip;
    
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o valor do cateto A: ");
    scanf("%d",&a);

    printf("Informe o valor do cateto B: ");
    scanf("%d",&b);

    system("cls");

    hip = sqrt(pow(a,2) + pow(b,2));

    printf("Cateto A: %d\n",a);

    printf("Cateto B: %d\n\n",b);

    printf("Valor da hipotenusa: %.3f",hip);
}