#include<stdio.h>
#include<ctype.h>
//ky tu chu so isdigit;
int main(){
    printf("nhap c");
    char c= getchar();
    if(isdigit(c)){
        printf("\nthis is digit");
    }else printf("\nthis is not digit");
}