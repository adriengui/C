#include <stdio.h>

int main(){

	int z=6,a=0,b=(126-32)/z;
	for(int x=32;x<=32+b;x++){
		for(int y=0;y<z;y++){
			a=x+y*(b+1);
			if(a<=126){
				if(a<100) printf("0%d 0x%x %c ",a,a,a);
				else printf("%d 0x%x %c ",a,a,a);
			}
		}
		printf("\n");
	}

	return 0;
}
