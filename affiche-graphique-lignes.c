#include <stdio.h>

int main(){
	int tab[6]={5,9,7,3,14,8};
	for(int x=0;x<6;x++){
		for(int y=0;y<tab[x];y++) printf("* ");
		printf("\n");
	}

	return 0;
}
