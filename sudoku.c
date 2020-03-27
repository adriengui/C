#include <stdio.h>

void aff(int a[9][9]){
    for(int x=0;x<9;x++){
        for(int y=0;y<9;y++) printf("%d  ",a[x][y]);
        printf("\n");
    }
}

void aff_var(int a[9][9]){
    for(int x=0;x<9;x++){
        printf("{");
        for(int y=0;y<9;y++){
            printf("%d",a[x][y]);
            if(y<8) printf(",");
        }
        printf("}");
        if(x<8) printf(",");
    }
}

int verif(int a[9][9],int b,int c,int n){
    int z=0;
    for(int x=(b/3)*3;x<(b/3)*3+3;x++) for(int y=(c/3)*3;y<(c/3)*3+3;y++) if(a[x][y]==n) z=1;
    for(int x=0;x<9;x++) if(a[b][x]==n) z=1;
    for(int y=0;y<9;y++) if(a[y][c]==n) z=1;
    if(a[b][c]==n) z=0;
    return z;
}

int nbz(int a[9][9]){
    int z=0;
    for(int x=0;x<9;x++) for(int y=0;y<9;y++) if(a[x][y]==0) z++;
    return z;
}

void remp(int pos[][2],int tab[9][9]){
    int a=0;
    for(int x=0;x<9;x++){
        for(int y=0;y<9;y++){
            if(tab[x][y]==0){
                pos[a][0]=x;
                pos[a][1]=y;
                a++;
            }
        }
    }
}

void res(int a[9][9],int b,int c){
    if(a[b][c]==9) a[b][c]=0;
    else{
        for(int x=a[b][c]+1;x<10;x++){
            if(verif(a,b,c,x)==0){
                a[b][c]=x;
                break;
            }
            a[b][c]=0;
        }
    }
}

void resolve(int tab[9][9]){
    int n=nbz(tab),pos[n][2],x=0;
    remp(pos,tab);
    while(x<n){
        res(tab,pos[x][0],pos[x][1]);
        if(tab[pos[x][0]][pos[x][1]]!=0) x++;
        else x--;
    }
}

int main(){

// FACILES
/*int facile1[9][9]={
{0,0,2,3,0,0,8,0,0},
{0,0,3,0,0,0,2,7,5},
{0,5,0,7,2,0,9,3,1},
{0,0,0,0,5,9,0,1,0},
{0,0,0,2,0,8,0,0,0},
{0,4,0,6,1,0,0,0,0},
{2,7,6,0,3,1,0,4,0},
{4,3,9,0,0,0,1,0,0},
{0,0,1,0,0,7,3,0,0}
};

int facile2[9][9]={
{0,5,0,9,0,0,0,0,8},
{0,8,6,0,1,7,2,5,0},
{0,3,0,0,5,4,0,0,0},
{0,0,0,0,9,6,8,0,1},
{0,0,3,0,0,0,6,0,0},
{8,0,9,1,2,0,0,0,0},
{0,0,0,2,7,0,0,8,0},
{0,2,4,6,8,0,9,7,0},
{7,0,0,0,0,5,0,6,0}
};*/

// DIFFICILES
int tab[9][9]={
{2,0,0,0,0,4,5,0,0},
{3,9,0,0,8,0,0,0,0},
{0,0,5,0,0,2,0,0,6},
{4,0,6,0,0,0,0,0,0},
{8,5,0,0,9,0,0,3,7},
{0,0,0,0,0,0,2,0,5},
{5,0,0,8,0,0,1,0,0},
{0,0,0,0,5,0,0,7,2},
{0,0,3,6,0,0,0,0,9}
};

aff(tab);
printf("\n\n");

resolve(tab);

aff(tab);

    return 0;
}
