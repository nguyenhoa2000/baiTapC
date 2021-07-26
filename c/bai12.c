#include<stdio.h>
void nhap(int *arr, int *n){
    while(*n<=0){
        printf("nhap n>o");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<*n-1;i++){
        printf("\narr[%d]= ", i);
        scanf("%d",&arr[i]);
    }
}
int nhapK(int n){
    int k=-1;
    while(k<0 ||k>=n){
        printf("\nnhap k");
        scanf("%d",&k);
    }
    return k;
}
void chenX(int *arr, int n, int k, int x){
    int i;
    for(i=n-1;i>k;i--){
        arr[i]=arr[i-1];
    }
    arr[k]=x;
}
void hienThi(int *arr, int n ){
    int i;
    for(i=0 ;i<n ;i++){
        printf("%5d",arr[i]);
    }
}
int main(){
    int arr[100],  n=0;
    int k, x;
    nhap(arr, &n);
   k= nhapK(n);
    printf("\nnhap x");
    scanf("%d",&x);
    chenX(arr, n, k, x);
    hienThi(arr, n);

    return 0;
}