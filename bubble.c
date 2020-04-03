#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graphe(int tab[], int len){
        int a=0;
        for(int p=0;p<len;p++) if(tab[p]>a) a=tab[p];
        for(int x=a;x>0;x--){
                for(int y=0;y<len;y++){
                        if(x<=tab[y]) printf(". ");
                        else printf("  ");
                }
                printf("\n");
        }
}

int verif(int tab[],int l){
        int a=0;
        for(int x=1;x<l;x++){
                if(tab[x]<tab[x-1]){
                        a=1;
                        break;
                }
        }
        return a;
}

void aff(int tab[],int l){
        for(int x=0;x<l;x++) printf("%d ",tab[x]);
}

int bubblesort(int tab[],int l){
        int a=0,b=0,x=0,gl=0;
        while(verif(tab,l)){
                gl++;
                for(x=1;x<l;x++){
                        a=tab[x-1];
                        b=tab[x];
                        if(b<a){
                                tab[x]=a;
                                tab[x-1]=b;
                        }
                }
                //graphe(tab,l);
                //printf("\n");

        }
        return gl;
}

void remp(int tab[],int l){
        for(int x=0;x<l;x++) tab[x]=rand()%11+10;
}


int main(){

        srand(time(NULL));

        int a=20,tab[a],gl=0;
//for(int x=0;x<a;x++) tab[x]=10-x;
//tab[4]=1;
        remp(tab,a);

        aff(tab,a);

        printf("\n\n");



//      printf("________________________\n\n");

        gl=bubblesort(tab,a);
        graphe(tab,a);
printf("\n");
        aff(tab,a);


        printf("\n\n%d",gl);
        printf("\n");


        return 0;
}
