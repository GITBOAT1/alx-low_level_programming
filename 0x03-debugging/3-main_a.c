#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);
	print_remaining_days(month, day, year);
	
	printf("====================\n\n");
	convert_day(4,10);
	print_remaining_days(4,10,1997);

	printf("====================\n\n");
	convert_day(2,12);
	print_remaining_days(2,12,2019);

	printf("====================\n\n");
	convert_day(2,29);
	print_remaining_days(2,29,2000);

	printf("====================\n\n");
	convert_day(3, 1);
	print_remaining_days(3,1,2009);

	printf("====================\n\n");
	convert_day(3,1);
	print_remaining_days(3,1,2008);

	printf("====================\n\n");
	convert_day(4,10);
	print_remaining_days(4,10,4000);

    return (0);
}
