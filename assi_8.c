#include<stdio.h>
int main(){
    int a1, a2, a3;
    int avg;
    printf("enter the 3 digit number: ");
    scanf("%d%d%d", &a1, &a2, &a3);
    avg=(a1 + a2 + a3) / 3;
    printf("the avg is %d\n",avg);
    return 0;
}
//#include<stdio.h>

/*  int main(){
    int a1=1, a2=2, a3=3;
    int avg;

    printf("enter the 3 digit number:%d %d %d\n ",a1,a2,a3);
    //scanf("%d %d %d", &a1, &a2, &a3);

    avg = (a1 + a2 + a3) / 3;

    printf("the avg is %d\n", avg);

    return 0;
}*/

