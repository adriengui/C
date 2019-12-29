#include <stdio.h>


double serie(double a,double b){
	return a+b;
}

double para(double a,double b){
	return (a*b)/(a+b);
}

int main(){

	printf("%g\n",serie(para(100,serie(para(80,90),20)),200));

	return 0;
}
