#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int isWhiteSpace(char c){
    return (c==' ' || c=='\n' || c=='\n');
}
int specialCharacter(char c){
    return (c=='.' || c==',' || c=='?' || c==';' || c=='('|| c==')');
}
int charS(char c){
    return (c=='.' || c=='?' || c=='!');
}
void deleteAllLast(char *c){
    int size=strlen(c);
    int i=size-1;
    while(isWhiteSpace(c[i])){
        c[i]='\0';
        i--;
    }
}
void dleteAllfirst(char *c){
    int size=strlen(c);
    int count=0;
    int i;
    for(i=0; i<size; i++){
        if(isWhiteSpace(c[i])){
            count++;
        }else{
            break;
        }
    }
    for(i=0; i<=size-count; i++){
        c[i]=c[i+count];
    }
}
void spacecharacters(char *c){
    int size=strlen(c);
    int i, j;
    for(i=0;i<size; i++){
        if(isWhiteSpace(c[i]) && isWhiteSpace(c[i+1])){
            for(j=i+1; j<size; j++){
                c[j]=c[j+1];
            }
            i--;
            size--;
        }else if(isWhiteSpace(c[i]) && specialCharacter(c[i+1])){
            for(j=i; j<size; j++){
                c[j]=c[j+1];
            }
            i--;
            size--;
        }
    }
}
int  countSpace(char *c){
    int count=0;
    int i;
    int size=strlen(c);
    for(i=0; i<size ;i++){
        if(specialCharacter(c[i]) && !isWhiteSpace(c[i+1]) && !specialCharacter(c[i+1])){
            count++;
        }
    }
    return count;
}
void addSpace(char *c , char *res, int amout){
    int size=strlen(c);
    int i, j=0;
    for(i=0; i<size ;i++){
        res[j++]=c[i];
        if(specialCharacter(c[i]) && !isWhiteSpace(c[i+1]) && !specialCharacter(c[i+1])){
            res[j++]=' ';
        }
    }
    res[size+amout]='\0';
}
void vietHoa(char *c){
    int i;
    int size=strlen(c);
    if(size>0){
        c[0]=toupper(c[0]);
    }
    for(i=0; i<size; i++){
        if(charS(c[i])){
            c[i+2]=toupper(c[i+2]);
        }
    }
}

int main(){
    char c[100];
    fgets(c, 99, stdin);
   
    int num=countSpace(c);
    dleteAllfirst(c);
    deleteAllLast(c);
    spacecharacters(c);
     int first=strlen(c);
    char *p=(char*) malloc(first+num+1);
    addSpace(c, p, num);
    vietHoa(p);
    printf("%s", p);
  
    return 0;
}