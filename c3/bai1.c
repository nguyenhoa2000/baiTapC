#include<stdio.h>
void nhap(int *arr ,int *n){
    *n=0;
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n ;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void minMax(int *arr, int n , int *min, int *max){
    *min=arr[0], *max=arr[0];
    int i;
    for(i=0; i< n;i++){
        if( *min >arr[i]){
            *min= arr[i];
        } 
         if( *max < arr[i]){
            *max = arr[i];
        } 
    }
}
void ketQua(int min , int max){
    if(min==max){
        printf("khong co gia tr lon nhat");
    }else printf("min = %d\n max=%d", min , max);
}
int main(){
    int arr[100], n;
    int min ,max;
    nhap(arr ,&n);
    minMax(arr, n, &min ,&max);
    ketQua(min, max);

    return 0;
}