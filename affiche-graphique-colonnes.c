#include <stdio.h>

int main(){
	int tab[6]={5,9,7,3,14,8};
	int len=sizeof(tab)/sizeof(tab[0]);
	int a=0;
	for(int p=1;p<len;p++) if(tab[p]>tab[p-1]) a=tab[p];
	for(int x=a;x>0;x--){
		for(int y=0;y<len;y++){
			if(x<=tab[y]) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}

	return 0;
}
