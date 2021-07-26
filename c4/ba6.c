#include<stdio.h>
#include<string.h>
int isWhiteSpace(char c){
    return (c==' ' || c=='\t'|| c=='\n');
}
void dleteAllLast(char *c){
    int size=strlen(c);
    int i;
    for(i=size-1; i>=0; i--){
        if(isWhiteSpace(c[i])){
            c[i]='\0';
        }
        i--;
        size--;
    }
}
int main(){
    char c[100];
    fgets(c, 99, stdin);
    int frist=strlen(c);
    printf("%d", frist);;
    dleteAllLast(c);
    int last=strlen(c);
    printf("\n%d", last);
    return 0;
}