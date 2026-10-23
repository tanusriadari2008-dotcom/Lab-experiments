//Lab experiments//
//week 3:Experiment2//
#include<stdio.h>
#include<math.h>
void main()
{
float pa,roi,tp,ci,A;
//pa=principal amount, roi=rate of interest,tp=time period,ci=compound interest ,A=amount//
printf("Enter pa,roi,tp");
scanf("%f%f%f",&pa,&roi,&tp);
A=pa*pow(1+(roi/100),tp);
ci=A-pa;
printf("%.2f is ci",ci);
}