#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool ktra(int *b, int n ,int v ){
    int i;
    for(i=0; i<n;i++){
        if(b[i]==v){
            return false;
        }
    }
    return true;
}
int  soGanX(int *arr, int n, int x){
    int min=abs(arr[0]-x);
    int i;
    for(i=0; i<n;i++){
        int min2=abs(arr[i]-x);
        if(min2<min){
            min=min2;
        }
    }
    return min;
}
    
void nhap(int *arr, int *n){
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
void hienThi(int *arr, int n, int x, int min){
    int b[100];
    int count=0;
    int i;
    for(i=0; i<n; i++){
        int min2=abs(arr[i]-x);
        if(min2==min && ktra(b , count, arr[i])){
            printf("%7d", arr[i]);
            b[count++]=arr[i];

        }
    }
}

int main(){
    int n=0;
    int arr[100];
    int x;
    nhap(arr, &n);
    printf("\nnhap x");
    scanf("%d", &x);
    int min=soGanX(arr, n ,x);
    hienThi(arr, n , x, min);
    return 0;
}