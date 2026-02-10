#include <stdio.h>
int main() {
    float a,b,c,sum;
    float average;
    printf("ENTER ANY 3 NUMBERS AND GET THIER AVERAGE AND SUM : ");
    scanf("%f %f %f ",&a,&b,&c);
    sum=a+b+c;
    average=sum/3;
    printf("The sum of %f %f and %f is %.2f and the average is %.2f",a,b,c,sum,average);
 return 0;
}
