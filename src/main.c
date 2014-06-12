/*
 ============================================================================
 Name        : HDEEVA_challenge_001.c
 Author      : Doanva <doanvacntt@gmail.com>

 Description : Calculate a sum of squares of some integers, excepting negatives
 1. The first line of the input will be an integer N (1 <= N <= 100)
 2. Each of the following N test cases consist of one line containing an integer X
 (X <= 100), followed by X integers space-separated on the next line
 3. For each test case, calculate the sum of squares of the integers excepting
 negatives, and print the calculated sum to the output. No blank line between
 test cases
 4. (Take input from standard input, and output to standard output)

 Rules		: Do not use loop statements like while/until/for/each/loop

 Created on	: Jun 12, 2014

 The code may be used by anyone for any purpose and can see  as an example
 of the recursive technique in C programming language
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "HDEEVA_Challenge_001.h"

int main() {
	int N;
	char *output = malloc(MAX_SIZE);
	output[0] = '\0';

	scanf("%d", &N);
	if (N < N_MIN || N > N_MAX) {
		printf("Number of test cases (N) is out of range (%d < N < %d)", N_MIN, N_MAX);
		return -1;
	}

	main_process(N, output);

	printf("%s", output);

	free(output);

	return 0;
}
