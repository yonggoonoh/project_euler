/*
	The prime factors of 13195 are 5, 7, 13 and 29.

	What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int num);

int main()
{
	long target = 600851475143;
	int i;
	int max = 0;
	for (i = 2; i < (int)sqrt(target); i++)
		if (target%i == 0 && is_prime(i) && i > max)
			max = i;
	printf("%d\n", max);
}

bool is_prime(int num)
{
	int i;
	int count = 0;
	if (num == 2)
		return true;
	if (num%2 == 0)
		return false;
	for (i = 3; i < num; i += 2)
		if (num%i == 0)
			return false;
	return true;
}
