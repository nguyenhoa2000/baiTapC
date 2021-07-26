//chuyen doi sang kieu long;
#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *str=" 100969phatbeo";
    char *p;
    long l;
    l=strtol(str, &p, 16);
    printf("\ngia tri cua long sau khi chuyen doi %ld",l );
    printf("\ngia tri khong the chuyen doi %s", p);

    return 0;
}