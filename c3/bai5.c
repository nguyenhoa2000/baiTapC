#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool kTra(int *a ,int n, int v){
    int i;
    for(i=0; i<n ;i++){
        if(a[i]==v){
            return false;
        }
    }
    return true;
}


void nhap(int *arr, int *n){
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
int hienMin(int *arr, int n, int x ){
    int hieu=abs(arr[0]-x);
    int i;
    for(i=0; i< n;i++){
        if(abs(arr[i]-x)< hieu){
            hieu=abs(arr[i]-x);
        }
    }
    return hieu;
}
void kQ(int *arr, int n, int x, int hieu){
    int a[100];
    int count=0;
    int i;
    for(i=0; i< n;i++){
        int hieux=abs(arr[i]-x);
        if(hieux==hieu && kTra(a, count, arr[i])){
            printf("%5d", arr[i]);
            a[count++]=arr[i];
        }
    }
}
int main(){
    int arr[100], n;
    int x;
    nhap(arr, &n);
    printf("\n nhap x");
    scanf("%d", &x);
   int hieu= hienMin(arr, n , x);
    kQ(arr, n ,x , hieu);
    return 0;
}