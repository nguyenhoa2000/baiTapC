#include<stdio.h>
void nhap(int *arr, int *n){
    *n=0;
    while(*n<=0){
        printf("nhap n >0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i<*n-1; i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
int  nhapK(int n){
    int k=-1;
    while(k<0 || k>=n){
        printf("nhap k");
        scanf("%d", &k);
    }
    return k;
}
void chenX(int *arr, int n, int x, int k){
    int i;
    for(i=n-1; i>k; i--){
        arr[i]=arr[i-1];
    }
    arr[k]=x;
}
void hienThi(int *arr, int n){
    int i;
    for(i=0;i <n;i++){
        printf("%5d", arr[i]);
    }
}
int main(){
    int arr[100], n;
    int x;
    nhap(arr, &n);
   int k= nhapK(n);
    printf("\nnhap x");
    scanf("%d", &x);
    chenX(arr, n,x, k);
    hienThi(arr, n);
    return 0;
}