#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int vowel(char c){
    return (c=='e' ||c=='u'||c=='o'|| c=='a'|| c=='i');
}
bool consonant(char c){
    if(!vowel(c) && c>='a' && c<='z'){
        return true;
    }
    return false;
}
int charSpecial(char c){
    return c=='.' ||c==' '||c==',' ||c=='?' ||c=='!';
}
int countVowel(char *c){
    int i;
    int count=0;
    int size=strlen(c);
    for(i=0; i<size-1; i++){
        char s=tolower(c[i]);
        if(vowel(s)){
            count++;
        }
    }
    return count;
}
int countConsonant(char *c){
    int i;
    int count=0;
    int size=strlen(c);
    for(i=0; i<size-1; i++){
        char s=tolower(c[i]);
        if(consonant(s)){
            count++;
        }
    }
    return count;
}
int countCharspecial(char *c){
    int count=0;
    int size=strlen(c);
    int i;
    for(i=0; i<size;i++){
        char s=tolower(c[i]);
        if(charSpecial(s)){
            count++;
        }
    }
    return count;
}
int main(){
    char c[100];
    fgets(c, 99, stdin);
    int result=countVowel(c);
    int result2=countConsonant(c);
    int result3=countCharspecial(c);
    printf("dem nguyen am  ");
    printf("%d", result);
    printf("\ndem phu am ");
    printf("%d",result2 );
    printf("\ncac ki tu khac ");
    printf("%d", result3);
    return 0;
}