#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    char a1='a';
    unsigned char a2='b';
    short int a3=10;
    unsigned short int a4=20;
    int a5=100;
    unsigned int a6=200;
    long int a7=1000;
    unsigned long int a8=2000;
    float a9=3.14;
    unsigned float a10=6.28;
    double a11=3.1415926535897932384626433832795;
    unsigned double a12=6.2831853071795864769252;

    printf("value of char %u\n",a1,INT_MIN,INT_MAX);
    printf("value of unsigned char %u\n",a2,UCHAR_MAX);
    printf("value of short int %d\n",a3,SHRT_MIN,SHRT_MAX);
    printf("value of unsigned short int %u\n",a4,0,USHRT_MAX);
    printf("value of int %d\n",a5,INT_MIN,INT_MAX);         
    printf("value of unsigned int %u\n",a6,0,UINT_MAX);
    printf("value of long int %ld\n",a7,LONG_MIN,LONG_MAX);
    printf("value of unsigned long int %lu\n",a8,0,ULONG_MAX);  
    printf("value of float %f\n",a9,FLT_MIN,FLT_MAX);
    printf("value of unsigned float %lf\n",a10,0,FLT_MAX);   
    printf("value of double %lf\n",a11,DBL_MIN,DBL_MAX);
    printf("value of unsigned double %lf\n",a12,0,DBL_MAX);

    return 0;
}