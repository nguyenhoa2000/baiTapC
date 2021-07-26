#include<stdio.h>
#include<ctype.h>
//ham bien ki tu thuong thanh ki tu hoa toupper;
int main(){
    printf("nhap c");
    char c=getchar();
    if(isupper(c)){
        printf("\nthis is upper");
    }else printf("\n%c this is after using toupper ", toupper(c));
    return 0;
}