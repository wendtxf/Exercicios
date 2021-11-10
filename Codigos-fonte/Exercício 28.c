/*
    Faça a leitura de 3 valores e apresente como resultado a soma dos quadrados dos 3 valores lidos.
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int v1,v2,v3,x;

    UINT cpage_utf8 = 65001;
    SetConsoleOutputCP(CP_UTF8);
 
    printf("Informe o 1° valor: ");
    scanf("%d",&v1);

    printf("\nInforme o 2° valor: ");
    scanf("%d",&v2);

    printf("\nInforme o 3° valor: ");
    scanf("%d",&v3);
    system("cls");

    x = pow(v1,2) + pow(v2,2) + pow(v3,2);

    printf("%d² + %d² + %d² = %d\n\n",v1,v2,v3,x);

    system("pause");
}