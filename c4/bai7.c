#include<stdio.h>
#include<string.h>
int isWhiteSpace(char c){
    return (c==' ' || c=='\t' || c=='\n');
}
int longestWords(char *c, int *leng){
    int words=0;
    int wordsmax=0;
    int posNow=0;
    int posmax=0;
    int i;
    int size=strlen(c);
    for(i=0; i<size;i++){
        if(!isWhiteSpace(c[i])){
            posNow=i-words;
            words++;
        }else{
            if(words>wordsmax){
                wordsmax=words;
                posmax=posNow;
            }
            words=0;
        }
    }
    *leng=wordsmax;
    return posmax;
}
void hienThi(char *c, int leng, int pos){
    int size=strlen(c);
    int i;
    for(i=pos; i<=pos +leng;i++){
        printf("%c", c[i]);
    }
     printf(" \nvi tri %d ,do dai  %d",pos, leng );
}
int main(){
    char c[100];
    fgets(c, 99, stdin);
    int leng=0;  
   int pos= longestWords(c, &leng);
    hienThi(c, leng, pos);
    return 0;
}