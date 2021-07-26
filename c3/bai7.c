#include<stdio.h>
void nhap(int *arr ,int *n){
    *n=0;
    while(*n<=0){
        printf("nhap n >0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n; i++){
        printf("arr[%d= ", i);
        scanf("%d", &arr[i]);
    }
}
void  nhapAB(int *a, int *b){
    while(1){
        printf("nhap a b duong , a<b");
        scanf("%d%d",a, b);
        if(*a< *b){
            break;
        }
    }
}
int  tong(int *arr ,int n, int a, int b){
    int sum=0;
    int i;
    for(i=0; i< n ;i++){
        if(arr[i]>=a && arr[i]<= b){
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    int arr[100], n;
    nhap(arr, &n);
    int a, b;
    nhapAB(&a, &b);
    int sum=tong(arr, n , a, b);
    printf(" \ntong trong trong doan a b la %5d", sum);
    return 0;
}