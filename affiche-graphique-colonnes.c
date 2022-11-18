#include <stdio.h>

int main() {
	int tab[6]={5,9,7,3,14,8};
	int len=sizeof(tab)/sizeof(int), v=tab[0], i, j;
	
	for(i=1;i<len;i++) 
		if(tab[i]>v) 
			v=tab[i];
	
	for(i=v;i>0;i--) {
		for(j=0;j<len;j++) {
			if(i<=tab[j]) 
				printf("* ");
			else 
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}
