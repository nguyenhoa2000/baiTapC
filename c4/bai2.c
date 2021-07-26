#include<stdio.h>
#include<string.h>
int isWhiteSpace(char c){
    return (c==' '|| c=='\t' || c=='\n');
}
int  countWords(char *c){
    int size=strlen(c);
    int count=0;
    int i;
    for(i=0; i< size-1; i++){
        if(!isWhiteSpace(c[i]) && isWhiteSpace(c[i+1]) || !isWhiteSpace(c[i]) && !isWhiteSpace(c[i+1]) && i+1==size-1){
            count++;
        }
    }
    return count;
}
int main(){
    char c[100];
    fgets(c, 99, stdin);
    int result= countWords(c);
    printf("%d", result);
    return 0;
}