#include<stdio.h>
void nhap(int *arr, int *n){
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i<*n;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void sapXepTang(int *arr, int n){
    int i, j;
    for(i=0; i<n-1; i++){
        for(j=n-1; j>i; j--){
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
    for(i=0; i<n-1; i++){
        for(j=n-1; j>i; j--){
            if(arr[j]>arr[j-1]){
                int tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
            }
        }
    }
}
void hienThi(int *arr, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%5d", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100];
    int n=0;
    nhap(arr, &n);
    printf("\ntruoc khi sap xep ");
    hienThi(arr, n);
    printf("\nsau khi sap xep tang ");
    sapXepTang(arr, n);
    hienThi(arr, n);
    printf("\nsap xep giam ");
    sapXepGiam(arr, n);
    hienThi(arr, n);

    return 0;
}