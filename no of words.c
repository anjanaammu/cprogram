#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Helloworld";
    int i,words;
    for(i=0;str[i]!='\0';i++){
        if((i==0 && ! isspace(str[i])) || (i>0 && isspace(str[i-1])) && ! isspace(str[i])){
            words++;
            
        

        }
    }
    printf("%d\n",words);
    return 0;
}