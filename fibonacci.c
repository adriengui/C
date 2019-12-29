#include <stdio.h>

int main(){

int a=0,b=1,c=0;
printf("%d %d ",a,b);
while(c<89){
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
}
printf("\n");

	return 0;
}
