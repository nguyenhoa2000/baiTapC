#include<stdio.h>
#include<string.h>
#include<ctype.h>
void wordsA(char *c){
    int i;
    int size=strlen(c);
    for(i=0 ; i<size-1; i++){
        c[i]=toupper(c[i]);
    }
    printf("%s", c);
}
void wordsa(char *c){
    int i;
    int size=strlen(c);
    for(i=0; i< size-1; i++){
        c[i]=tolower(c[i]);
    }
    printf("%s", c);
}
int main(){
    char c[100];
    fgets(c, 99, stdin);
    printf("viet hoa chuoi : ");
    wordsA(c);
    printf("\nviet thuong chuoi: ");
    wordsa(c);
    return 0;
}