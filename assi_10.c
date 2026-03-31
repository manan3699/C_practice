#include<stdio.h>
#include<math.h>

int main(){
    // int n1;
    // int n2;
    // int n3;
    // printf("perimeter of tringle is:");
    // scanf("%d %d %d\n",&n1,&n2,&n3);
    // // permiter = n1 +n2 + n3n1, n2,n3;
    // printf("the perimeter of tringle is %d\n",n1+n2,n3*n1,n2,n3); 

    // printf("for area of tringle :");
    // scanf("%d %d %d\n",&n1,&n2,&n3);
    // area=n1+n2+n3/2;
    // Area=sqrt(area*(area-n1)*(area-n2)*(area-n3));
    // printf("angle of tringle is %f\n",Area);
    // return 0;
double a,b,c;

printf("enter three values of 3 digit for tringles:");

scanf("%lf %lf %lf",&a,&b,&c);

double perimeter = a+b+(a*c)+b+c;
printf("the perimeter of tringle is %lf\n",perimeter);

double s = perimeter/2;
double area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area of tringle is %lf\n",area);
return 0;

}