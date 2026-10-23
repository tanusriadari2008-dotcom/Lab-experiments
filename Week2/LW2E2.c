//Lab experiments//
//week 2:Experiment2//
#include<stdio.h>
void main()
{
float Fahrenheit,Celsius;
printf("Enter Fahrenheit");
scanf("%f",&Fahrenheit);
Celsius=(Fahrenheit-32)*5.0/9.0;
printf("Celsius=%.2f",Celsius);
printf("\nEnter Celsius");
scanf("%f",&Celsius);
Fahrenheit =(Celsius*9.0/5.0)+32;
printf("Fahrenheit=%.2f",Fahrenheit);
}
    