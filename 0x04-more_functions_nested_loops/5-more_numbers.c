#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int num, c;

	for (c = 0; c <= 9; c++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				putcher((num / 10) + '0');
			}
			_putcher((num % 10) + '0');
		}

		_putcher('\n');
	}
}
