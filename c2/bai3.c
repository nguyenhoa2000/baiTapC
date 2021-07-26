#include<stdio.h>
#include<ctype.h>
//khoang trang isbank;
int main(){
    char c=' ';
    if(isblank(c)){
        printf("this is blank");
    }else printf("this is not blank");
    return 0;
}