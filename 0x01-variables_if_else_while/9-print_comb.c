#include <stdio.h>
/**
 * main - main function
 * Rerurn: 0 success
 */
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar (',');
			putchar (',');
		}
	}
	putchar('\n');
	return (0);
}
