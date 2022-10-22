#include "main.h"

/*
 * convert _day - converts day of month to day of year
 * for leap year
 * @month: month is in number format
 * @day: day of month
 * Return: day of year
 */

int convert_day(int month, int day)
{
	switch (month)
	{
		case 2:
			day = 31 + day;
			break;

		case 3:
			day = 59 + day;
			break;

		case 4:
			day = 90 + day;
			break;

		case 5:
			day = 120 + day;
			break;

		case 6:
			day = 151 + day;
			break;