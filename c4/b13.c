#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int countnumber( char *c, char *s){
    int i;
    int count=0;
    for(i=0; s[i]!='\0'; i++){
        if(strstr(&c[i], s)==&s[i]){
            count++;
        }
    }
  return count;
}
void replace(char *s, char *s1, char *s2){
    int count=countnumber(s, s1);
    int sizeS=strlen(s);
    int sizeS1=strlen(s1);
    int sizeS2=strlen(s2);
    char *res=(char *)malloc(sizeS + count*(sizeS2 -sizeS1) +1);
        int i=0, j=0;
        for(i=0; s[i]!='\0';){
            if(strstr(&s[i], s1)==&s[i]){
                strcpy(&res[j], s2);
                 i+=sizeS1;
                 j+=sizeS2;
            }else{
                res[j++]=s[i++];
            }
        }
        res[j]='\0';
        puts(res);
}
int main(){
    char c[1000];
    fgets(c, 999, stdin);
    char s[100];
    char s1[100];
    fgets(s, 99, stdin);
    fgets(s1, 99, stdin);
    int sizeC=strlen(c);
    int sizeS=strlen(s);
    int sizes1=strlen(s1);
    if(sizeS>0){
        s[sizeS-1]='\0';
    }
    if(sizeC>0){
        s[sizeS-1]='\0';
    }
    if(sizes1>0){
        s[sizeS-1]='\0';
    }
    replace(c, s, s1);
    
    return 0;
}