#include<stdio.h>
void nhap(int *a, int *n){
    *n=-1;
    while(*n<0){
        printf("nhap n >0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i<= *n ;i++){
        printf("\na%d= ", i);
        scanf("%d", &a[i]);
    }
}
double tinhDaoHam(int *a, int n){
    double x;
    printf("\nnhap x>0 ");
    scanf("%lf", &x);
    int i;
    double xMuJ=1;
    double sum=a[1];
    for(i=2;i <=n; i++ ){
        xMuJ*=x;
        sum+=a[i]*i*xMuJ;
    }
    return sum;
}
int main(){
    int a[100], n;
    nhap(a, &n);
    double sum=tinhDaoHam(a, n);
    printf("dao ham cua bieu thuc la %lf",sum);
    return 0;
}