#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void tach(char *c, char res[100][30], int *size){
    int i=0;
    char *p;
    const char *delim=" ,.:;!?\t\n";
    for(p=strtok(c, delim); p!=NULL; p=strtok(NULL, delim)){
        strcpy(res[i++], p);
    }
    *size=i;
}
void sapXep(char res[100][30], int size){
    int i, j;
    for(i=0; i<size-1; i++){
        for(j=size-1; j>i; j--){
            if(strcmp(res[j], res[j-1])<0){
                char *p=(char *)malloc(30);
                strcpy(p, res[j]);
                strcpy(res[j], res[j-1]);
                strcpy(res[j-1], p);
            }
        }
    }
}
void hienthi(char res[100][30], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%s s", res[i]);
    }
}
int main(){
    char c[1000];
    fgets(c, 999, stdin);
    int len=strlen(c);
    if(len>0){
        c[len-1]='\0';
    }
    int size=0;
    char res[100][30];
    tach(c, res, &size);
    sapXep(res, size);
    hienthi(res, size);
    return 0;
}