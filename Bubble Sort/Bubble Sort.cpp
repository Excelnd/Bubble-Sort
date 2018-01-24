// Bubble Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdbool.h>

using namespace std;


#define MAX 10

int list[MAX] = { 1,8,4,6,0,3,5,2,7,9 };

void display() {
	int i;
	printf("[");

	// nagivate 
	for (i = 0; i < MAX; i++) {
		printf("%d ", list[i]);
	}

	printf("]\n");
}

void bubbleSort() {
	int temp;
	int i, j;

	bool swapped = false;

	// loop through all numbers
	for (i = 0; i < MAX - 1; i++) {
		swapped = false;

		// loop through numbers falling ahead
		for (j = 0; j < MAX - 1; j++) {
			printf("     Items compared: [ %d, %d ] ", list[j], list[j + 1]);

			// check if the next number is lesser than current number
			// swap the numbers.
			// (bubble up the highest number)

			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;

				swapped = true;
				printf(" => swapped [%d, %d]\n", list[j], list[j + 1]);
			}
			else
			{
				printf(" => not swapped\n");
			}
		}

		// if no number was swapped that means
		// array is sorted now, break the loop.
		if (!swapped) {
			break;
		}

		printf("iteration %d#: ", (i + 1));
		display();
	}
 
}


int main()
{
	printf("Input Array: ");
	display();
	printf("\n");

	bubbleSort();
	printf("\nOutput Array: ");
	display();

    return 0;
}

