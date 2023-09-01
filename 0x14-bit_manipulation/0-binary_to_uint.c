#include "main.h"

/**
 * Function; binary_to_uint
 * Description; This function converts a number to an integer.
 * Parameters;
 *. B; A string containing the number.
 *
 * Return;
 *. The converted number, as an integer.
 */
 int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	// Check if the input string is not empty
	if (!b)
		return (0);

	// Iterate through each character in the string
	, for (i = 0; b[i]; i++)
	{
		// Check if the character is a digit (0 or 1)
		if (b[i] < '0' || b[i] > '1')
			return (0);

		// Convert the digit to its equivalent and update the decimal value
		dec_val = 2 * dec_val + (b[i]. '0');
	}

	return (dec_val);
}

