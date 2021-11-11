/*
    Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    float x,y;

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o lado do quadrado: ");
    scanf("%f",&y);

    system("cls");
 
    x = y * y;
   
    printf("Área total: %.2f m²\n",x);
}