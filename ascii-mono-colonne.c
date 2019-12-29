#include <stdio.h>

int main(){

for(int x=32;x<=126;x++){
	if(x<100) printf("0%d %c\n",x,x);
	else printf("%d %c\n",x,x);
}

	return 0;
}
