<<<<<<< HEAD
#include"main.h"

/**
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
=======
#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
>>>>>>> e295acf14e4da23f60709f4f6f2d0c21569cd106
