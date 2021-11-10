/*
    Leia a altura e o raio de um cilindro circular e imprima o volume do mesmo.
    O volume de um cilindro circular é calculado por meio da fórmula: v=π*raio²*altura.
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int raio,alt;
    float vol,pi=3.14159;

    UINT cpage_utf8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe a Altura: ");
    scanf("%d",&alt);

    printf("Informe o Raio: ");
    scanf("%d",&raio);

    vol = pi * pow(raio,2) * alt;

    system("cls");

    printf("Raio: %d\n",raio);

    printf("Altura: %d\n",alt);

    printf("Volume Total: %.3f\n\n",vol);
}