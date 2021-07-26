#include<stdio.h>
#include<ctype.h>
//
int main(){
    printf("nhap  c");
    char c = getchar();
    if(ispunct(c)){
        printf("\nthis is cntrl");
    }else printf("\nthis is not ");
    return 0;
}