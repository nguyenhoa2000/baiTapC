#include<stdio.h>
void nhap(int *arr, int *n){
    *n=-1;
    while(*n<0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i<= *n; i++){
        printf("\nnhap he so x^%d",i );
        scanf("%d", &arr[i]);
    }
}
void khoiTao(int *arr, int n){
    int i;
    for(i=0; i< n ;i++){
        arr[i]=0;
    }
}
void tong(int *a , int m, int *b, int n, int *s, int *k){
     *k=(m > n) ? m : n;
    int i;
    for(i=1; i<= *k ;i++){
        s[i]= a[i] +b[i];
    }
}
void hienThi(int *arr, int n){
    int i;
    for(i=0; i<=n; i++){
        printf("%dx^%d", arr[i], i);
        if(i<=n && arr[i+1]>0){
            printf(" + ");
            } else if(arr[i+1]<0){
                printf(" ");

        }
    }
}
int main(){
    int a[100], b[100], c[100];
    int m, n, k;
    khoiTao(a, 100);
    khoiTao(b, 100);
    printf("\nnhap bieu thuc p(x)\n");
    nhap(a, &m);
    printf("\nnhap bieu thuc Q(x)\n");
    nhap(b, &n);
    tong(a, m, b, n, c, &k);
    printf("\nS(x)= ");
    hienThi(c, k);
    return 0;
}
