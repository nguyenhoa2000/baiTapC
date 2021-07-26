#include<stdio.h>
#include<ctype.h>
//ham tra ve ki tu thuong islower;
int main(){
    printf("nhap c");
    char c=getchar();
    if(islower(c)){
        printf("\nthis is lower ");
    }else printf("\nthis is not lower");
    return 0;
}