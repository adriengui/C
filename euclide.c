#include <stdio.h>

int g=0;

int euclide(int a, int b){
    // g++;
    if(a%b==0) return b;
    else return euclide(b,a%b);
}

int main(){

int a=2523,b=1;

for(int x=1;x<200;x++) printf("  %d   %d\n",x,euclide(x,b*2));

    //printf("%d\n\n\n",euclide(b,a));

    // printf("%d\n\n\n",g);

    return 0;
}
