#include <stdio.h>

int main(){

for(int x=1;x<5;x++){
	for(int y=0;y<6;y++){
		if((x+y)%2!=0) printf("*");
		else printf("#");
	}
	printf("\n");
}

	return 0;
}
