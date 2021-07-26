#include<stdio.h>
#include<string.h>
char x[]={
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
    'G', 'H', 'I', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X'
};
int main(){
    int n, b, k;
    char s[100];
    printf("nhap n ");
    scanf("%d", &n);
    while(n--){
        printf("nhap b, k");
        scanf("%d%d", &b, &k);
        if(b==0){
            break;
        }else{
            int i=0;
            while(b){
                int temp=b % k;
                b /= k;
                s[i++]=x[temp];
            }
            s[i]='\0';
            strrev(s);
            puts(s);
        }
    }
    return 0;
}