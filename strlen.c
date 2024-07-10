#include<stdio.h>
int main(){
    char str[]="hello";
    int i,length;
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("length of the string is:%d",length);
    return 0;

}