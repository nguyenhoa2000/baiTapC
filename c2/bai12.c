#include<stdio.h>
#include<ctype.h>
//ham tra ve isspace \n \t \f \v \r;
int main(){
    printf("nhap  c");
    char c = getchar();
    if(isspace(c)){
        printf("\nthis is space");
    }else printf("\nthis is not space ");
    return 0;
}