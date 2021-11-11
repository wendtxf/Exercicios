/*
	Peça ao usuário que informe 3 valores inteiros e imprima o valor deles.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int x,y,z,r;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);

	printf("Informe o primeiro valor: ");
	scanf("%d",&x);
	
	printf("\nInforme o segundo valor: ");
	scanf("%d",&y);

	printf("\nInforme o terceiro valor: ");
	scanf("%d",&z);
/*
	if(x==''){
		x=0;
	}

	if(y==''){
		x=0;
	}
	
	if(z==''){
		x=0;
	}
*/
	system("cls");

	r = x + y + z;

	printf("%d + %d + %d = %d\n\n", x, y, z, r);

	system("pause");
}