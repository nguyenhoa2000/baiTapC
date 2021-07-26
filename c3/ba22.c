#include<stdio.h>
void nhap(int arr[50][50], int *m ,int *n){
    *m=0, *n=0;
    while(*m <= 0 && *n<=0){
        printf("nhap m , n duong");
        scanf("%d%d", m, n);
    }
    int i, j;
    for(i=0; i< * m ;i++){
        for(j=0; j <*n ;j++){
            printf("\narr[%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void tich(int a[50][50], int b[50][50], int s[50][50], int m, int n, int k){
    int i, j, l;
    for(i=0; i< m ;i++){
        for(j=0; j< k ;j++){
            for(l=0; l <n; l++){
                s[i][j]= a[i][l] * b[l][j];
            }
        }
    }
}
void hienThi(int a[50][50], int m, int n){
    int i, j;
    for(i=0; i< m ;i++){
        for(j=0; j<n ;j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[50][50], b[50][50], s[50][50];
    int ma, na, mb, nb;
    nhap(a, &ma, &na);
    nhap(b, &mb, &nb);
    if(na!=mb){
        printf("\nkhong ton tai tich cua  2 mang\n");
    }else{
        tich(a, b, s, ma, na, nb);
        printf("\nhien mang a\n");
        hienThi(a,ma, na);
        printf("\nhien thi mang b\n");
        hienThi(b, mb, nb);
        printf("tich cua 2 mang\n");
        hienThi(s, ma, nb);
    }
    return 0;
}