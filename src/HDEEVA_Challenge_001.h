/*
 * HDEEVA_Challenge_001.h
 *
 *  Created on: Jun 12, 2014
 *      Author: Doanva <doanvacntt@gmail.com>
 */

#ifndef HDEEVA_CHALLENGE_001_H_
#define HDEEVA_CHALLENGE_001_H_

#define N_MIN 1 	// number of test cases must be greater than zero
#define N_MAX 100 	// number of test cases must be less than or equal 100
#define X_MIN 0 	// number of integers must be not negative
#define X_MAX 100 	// number of integers must be less than or equal 100
#define MAX_INT_LEN 11	// number of characters in the largest integer
// Maximum value of input size
#define MAX_SIZE ((N_MAX) * (X_MAX + 1) * (MAX_INT_LEN + 2))

int process_case(int);
void main_process(int, char *);

#endif /* HDEEVA_CHALLENGE_001_H_ */
