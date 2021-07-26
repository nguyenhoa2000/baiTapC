#include<stdio.h>
void nhap(int *a, int *n){
    *n=-1;
    while(*n<0){
        printf("nhap n >0");
        scanf("%d" ,n);
    }
    int i;
    for(i=0; i<=*n; i++){
        printf("\na%d= ", i);
        scanf("%d", &a[i]);
    }
}
double  tinhGTBT(int *a,int n ){
    double x;
    printf("\nnhap x");
    scanf("%lf", &x);
    int  i;
    double  sum=a[0];
    double xMuI=1;
    for(i=1; i<=n ;i++){
        xMuI*=x;
       sum+=a[i]*xMuI;
    }
    return sum;
}
int main(){
    int a[101], n;
    nhap(a, &n);
  double sum=  tinhGTBT(a, n);
  printf("\ngia tri bieu thuc la  %5lf ", sum);
    return 0;
}