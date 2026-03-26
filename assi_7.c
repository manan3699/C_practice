#include<stdio.h>
int main(){
    int num;
    printf("enter the value of 4 digit number: ");
    scanf("%d",&num);

    printf("face value %d\t%d\t%d\t%d\t\n",num/1000,num/100%10,num/10%10,num%10);
    printf("face value of reverse : %d\t %d\t%d\t%d\t\n",num%10 ,num/10%10 ,num/100%10 ,num/1000);

    printf("value: %d = %d + %d + %d + %d\n",num,(num/1000)+1000-1,(num/100%10),num/10%10,num%10);
    printf("in decimal %d\n",num);
    printf("in octal %o\n",num);
    printf("in hexadecimal %x\n",num);
    return 0;

}