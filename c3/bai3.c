#include<stdio.h>
void nhap(int *arr, int *n){
    *n=0; 
    while(*n <= 0){
        printf("nhap n > 0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n ;i++){
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void sapXepTang(int *arr, int n){
    int i, j;
    for(i=0; i< n-1; i++){
        for(j=n-1; j>i;j--){
            if(arr[j]<arr[j-1]){
                int tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
            }
        }
    }
}
void sapXepGiam(int *arr, int n){
    int i, j;
    for(i=0; i< n-1;i++){
        for(j=n-1; j>i; j--){
            if(arr[j]>arr[j-1]){
                int tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
            }
        }
    }
}
void hienthi(int *arr, int n){
    int i;
    for(i=0; i< n ;i++){
        printf("%5d", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100], n;
    nhap(arr, &n);
    printf("\ntruoc sap xep : ");
    hienthi(arr, n);
    printf("\nsap Xep tang : ");
    sapXepTang(arr, n);
    hienthi(arr, n);
    printf("\n sap Xep giam : ");
    sapXepGiam(arr, n);
    hienthi(arr, n);
    return 0;
}