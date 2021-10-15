#include "main.h"
/**
 * count_Bits - this count the number of bit from the flip_bit
 * @n: number to conver
 * Return: the dec or 0 when failed
 * Calculate XOR of A and B. a_xor_b = A ^ B
 * Count the set bits in the above calculated XOR result.
 * countSetBits(a_xor_b) the magic is the >> 1
*/
int count_Bits(int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - using the xor oprater to count the number of flip
 * @n: value to flip throug
 * @m: value for comparison
 * Return: the counted flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	return (count_Bits(n ^ m));

}
