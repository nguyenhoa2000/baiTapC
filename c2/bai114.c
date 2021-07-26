//ham chuyen doi tu ky tu sau sang double;
#include<stdio.h>
#include<stdlib.h>
int main(){
    const char *ptr= "     485858858.8658fuckYou";
    char *p;
    double d;
    d = strtod(ptr , &p);//chuyen tu gia tri sau sang double;

    printf(" gia tri cua double sau khi chuyen doi = %lf", d);
    printf("\nphan con lai ko the chuyen doi %s", p);
    return 0;
}

