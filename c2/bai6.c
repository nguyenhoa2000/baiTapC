#include<stdio.h>
#include<ctype.h>
// tra ve ky tu chu cai hoac so isalnum;
int main(){
    printf("nhap c");
    char c=getchar();
    if(isalnum(c)){
        printf("\nthis is alnum");
    }else printf("\nthis is not alnum");
    return 0;
}