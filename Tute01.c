/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
	int main(void)
	{
		int mark1,mark2,sum;
		float average;
		
		printf("Enter your marks 1 :\n");
		scanf("%d",&mark1);
	
		printf("Enter your marks 2 :\n");
		scanf("%d",&mark2);
		
		sum=mark1+mark2;

		average=(float)sum/2;
		
		printf("Average = %.2f",average);
		
		return 0;
	}

