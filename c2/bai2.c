#include<stdio.h>
int main(){
    char c= getchar();
    printf("\n%d", c);
    printf("\n%c", c);
    char str[15];
    fflush(stdin);
    gets(str);
    printf("\n%s", str);
    return 0;
}