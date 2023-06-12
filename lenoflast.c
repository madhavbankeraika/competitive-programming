#include<stdio.h>
#include<string.h>

int lsl(char s[]){
    int L;
    char str[5000]={0};
    gets(str);
    
    L = strlen(str);
    int i = L-1;
    while(i>=0){
        if(str[i]!=" ") i--;
        else break;
    }
    printf("%s:\n",str);
    printf("%d:\n",L);
    printf("%d:\n",i);
    printf("%d:\n",L-1-i);
    return L-1-i;
} 

void main(){
    char s[5000];
    lsl(s);
}
