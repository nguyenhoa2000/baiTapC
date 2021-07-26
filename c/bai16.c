#include<stdio.h>
void nhap(int *a, int *n){
    *n=-1;
    while(*n<0){
        printf("nhap n");
        scanf("%d", n);
    }
    int i;
    for(i=0; i<=*n;i++){
        printf("\na%d= ", i);
        scanf("%d", &a[i]);
    }
}
double TinhGTBT(int *a, int n){
    double x;
    printf("/nnhap x");
    scanf("%lf", &x);
    double kq=a[0];
    double xMuI=1;
    int i;
    for(i=0; i<n ;i++){
        xMuI*=x;
        kq+=a[i]*xMuI;
    }
    return kq;
}
int main(){
    int a[101], n;
    nhap(a, &n);
    double kq=TinhGTBT(a, n);
    printf("gia tri cua bieu thuc la %lf", kq);
    return 0;
}