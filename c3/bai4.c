#include<stdio.h>
void nhap(int *arr, int *n){
    *n=0;
    while(*n <= 0){
        printf("nhap n >0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n ;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}

int demX(int *arr, int n, int x){
    int count=0;
    int i;
    for(i=0; i< n ;i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[100], n;
    int x;
    nhap(arr, &n);
    printf("\nnhap x");
    scanf("%d", &x);
    int count =demX(arr, n, x);
    printf("\nso lan xuat hien cua x la %5d", count);

    return 0;
}