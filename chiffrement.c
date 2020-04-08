#include <stdio.h>

int pos(char a, char *s){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==a) break;
        i++;
    }
    if(s[i]=='\0') i=-1;
    return i;
}

int lon(char *s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

void decale(char *a, char *b, int u){
    int z=lon(a);
    for(int x=0;x<z;x++) b[x]=a[(x+u)%z];
}

void chiffre(char *a, char *b, char *c){
    int i=0,y=0;
    while(a[i]!='\0'){
        y=pos(a[i],b);
        if(y != -1) a[i]=c[y];
        i++;
    }
}

void dechiffre(char *a, char *b, char *c){
    int i=0,y=0;
    while(a[i]!='\0'){
        y=pos(a[i],c);
        if(y != -1) a[i]=b[y];
        i++;
    }
}

int main(){

    char a[40]="bonjour a tous";
    // char b[40]="";

    printf("%s\n\n",a);

    char alpha[40]="abcdefghijklmnopqrstuvwxyz ";

    char code[40]="";

    decale(alpha,code,26);

    chiffre(a,alpha,code);

    printf("%s\n\n",a);

    dechiffre(a,alpha,code);

    printf("%s\n\n",a);

    return 0;
}
