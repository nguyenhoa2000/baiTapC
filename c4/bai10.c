#include<stdio.h>
#include<string.h>
void hienThi(char s[100][20], int size);
void tachTu(char *c){
    int i=0;
    char res[100][20];
    char *p;
    const char *delim = " ,.?!:;\t\n";
    for(p=strtok(c, delim); p!=NULL; p=strtok(NULL, delim)){
        strcpy(res[i++], p);
    }
    hienThi(res, i );
}
void hienThi(char s[100][20], int size){
    int i;
    for(i=size-1; i>=0;i--){
        printf("%s ", s[i]);
    }
}
int main(){
    char c[1000];
    fgets(c, 999, stdin);
    tachTu(c);
    return 0;
}