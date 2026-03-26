#include<stdio.h>
int main(){
    int num1=30;
    printf("width specifier %8d\n",num1);
    printf("width specifier -%8d\n",num1);
    printf("width specifier %8.3f\n",3.14);
    printf("width specifier -%8x\n",3.14);
    return 0;
}