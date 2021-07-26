#include<stdio.h>
void nhap(int arr[50][50], int *m , int *n){
    *m=0, *n=0;
    while(*n<=0 && *m<=0){
        printf("nhap m , n duong");
        scanf("%d%d", m, n);
    }
    int i, j;
    for(i=0; i< *m; i++){
        for(j=0; j < *n ;j++){
            printf("\narr[%d][%d]= ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
} 

void  timMax(int arr[50][50], int m, int n){
    int i, j, max;
    for(i=0; i< m; i++){
        arr[i][0]=max;
        for(j=0; j<n; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
         printf("\n max hang %5d=%5d\n", i, max);
    }
}
int main(){
    int arr[50][50], n, m;
    nhap(arr, &m,&n );
     timMax(arr, m, n);
    return 0 ;
}