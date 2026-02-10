#include<stdio.h>
int main (){
int n1;
float n2;
char x;
double n3;
printf("ENTER ANY INTEGER HERE: ");
scanf("%d",&n1);

printf("ENTER ANY FLOATING NUMBER HERE: ");
scanf("%f",&n2);

printf("ENTER ANY CHARACTER HERE: ");
scanf("%s",&x);

printf("ENTER ANY BIG NUMBER YOU KNOW HERE: ");
scanf("%lf",&n3);

printf("\nTHE DATATYPES THAT YOU ENTERED ARE:%d and %f and %s and %lf\n",n1,n2,x,n3);

return 0;
}
