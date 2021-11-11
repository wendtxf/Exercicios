/*
    Leia um valor de uma área em hectares (ha) e apresente-o convertido como metros quadrados (M²)
    A fórmula de de conversão é: M=H*10000
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int m;
    float h;

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o valor em hectares (ha): ");
    scanf("%f",&h);

    system("cls");

    m = h * 10000;

    if (h >= 1){
        printf("%.0f ha = %d m²\n\n",h,m);      
    }else{
        printf("%.2f ha = %d m²\n\n",h,m);      
    }

    system("pause");
}