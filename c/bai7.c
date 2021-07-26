#include<stdio.h>
void nhap(int *arr, int *n){
    while(*n<=0){
        printf("\nnhap n>0");
        scanf("%d",n);
    }
    int i;
    for(i=0; i< *n; i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void nhapAB(int *a, int *b){
    while(1){
        printf("\nnhap a<b , a>0");
        scanf("%d%d", a,b);
        if(*a <*b){
        break;
        }
    }
}
int Tong(int *arr, int n , int a , int b){
    int sum=0;
    int i;
    for(i=0; i<n;i++){
        if(arr[i]>=a && arr[i]<=b){
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    int arr[100];
    int n=0;
    int a, b;   
    nhap(arr, &n);    
    nhapAB(&a , &b);
    int sum=Tong(arr, n ,a, b);
    printf("\ntong cac so trong doan ab la %5d", sum);
    return 0;
}