#include<stdio.h>
void nhap(int a[10][10], int *n){
    printf("nhap n ");
    scanf("%d" , n);
    int i, j;
    for(i=0; i< *n ;i++){
        for(j=0; j< *n;i++){
            printf("\na[%d]%d]= ", i +1, j+1);
            scanf("%d" ,&a[i][j]);
        }
    }
}
int det1(int det[10][10], int n){
    int s, sum=0,k;
    if(n==1){
        return det[0][0];
    }
    if(n==2){
        return det[0][0]*det[1][1] - det[1][0]*det[0][1];
    }
    int i, j;
    for(k=0; k< n ;k++){
        int smaller[10][10];
        for(i=0; i<n ;i++){
            for(j=0 ;j< n;j++){
                if(i< k ){
                    smaller[i][j-1]=det[i][j];
                }
                if(i>k ){
                    smaller[i-1][j-1]=det[i][j];
                }
            }
        }
        if(k%2==0){
            s=1;
        }else s=-1;
        sum+=det[k][0]*s*det1(smaller, n-1);
    }
    return sum;
}
void hienThi(int det[10][10], int n){
    int i, j;
    for(i=0 ;i< n ;i++){
        for(j=0; j< n; j++){
            printf("%4d", det[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main(){
    int det[10][10], n;
    nhap(det, &n);
    hienThi(det, n);
    int sum=det1(det, n);
    printf("kq= %d", sum);
    return 0;
}