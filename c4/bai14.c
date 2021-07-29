#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void countDown(char *c, int pos, int len){
    int size=strlen(c);
    int i;
    for(i=pos; i<=size-len; i++){
        c[i]=c[i+len];
    }
}
void delete(char *c, char *s ){
    int i;
    int len=strlen(s);
    for(i=0; c[i]!='\0'; i++){
        if(strstr(&c[i], s)== &c[i]){
            countDown(c, i, len);
            i--;
        }
    }
}
int main(){
    char c[1000];
    fgets(c, 999, stdin);
    char s[100];
    fgets(s, 99, stdin);
    int size=strlen(c);
    int sizeS=strlen(s);
    if(size>0){
        c[size-1]='\0';
    }
    if(sizeS){
        s[sizeS-1]='\0';
    }
    delete(c, s);
    puts(c);
    return 0;
}