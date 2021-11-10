/*
    A quantia de R$ 780.000,00 será dividida entre 3 ganhadores de um concurso.
    Sendo que da quantia total o 1° colocado ganhará 46%, o segundo 32% e o terceiro receberá o resto.
    Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    float x,y,din,pri,seg,ter;

    UINT cpage_utf8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Valor da quantia: R$ ");
    scanf("%f",&din);

    system("cls");

    // PRIMEIRO COLOCADO
    x = din * 46 / 100; //x = 358.800
    
    pri = din - x; // pri = 780.000 - 358.800 = 421.200
    
    din = x; // din = 358.800

    // SEGUNDO COLOCADO
    y = din * 32 / 100; // y = 243.984
    
    seg = din - y; // seg = 358.800 - 243.984 = 114.816
    
    din = y;

    // TERCEIRO COLOCADO
    ter = din; // ter = 114.816;

    printf("Primeiro lugar: R$ %.2f\n\n",pri);
    printf("Segundo lugar: R$ %.2f\n\n",seg);
    printf("Terceiro lugar: R$ %.2f\n\n",ter);

    system("pause");
}