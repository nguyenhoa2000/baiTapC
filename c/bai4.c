#include<stdio.h>
void nhap(int *arr, int *n){
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d",n);
    }
    int i;
    for(i=0; i<*n;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
int demX(int *arr, int n, int x){
    int count=0;
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
}
int main(){
    int n=0;
    int arr[100];
    int x;
    nhap(arr, &n);
    printf("\nnhap x");
    scanf("%d",&x);
    int dem=demX(arr, n ,x);
    printf("\nso lan x xuat hien trong mang %d", dem);
    return 0;
}