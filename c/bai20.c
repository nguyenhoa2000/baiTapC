#include<stdio.h>
void nhap(int a[50][50], int m, int n){
    int i, j;
    for(i=0;i< m ;i++){
        for(j=0; j< n; j++){
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void nhapMN(int *m , int *n){
    *n=0, *m=0;
    while(*n <= 0 && *m <= 0){
        printf("nhap m , n duong");
        scanf("%d%d",m, n );
    }
}
void tong(int a[50][50] , int m , int n , int b[50][50] , int s[50][50]){
    int i, j;
    for(i=0; i< m; i++){
        for(j=0; j< n ;j++ ){
            s[i][j]=a[i][j]+b[i][j];
        }
    }
}
void hienThi(int a[50][50], int m, int n){
    int i, j;
    for(i=0; i< m ;i++){
        for(j=0; j< n; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[50][50], b[50][50], s[50][50];
    int m, n;
    nhapMN( &m ,&n);
    printf("\nnhap mang a\n");
    nhap(a, m, n);
    printf("\nnhap mang b\n");
    nhap(b, m, n);
    tong(a,  m, n,b, s);
    printf("\ntong s\n");
    hienThi(s,m, n);
    return 0;
}