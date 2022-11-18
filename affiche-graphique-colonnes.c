#include <stdio.h>

int main() {
	int val[6]={5, 9, 7, 3, 14, 8};
	int len=sizeof(val)/sizeof(int), max=val[0], i, j;
	
	for(i=1;i<len;i++) 
		if(val[i]>max) 
			max=val[i];
	
	for(i=max;i>0;i--) {
		for(j=0;j<len;j++) {
			if(i<=val[j]) 
				printf("* ");
			else 
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}
