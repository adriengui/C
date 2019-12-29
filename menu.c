#include <stdio.h>

int main(){

printf("*********** Menu ***********\na: Fixer la valeur de a\nb: Afficher la valeur de a\nq: Quitter le programme\n****************************\nOption choisie ?\n");
char c=getchar();
while(c!='q') c=getchar();

	return 0;
}
