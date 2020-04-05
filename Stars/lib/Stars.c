#include <stdio.h>
#include "Stars.h"

void print_in_row(int number)
{
	//printf("\n");
	for(int i=0; i<number; i++)
	{
		printf("*");
	}
}

void print_in_column(int number)
{
	//printf("\n");

	for(int i=0; i<number; i++)
	{
		printf("*\n");
		//printf("\n");
	}
}

void print_in_diagnonal(int number)
{
	//printf("\n");
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
    int space_margin = 0;
    //TODO: Check the need of odd-even number/input
    //char c = check_odd_even(number);
    //printf("Number is: %d",c);
    space_margin = (number * 2) - 2;
		//printf("\n");

	for(int i=0; i<number; i++)
	{
		printf("*");
		// Print spaces
		lateral_offset_generator(space_margin - i);
		//Reduce maximum range by 1
		space_margin--;
		// Print star
		printf("*");
		// Go to next line
		// Print spaces
		printf("\n");
		lateral_offset_generator(i+1);
	}
}

void print_in_triangle(int number)
{
	lateral_offset_generator(number);
	printf("**\n");
	for(int i = 1; i<=number; i++)
	{
		lateral_offset_generator(number - i);
		printf("*");
		lateral_offset_generator(i*2);
		printf("*\n");
	}

}

void print_in_right_triangle(int number)
{
	lateral_offset_generator(number+1);
	printf("*\n");
	for(int i = 0; i<number; i++)
	{
		lateral_offset_generator(number - i);
		printf("*");
		lateral_offset_generator(i);
		printf("*\n");
	}

}

void print_in_parallel(int number)
{

	for(int i=0; i<number; i++)
	{
		printf("*");
		// Print spaces
		// Print star
        for(int j=0; j<number; j++)
		{
			printf(" ");
		}
		printf("*");
		// Go to next line
		printf("\n");
	}
}


void print_in_square(int number)
{
    printf(" ");
    print_in_row(number);
    printf("\n");
    print_in_parallel(number);
    printf(" ");
    print_in_row(number);
}




/***** Helper Functions *****/

char check_odd_even(int number)
{
    char numtype = (number % 2 == 0) ? 1 : 0;
    return numtype;
}

void lateral_offset_generator(int number)
{
    for(int i=0; i<number; i++)
    {
        printf(" ");
    }

}

void vertical_offset_generator(int number)
{
    for(int i=0; i<number; i++)
	{
		printf(" ");
		printf("\n");
	}


}
