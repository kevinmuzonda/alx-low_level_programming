#include "main.h"
/**
  * _isdigit - Function that shows the last digit.
  * @c: This is an integer value.
  * Return: 1 if c is a digit otherwise return 0.
 */
int _isdigit(int c)
{
	char a;
	int lsdigit = 0;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == c)
			lsdigit = 1;
	}
	return (lsdigit);
}
