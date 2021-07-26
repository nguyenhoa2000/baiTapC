#include<stdio.h>
#include<stdbool.h>
bool chan(int n){
    return n%2==0;
}
bool le(int n){
    return n%2!=0;
}
void nhap(int *arr, int *n){
    while(*n<=0){
        printf("nhap n>0");
        scanf("%d", n);
    }
    int i;
    for(i=0; i<*n;i++){
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
float CBCChan(int *arr, int n){
    float k;
    int sum=0,count=0;
    int i;
    for(i=0; i<n; i++){
        if(chan(arr[i])){
            sum+=arr[i];
            count++;
        }
    }
    return k= sum/count;
}
float CBCLe(int *arr, int n){
    float k;
    int sum=0,count=0;
    int i;
    for(i=0; i<n; i++){
        if(le(arr[i])){
            sum+=arr[i];
            count++;
        }
    }
    return k= sum/count;
}
int main(){
    int arr[100];
    int n=0;
    nhap(arr, &n);
   float chan=CBCChan(arr, n);
   printf("\nCBC cac so chan %0.2f ", chan);
    float le1=CBCLe(arr, n);
    printf("\nCBC cac so chan %0.2f ", le1);
    return 0;
}
