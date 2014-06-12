/*
 * HDEEVA_Challenge_001.c
 *
 *  Created on: Jun 12, 2014
 *      Author: Doanva <doanvacntt@gmail.com>
 */

#include <stdio.h>

#include "HDEEVA_Challenge_001.h"

/*
 * Get list of integers (X elements)
 *
 * Calculate and return the sum of squares of only positive integers
 */
int process_case(int X) {
	int num;
	if (0 == X)
		return 0;

	scanf("%d", &num);
	if (num > 0)
		return process_case(X - 1) + num * num;
	else
		return process_case(X - 1);
}

/*
 * Get details of test cases (N test cases) and show the calculation
 *
 * Build output result
 */
void main_process(int N, char *output) {
	int X;
	if (0 == N)
		return;

	scanf("%d", &X);
	if (X < X_MIN || X > X_MAX) {
		printf("Number of integers (X) is out of range (%d < X < %d)", X_MIN, X_MAX);
		return;
	}

	sprintf(output, "%s\n%d", output, process_case(X));

	main_process(N - 1, output);

	return;
}

