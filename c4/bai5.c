#include<stdio.h>
#include<string.h>
#include<ctype.h>
void countDiscriminate(char *c){
    int i;
    char b[97 +26]={0};
    int size=strlen(c);
    for(i=0; i<size ;i++){
        c[i]=tolower(c[i]);
        b[c[i]]++;
    }
    for(i=97; i<123 ;i++){
        printf("%c _ %d\n", (char)i, b[i]);
    }
}
void count(char *c){
    int i;
    char b[97 +26]={0};
    int size=strlen(c);
    for(i=0; i<size ;i++){
        b[c[i]]++;
    }
    for(i=65; i<91 ;i++){
        printf("%c _ %d\n", (char)i, b[i]);
    }
    for(i=97; i<123 ;i++){
        printf("%c _ %d\n", (char)i, b[i]);
    }
}
int main(){
    char c[100];
    fgets(c, 99, stdin);
    count(c);
    countDiscriminate(c);
    return 0;
}