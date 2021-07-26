#include<stdio.h>
#include<ctype.h>
int main(){
    printf("nhap c");
    char c= getchar();
    if(islower(c)){
        printf("\nthis is lower");
    }else printf("%c this is after using tolower", tolower(c));
    return 0;
}