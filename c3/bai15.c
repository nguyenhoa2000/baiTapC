#include<stdio.h>
void nhap(int *arr, int *n){
    *n=0;
    while(*n<=0){
        printf("mhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void hienThiGoc(int *arr, int n){
    int i;
    for(i=0; i< n;i++){
        printf("%5d", arr[i]);
    }
}
void timDiem(int *arr, int n, int *start, int *end, int *count ){
    int j=0;
    start[j]=0;
    int i;
    for(i=0; i< n;i++){
        if(arr[i]>arr[i+1]){
            end[j++]=i;
            start[j]=i+1;
        }
    }
    end[j++]=n-1;
    *count=j;
}
int  duongCHayMax(int *start, int *end, int n){
    int i;
    int max=end[0]-start[0]+1;
    for(i=0; i< n;i++){
        int max1=end[i]-start[i] +1;
        if(max1>max){
            max=max1;
        }
    }
    return max;
}
void hienThiMax(int *arr, int start, int leng){
    printf("\nduong chay dai nhat");
    int i;
    for(i=0; i< start +leng;i++){
        printf("%5d", arr[i]);
    }
}
void ketQua(int *arr, int n,int *start, int *end ,int  count){
    int i;
    if(count==n){
        printf("\nkhong co duong chay dai nhat ");
    }else{
        int max=duongCHayMax(start, end, count);
        int i;
        for(i=0; i< count;i++){
            int max2=end[i]-start[i]+1;
            if(max2==max){
                hienThiMax(arr,start[i], max2 );
            }
        }
    }
}
int main(){
    int arr[100] ,n;
    int start[100],end[100], count=0;
    nhap(arr, &n);
    hienThiGoc(arr, n); 
    timDiem(arr,n, start , end, &count );
    ketQua(arr, n ,start , end,count );
    return 0;
}