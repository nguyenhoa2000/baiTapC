#include<stdio.h>
void nhap(int *a, int *n){
    *n= -1;
    while(*n < 0){
        printf("nhap bac cua da thuc");
        scanf("%d", n);
    }
    int i;
    for(i=0; i<=*n; i++){
        printf(" x^%d= ", i);
        scanf("%d", &a[i]);
    }
}
void khoiTao(int *a ,int n){
    int i;
    for(i=0; i< n; i++){
        a[i]=0;
    }
}
void tong(int *a, int m, int *b, int n, int *S, int *k){
    *k=(m > n) ? m : n ;
    int i;
    for(i=0; i<=*k; i++){
        S[i]=a[i]+b[i];
    }
}
void hienThi(int *a, int n ){
    int i;
    for(i=n; i>=0; i--){
        printf("%dx^%d", a[i], i);
        if(i>0 && a[i-1]>0 ){
            printf(" + ");
        }else if(a[i-1]<0){
            printf(" ");
        }
    }
}
int main(){
    int p[100], q[100], S[100];
    int m, n, k;
    khoiTao(p, 100);
    khoiTao(q, 100);
    printf("\nthong tin bieu thuc p\n");
    nhap(p, &m);
    printf("\nthong tin bieu thuc q\n");
    nhap(q, &n);
    tong(p, m, q, n, S, &k);
    printf("S(x)= ");

    hienThi(S, k);
    return 0;
}