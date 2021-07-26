#include<stdio.h>
void nhap(int arr[50][50], int m ,int n){
    int i, j;
    for(i=0; i< m ;i++){
        for(j=0; j< n ; j++){
            printf("\narr[%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void nhapMN(int *m , int *n){
     *m=0, *m=0;
    while(*m <=0 && *n<=0){
        printf("nhap m , n>0");
        scanf("%d%d", m ,n);
    }
}
void tong(int a[50][50], int m , int n , int b[50][50], int s[50][50] ){
    int i, j;
    for(i=0; i< m; i++){
        for(j=0; j< n; j++){
            s[i][j]= a[i][j] + b[i][j];
        }
    }
}
void hienThi(int s[50][50], int m , int n){
    int i, j;
    for(i=0; i< m ;i++){
        for(j=0; j <n ;j++){
            printf("%5d", s[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[50][50], b[50][50], s[50][50], n, m;
    nhapMN(&m, &n);
    printf("\nnhap mang a \n");
    nhap(a, m, n);
    printf("\nnhap mang b \n");
    nhap(b, m ,n);
    tong(a, m, n, b, s);
    printf("\nS = \n");
    hienThi(s, m, n);
    return 0;
}