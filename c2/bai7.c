#include<stdio.h>
#include<ctype.h>
int main(){
    printf("nhap c");
    char c=getchar();
    if(isxdigit(c)){
        printf("\nthis is xdigit");
    }else printf("\nthis is not xdigit");
    return 0;
}