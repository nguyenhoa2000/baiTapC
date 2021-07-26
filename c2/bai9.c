#include<stdio.h>
#include<ctype.h>
//ham tra ve ky tu hoa isupper false trong cac truong hop con lai;
int main(){
    printf("nhap c");
    char c= getchar();
    if(isupper(c)){
        printf("\nthis is to upper");
    }else printf("\nthis is not upper");
    return 0;
}