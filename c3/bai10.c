#include<stdio.h>
#include<stdbool.h>
void nhap(int *arr, int *n){
    *n=0;
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d" ,n);
    }
    int i;
    for(i=0; i< *n ;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
bool chuaXH(int *arr, int n, int x){
    int i;
    for(i=0; i< n;i++){
        if(arr[i]==x){
            return false;
        }
    }
    return true;
}
void hienThi(int *arr, int n){
    int b[100], count=0;
    int i;
    for(i=0; i< n;i++){
        if(chuaXH(b, count,arr[i] )){
            printf("%6d", arr[i]);
            b[count++]=arr[i];
        }
    } 
}
int main(){
    int arr[100], n;
    nhap(arr, &n);
    hienThi(arr, n);
    return 0;
}