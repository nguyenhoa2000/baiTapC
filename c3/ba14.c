#include<stdio.h>
void nhap(int *arr, int *n){
    *n=0;
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n-1; i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void sapXep(int *arr, int n){
    int i,j;
    for(i=0; i< n-1;i++){
        for(j=n-1; j>i; j--){
            if(arr[j]<arr[j-1]){
                int tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
            }
        }
    }
}
int chenk(int *arr, int n, int x){
    if( x < arr[0]){
        return 0;
    }
    if(x > arr[n-1]){
        return n;
    }
    int i;
    for(i=0; i< n;i++){
        if(x <= arr[i]){
            return i;
        }
    }
}
void chenX(int *arr, int n, int x , int k){
    int i;
    for(i=n-1;i >k; i-- ){
        arr[i]=arr[i-1];
    }
    arr[k]=x;
}
void hienThi(int *arr, int n){
    int i;
    for(i=0; i< n;i++){
        printf("%5d", arr[i]);
    }
}
int main(){
    int arr[100], n;
    nhap(arr, &n);
    sapXep(arr, n-1);
    int x;
    printf("nhap x");
    scanf("%d", &x);
    int k=chenk(arr, n ,x);
    chenX(arr, n, x, k);
    hienThi(arr, n);
    return 0;
}