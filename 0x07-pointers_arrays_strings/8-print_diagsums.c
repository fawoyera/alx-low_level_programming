#include "main.h"
/**
 * print_diagsums - function to print sum of two diagonals of square matrix
 * @a: the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, temp;
	int left_diag_sum, right_diag_sum;

	left_diag_sum = 0;
	right_diag_sum = 0;
	temp = size - 1;
	for (i = 0; i < size; i++)
	{
		left_diag_sum += *(a + (i * (size + 1)));
		right_diag_sum += *(a + temp);
		temp += size - 1;
	}
	printf("%d, %d\n", left_diag_sum, right_diag_sum);
}
