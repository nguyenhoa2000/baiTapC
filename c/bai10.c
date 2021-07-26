#include<stdio.h>
#include<stdbool.h>
int nhap(int *arr, int *n){
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
bool chuaXH(int *b, int n, int v){
    int i;
    for(i=0; i<n ;i++){
        if(b[i]==v){
            return false;
        }
    }
    return true;
}
void xuatHien1(int *arr, int n ){
    int i;
    int b[100];
    int count=0;
    for(i=0; i<n;i++){
        if(chuaXH(b, count ,arr[i] )){
            printf("%4d", arr[i]);
            b[count++]=arr[i];
        }
    }
}
int main(){
    int n=0;
    int arr[100];
    nhap(arr, &n);
    xuatHien1(arr, n);
    return 0;
}
