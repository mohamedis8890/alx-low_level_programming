#include "main.h"
/**
* _isalpha: checks if a letter is alphabetic character
* @c: character to check
*
* Description: This function accepts a char and checks it aginst ascii table
* representations of lower and upper case alphabet
* Return: 1 if c is alphabetic, 0 otherwise
*/
int _isalpha(int c);
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
