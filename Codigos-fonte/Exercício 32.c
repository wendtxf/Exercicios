/*
    Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int x,suc,ant,nint;

    UINT cpage_utf8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o número: ");
    scanf("%d",&nint);

    suc = nint * 3;
    ant = nint * 2;

    x = suc + ant;

    system("cls");

    printf("Número informado: %d\n\n",nint);
    printf("Triplo: %d\n",nint * 3);
    printf("Sucessor do Triplo %d\n",suc + 1);
    printf("Dobro: %d\n",nint * 2);
    printf("Antecessor do Dobro: %d\n\n",ant - 1);
    printf("Sucessor do triplo + Antecessor do dobro: %d\n",x);
}