#include<stdio.h>

int main() {
int gross,basic,da,hra;

printf("Enter basic salary:");
scanf("%f",&basic);

da= basic*0.2;
hra=basic*0.4;
gross=basic+da+hra;
printf("gross salary=%f",gross);
}
