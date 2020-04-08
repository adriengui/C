#include <stdio.h>

void aff(int *i,int l){

    for(int x=0;x<l;x++) if(i[x] != 0) printf("%d ",i[x]);
}

void erato(int *a, int t){
    for(int x=0;x<t;x++){
        if(a[x] != 0){
            for(int y=x+1;y<t;y++) if(a[y]%a[x]==0) a[y]=0;
        }
    }
}

int main(){


    int t=200,a[t];

    for(int x=0;x<t;x++) a[x]=x+2;

    erato(a,t);

    aff(a,t);

    printf("\n\n");

    int zz=0;

    for(int x=0;x<t;x++) if(a[x]!=0) zz++;
    printf("%d\n\n",zz);


    return 0;
}
