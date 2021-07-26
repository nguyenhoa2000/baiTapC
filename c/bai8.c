#include<stdio.h>
#include<stdbool.h>
bool kTraDX1(int  *arr , int n){
    int i;
    for(i=0; i<n;i++){
        if(arr[i]==arr[n-(i+1)]){
            return true;
        }
    }
    return false;
}
void nhap(int *arr, int *n  ){
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i<*n;i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}

int main(){
    int arr[100];
    int n=0;
    nhap(arr, &n);
    if(kTraDX1(arr, n)){
        printf("\nday la mang doi xung");
    }else{
        printf("\nday khong phai mang doi xung");
    }
    return 0;
}