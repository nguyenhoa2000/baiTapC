//chuyen sang unsigned long;
#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *str= "100488phatbeo";
    char *p;
    unsigned long l;
    l=strtoul(str,&p, 2 );
    printf("\ngia tri sau khi chuyen doi %lu", l);
    printf("\ngia tri khong the chuyen doi %S", p);
    return 0;
}