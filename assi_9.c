#include<stdio.h>
int main(){
    int a;
    float b;
    printf("enter a value for celsius to Fehrenheait: ");
    scanf("%d",&a);
    b=(9/5)*a+32;
    printf("the value in fehrenheit is %f\n",b);
    return 0;

}