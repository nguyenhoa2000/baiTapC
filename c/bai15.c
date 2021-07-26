#include<stdio.h>
void nhap(int *arr, int *n){
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0;i< *n ;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void hienThi(int *arr, int n ){
    int i;
    for(i=0;i<n;i++){
        printf("%7d", arr[i]);
    }
}
void TimDiem(int *arr, int n, int *start, int *end,int *count ){
    int j=0;
    start[j]=0;
    int i;
    for(i=0; i<n;i++){
        if(arr[i]>arr[i+1]){
            end[j++]=i;
            start[j]=i+1;
        }
    }
    end[j++]=n-1;
    *count=j;
}
int Maxdn(int *start , int *end,int n){
    int max=end[0]-start[0]+1;
    int i;
    for(i=0; i<n;i++){
        int max2=end[i]-start[i]+1;
        if(max2>max){
            max=max2;
        }
    }
    return max;
}
void hienMax(int *arr ,int start,int leng ){
    printf("\nduong chay dai nhat");
    int i;
    for(i=start; i<start+leng;i++){
        printf("%5d", arr[i]);
    }  
}
void ketQua(int *arr, int n , int *start,int *end, int count  ){
    int i;
    if(count==n){
        printf("\nkhong co duong chay dai nhat");
    }else{
        int max=Maxdn(start, end, count );
        for(i=0; i<count;i++){
            int max2=end[i]-start[i]+1;
            if(max2==max){
                hienMax(arr, start[i], max2);
            }
        }
    }
}
int main(){
    int arr[100], n=0;
    int start[100], end[100];
    int count=0;
    nhap(arr, &n);
    hienThi(arr, n);
    TimDiem(arr, n,start, end , &count  );
    ketQua(arr, n , start, end, count );
    return 0;
}