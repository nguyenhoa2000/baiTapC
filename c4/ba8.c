#include<stdio.h>
#include<string.h>
int isWhiteSpace(char c){
    return (c==' ' || c=='\t' ||c=='\n');
}
int specialcharacter(char c){
    return (c==',' ||c=='.' ||c=='?' ||c=='!');
}
int firtsSpace(char *c){
    int size=strlen(c);
    int i;
    for(i=0; i<size; i++){
        if(c[i]==' '){
            return i;
        }
    }
    return -1;
}
int lastSapace(char *c ){
    int size=strlen(c);
    int i;
    for(i=size-1;i>=0;i--){
        if(c[i]==' '){
            return i;
        }
    }
    return -1;
}
void hienThi(char *c){
    int size=strlen(c);
    int i;
    int first=firtsSpace(c);
    int last=lastSapace(c);
    for(i=last+1; i<size-1; i++){
        printf("%c", c[i]);
    }
    for(i=first; i<=last ;i++){
        printf("%c", c[i]);
    }
    for(i=0; i<first;i++){
        printf("%c", c[i]);
    }
}
void deleteAllLast(char *c){
    int size=strlen(c);
    int i=size-1;
    while(isWhiteSpace(c[i])){
        c[i]='\0';
        i--;
    }
}
void deleteAllFirst(char *c){
    int count=0;
    int size=strlen(c);
    int i;
    for(i=0; i<size ;i++){
        if(isWhiteSpace(c[i])){
            count++;
        }else{
            break;
        }
    }
    for(i=0; i<=size-count; i++){
        c[i]=c[i+count];
    }
}
void deleteMid(char *c ){
    int size=strlen(c);
    int i, j;
    for(i=0; i<size;i++){
        if(isWhiteSpace(c[i]) && isWhiteSpace(c[i+1])){
            for(j=i+1;i<size; j++){
                c[j]=c[j+1];
                i--;
                size--;
            }
        }else if(isWhiteSpace(c[i]) && specialcharacter(c[i+1])){
            for(j=i; j<size;j++){
                c[j]=c[j+1];
                i--;
                size--;
            }
        }
    }
}
int main(){
    char c[100];
    fgets(c, 99, stdin);     
    hienThi(c);
 
    return 0;
}