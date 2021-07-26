#include<stdio.h>
void nhap(int *arr, int *n){
    *n=0;
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n ;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
int  nhapK(int n){
   int   k=-1;
    while(k<0 || k>=n){
        printf("nhap k ");
        scanf("%d", &k);
    }
    return k;
}
void xoaK(int *arr, int n, int k){
    int i;
    for(i=k; i< n-1;i++){
        arr[i]=arr[i+1];
    }
    n-=1;
}
void hienThi(int *arr, int n){
    int i;
    for(i=0; i< n ;i++){
        printf("%5d", arr[i]);
    }
}
int main(){
    int arr[100], n;
    nhap(arr, &n);
    int k=nhapK(n);
    xoaK(arr, n, k);
    hienThi(arr, n-1);
    return 0;
}