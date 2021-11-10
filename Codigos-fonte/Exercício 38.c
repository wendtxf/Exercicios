/*
    Leia o salário de um funcionário.
    Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    float sal=1500,nsal,aum,y=25;

    UINT capge_utf8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o salário atual: R$ ");
    scanf("%f",&sal);
/*
    printf("Informe o aumento (%%): ");
    scanf("%f",&y);
*/
    aum = y / 100 * sal;

    nsal = sal + aum;

    system("cls");

    printf("Salário Atual: R$ %.2f\n\n",sal);

    printf("Aumento: %.2f %% = R$ %.2f\n\n",y,aum);

    printf("Salário com Aumento: R$ %.2f\n\n",nsal);

    system("pause");
}