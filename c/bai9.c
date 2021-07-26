
#include<stdio.h>
void nhap(int *arr, int *n){
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0 ;i< *n;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
int chuaXH(int *b,int n, int x ){
    int i;
    for(i=0; i<n;i++){
        if(b[i]==x){
            return i;
        }
    }
    return -1;
}
void hienThi(int *b ,int  *dem,int n ){
    printf("\ngia tri , chi so");
    int i;
    for(i=0; i<n; i++){
        printf("\n%d\t%d\n",b[i], dem[i]);
    }
}
void dem(int *arr, int n){
    int dem[100], b[100];
    int i, size=0;
    for(i=0; i<n;i++){
        dem[i]=0;
    }
    for(i=0; i<n;i++){
        int index=chuaXH(b, size, arr[i]);
        if(index==-1){
            b[size]=arr[i];
            dem[size]=1;
            size++;
        }else{
            dem[index]++;
        }
    }
    hienThi(b , dem, size);
}

int main(){
    int n=0;
    int arr[100];
    nhap(arr, &n);
    dem(arr, n);

    return 0;
}