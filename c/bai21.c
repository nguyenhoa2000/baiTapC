#include<stdio.h>
void nhap(int a[50][50], int *m , int *n){
    *n =0 ,*m=0;
    while(*m <= 0 && *n <= 0){
        printf("nhap m , n duong");
        scanf("%d%d", m, n);
    }
    int i, j;
    for(i=0; i< *m ;i++){
        for(j=0; j< *n ;j++){
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void tich(int a[50][50] , int b[50][50], int s[50][50], int m, int n, int k){
    int i, j, l;
    for(i=0; i< m; i++){
        for(j=0;j< k; j++){
            for(l=0; l<n ;l++){
                s[i][j]=a[i][l]*b[l][j];
            }
        }
    }
}
void hienthi(int a[50][50], int m ,int n ){
    int i, j;
    for(i=0; i< m;i++){
        for(j=0; j<n ;j++ ){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[50][50],b[50][50], s[50][50]={0};
    int ma , na, mb, nb;
    nhap(a,& ma, &na);
    nhap(b, &mb,&nb);
    if(na!=mb){
        printf("khong ton tai tic hai ma chan");
    }else{
        tich(a, b ,s,  ma, na, nb );
        printf("\nhien thi mang a\n");
        hienthi(a, ma, na);
        printf("\nhien thi mang b\n");
        hienthi(b, mb ,nb);
        printf("\ntich hai ma chan \n");
        hienthi(s, na, mb);
    }
    
    
    return 0;
}