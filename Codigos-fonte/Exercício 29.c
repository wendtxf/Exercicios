/*
    Leia 4 notas, calcule a média aritmética e imprima o resultado. 
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    float n1,n2,n3,n4,med;

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe a 1ª nota: ");
    scanf("%f",&n1);

    printf("\nInforme a 2ª nota: ");
    scanf("%f",&n2);

    printf("\nInforme a 3ª nota: ");
    scanf("%f",&n3);
   
    printf("\nInforme a 4ª nota: ");
    scanf("%f",&n4);
    
    system("cls");

    med = (n1 + n2 + n3 + n4) / 4;

    printf("Média total: %.1f\n\n",med);

    if (med >= 5){
        system("color a");
        printf("Aluno(a) Aprovado(a)!!\n\n");
    }else{
        system("color 4");
        printf("Aluno(a) Reprovado(a)!!\n\n");
    }

    system("pause");
}