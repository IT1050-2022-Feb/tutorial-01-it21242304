/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1;
   int mark2;
   float sum,average;
   
   printf("Enter the mark1:");
   scanf("%d",& mark1);
   printf("Enter the mark2:");
   scanf("%d",& mark2);
   
   sum=mark1+mark2;
   average= sum/2;
   
   printf("average =%f", average);
  
  return 0;
}

