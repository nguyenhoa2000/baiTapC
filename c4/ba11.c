#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct note{
    char data[50];
    int counter;
};
void addOrCount(char *word,struct note *words, int *size ){
    int i;
    bool tontai=false;
    for(i=0; i< *size; i++){
        if(strcmp( word,words[i].data)==0){
            words[i].counter++;
            tontai=true;
            break;
        }
    }
    if(!tontai){
        strcpy(words[*size].data, word);
        words[*size].counter=1;
        (*size)++;
    }
}
void tachVadem(char *c, struct note *words, int *size){
    char *p;
    const char *delim=" ,.:;?!\n";
    for(p=strtok(c, delim); p!=NULL; p=strtok(NULL, delim)){
       addOrCount(p, words, size);
    }
}
void hienThi(struct note *words, int size){
    int i;
    for(i=0; i<size; i++){
        printf("%s : %d\n", words[i].data, words[i].counter);
    }
}
int main(){
    char c[1000];
    fgets(c, 999, stdin);
    int size=0;
    struct note words[200];
    tachVadem(c, words, &size);
    hienThi(words, size);
    return 0;
}