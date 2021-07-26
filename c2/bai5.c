#include<stdio.h>
#include<ctype.h>
//tra ve ky tu isalpha;
int main(){
    printf("nhap c");
    char c= getchar();
    if(isalpha(c)){
        printf("\nthis is alpha");
    }else printf("\nthis is not alpha");
    return 0;
}