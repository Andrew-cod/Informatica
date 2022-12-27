#include <stdio.h>

int lengthOfLastWord(char * s){
    char *p=s;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==' ')p=&s[i+1];
        i++;
    }
    i=0;
    while(p[i]!='\0'){
        i++;
    }
    return i;
}

int main(){

char s1[]="anrei";
printf("%d",lengthOfLastWord(s1));



    return 0;
}