#include<stdio.h>
#include<stdbool.h>
void nhap(int *arr ,int *n){
    *n=0;
    while(*n <=0){
        printf("nhap n >0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n ;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
bool mangDX(int *a, int n){
    int i;
    for(i=0; i<n ;i++){
        if(a[i]==a[n-(i+1)]){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[100], n;
    nhap(arr, &n);
    if(mangDX(arr, n)){
        printf("\nthis is symmetrical array");
    }else printf("\n this is not smmetrical array");
    return 0;
}