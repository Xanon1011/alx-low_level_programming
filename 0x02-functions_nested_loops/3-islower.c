#include "main.h"
/**
  * _islower - check the lowercase character
  * Return: 1 for lowercase character or 0 for uppercase character
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
