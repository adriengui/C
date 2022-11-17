#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compteLettre(char lettre, char *str){
        int l=lettre,nb=0;
        for(int x=0;x<strlen(str);x++) if(str[x]==l || str[x]==l-32) nb++;
        return nb;
}

void analyseMot(char *str){
	int alpha[26];
        for(int x=0;x<26;x++) alpha[x]=0;
        for(int x=0;x<26;x++){
                char a[2]="";
                sprintf(a,"%c",x+97);
                alpha[x]=compteLettre(a[0],str);
        }
        for(int x=0;x<26;x++){
                char a[2]="";
                sprintf(a,"%c",x+97);
                printf("%c -> %d\n",a[0],alpha[x]);
        }

	int b=0,c=0;
	for(int x=0;x<26;x++){
		if(alpha[x]>c){
			c=alpha[x];
			b=x;
		}
	}
	char a[2]="";
	sprintf(a,"%c",b+97);
	printf("\nCaractère le plus utilisé : %c\n",a[0]);


}

int main(){
//	printf("Phrase à analyser :\n");
	char *str="phrase de test pour analyse de phrase";
//	scanf("%s",str);
	printf("%s\n",str);

	analyseMot(str);


	return 0;
}
