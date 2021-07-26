#include<stdio.h>
void hienThi(int *b , int *dem , int n);
void nhap(int *arr ,int *n){
    *n=0;
    while(*n<= 0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i<*n;i++){
        printf("\narr[%d]= ", i);
        scanf("%d",&arr[i]);
    }
}

int chuaXH(int *arr, int n, int v ){
    int i;
    for(i=0; i< n;i++){
        if(arr[i]==v){
            return i;
        }
    }
    return -1;
}
void soLanXH(int *arr, int n){
    int b[100], dem[100];
    int i, size=0;
    for(i=0; i< n; i++){
        dem[i]=0;
    }
    for(i=0; i<n; i++){
        int index=chuaXH(b, size, arr[i]);
        if(index==-1){
            b[size]=arr[i];
            dem[size]=1;
            size++;
        }else{
            dem[index]++;
        }
    }
    hienThi(b, dem, size);
} 
void hienThi(int *b , int *dem , int n){
    printf("\ngia tri, chi so");
    int i;
    for(i=0; i< n;i++){
        printf("\n%d\t%d", b[i], dem[i]);
    }
}

int main(){
    int arr[100], n;
    nhap(arr ,&n);
    soLanXH(arr, n);

    return 0;
}