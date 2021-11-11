/*
    Leia um número inteiro e imprima seu antecessor e seu sucessor.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int x=0,y,z=0;

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o número: ");
    scanf("%d",&y);

    system("cls");

    x = y - 1;
    
    z = y + 1;

    printf("Número informado: %d\n",y);
   
    printf("Número antecessor: %d\n",x);
   
    printf("Número sucessor: %d\n\n",z);

    system("pause");
}