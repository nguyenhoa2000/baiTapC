#include<stdio.h>
void nhap(int *arr, int *n ){
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d",n);
    }
    int i;
    for(i=0; i<*n; i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void hienThi(int *arr, int n){
    int i;
    for(i=0; i< n;i++){
        printf("%5d",arr[i]);
    }
}
int nhapK(int n){
   int k=-1;
    while(k<0 || k>=n){
        printf("\nnhap k ");
        scanf("%d", &k);
    }
    return k;  
}
void xoaK(int *arr, int n , int k){
    int i;
    for(i=k; i< n-1;i++){
        arr[i]=arr[i+1];
    }
    n-=1;
}
int main(){
    int n=0, arr[100];
    nhap(arr, &n);
   int k= nhapK(n);
    xoaK(arr, n , k);
    hienThi(arr, n-1);
    return 0;
}