#include<stdio.h>
#include<limits.h>
int main(){
    char ch='A';
    char ch2='B';
    printf("the value %c + %c =%d",ch,ch2,(unsigned int)(ch+ch2));
    return 0;
}