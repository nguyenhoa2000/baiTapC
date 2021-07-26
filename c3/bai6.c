#include<stdio.h>
#include<stdbool.h>
bool chan(int n){
    return n % 2==0;
}
bool le(int n){
    return n % 2!=0;
}
void nhap(int *arr, int *n){
    *n=0;
    while(*n<=0){
        printf("nhap n >0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i< *n;i++){
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
float CBCC(int *arr, int n){
    float  count =0, sum=0,k;
    int i;
    for(i=0; i< n;i++){
        if(chan(arr[i])){
            sum+=arr[i];
            count++;
        }
    }
    return k=sum/count;
}
float CBCle(int *arr, int n){
    float  count =0, sum=0,k;
    int i;
    for(i=0; i< n;i++){
        if(le(arr[i])){
            sum+=arr[i];
            count++;
        }
    }
    return k=sum/count;
}
int main(){
    int arr[100], n;
    nhap(arr, &n);
    float CBCChan=CBCC(arr, n);
    printf("\nchung binh so chan %5.2f",CBCChan);
    float CBCLe=CBCle(arr, n);
    printf("\nchung binh cong so le %5.2f", CBCLe);
    return 0;
}