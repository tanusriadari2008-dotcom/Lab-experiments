//Lab experiments//
//week 2:Experiment3//
#include<stdio.h>
void main()
{
float si,pa,roi,tp;
//si=simple interest pa=principal amount,roi=rate of interest,tp=time period//
printf("Enter pa,roi,tp");
scanf("%f%f%f",&pa,&roi,&tp);
si=(pa*roi*tp)/100;
printf("%.2f is si",si);
}