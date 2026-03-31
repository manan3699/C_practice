#include<stdio.h>
int main(){
    int a;
    printf("enter any month of year : \n");
    scanf("%d",&a);

    if(a<100){
        if(a%4==0){

        
        printf("is is a leap year :\n");
        }
        else if(a%100==0){
            printf("this is a leap year :\n");
        }  
        
    }
    else{
            printf("this is leap yaer :\n",a%400==0);
        }

    }
