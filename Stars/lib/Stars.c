#include <stdio.h>
#include "Stars.h"

void print_in_row(int number)
{
	printf("\n");
	for(int i=0; i<number; i++)
	{
		printf("*");	
	}	
}	

void print_in_column(int number)
{
	printf("\n");
	for(int i=0; i<number; i++)
	{
		printf("*");	
		printf("\n");
	}	
}

void print_in_diagnonal(int number)
{
	printf("\n");
	for(int i=0; i<number; i++)
	{
		printf("*");	
		printf("\n");
		for(int j=0; j<=i; j++)
		{
			printf(" ");
		}
	}	
}

void print_in_V(int number)
{
	printf("\n");
	for(int i=0; i<number; i++)
	{
		printf("*");
		// Print spaces
		// Print star
		for(int j=i; j<=number-i+(number/2); j++)
		{
			printf(" ");
		}
		printf("*");
		// Go to next line
		// Print spaces
		printf("\n");
		for(int k=0; k<=i; k++)
		{
			printf(" ");
		}
	}	
}

