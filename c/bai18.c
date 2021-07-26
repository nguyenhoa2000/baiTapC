#include<stdio.h>
void nhap(int a[50][50], int *m, int *n){
   *m=0, *n=0;
   while(*m <= 0 && *n <= 0){
       printf("nhap m , n duong");
       scanf("%d%d",m, n);
   }
   int i, j;
   for(i=0; i< *m ;i++){
       for(j=0; j< *n ;j++){
           printf("\na[%d][%d]= ", i, j);
           scanf("%d", &a[i][j]);
       }
   }
}
void  max(int a[50][50], int m, int n){
    int i, j, max;
    for(i=0; i< m; i++){
        max=a[i][0];
        for(j=0; j< n;j++){
            if(max < a[i][j]){
                max=a[i][j];
            }
        }
        printf("max tren  hang %d = %d\n",i, max );
    }
}
int main(){
    int a[50][50], m, n;
    nhap(a, &m, &n);
    max(a, m , n);
    return 0;
}