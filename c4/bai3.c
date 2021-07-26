#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int chuyenDoi(char *c){
    int i;
    char x[11];
    strcpy(x, c);
    strrev(c);
    return (strcmp(x, c))==0;
}
int main(){
    char c[11];
    long i;
    for(i=100000001; i<=999999999; i++){
        ltoa(i, c, 10);
        if(chuyenDoi(c)){
            printf("%10ld", i);
        }
    }
    return 0;
}