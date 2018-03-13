#include <iostream>
#include "math.h"
#include "SSD.h"

int SSD(int arr, int N);

{
	float std = 0;
	float mean = 0;

	for (int i = 0; i < N; i++) {
		mean = mean + arr[i];
	}

	mean = mean / N;

	for (int i = 0; i<N; i++) {
		std = std + (arr[i] - mean)*(arr[i] - mean);
	}
	std = sqrt(std / N);

	return std;
}