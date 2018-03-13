#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "ssd.h"

using namespace std;

int main()
{
	char middleName[10] = "A K SH A";
	int N = 25 - strlen(middleName);
	int arr[N];

	srand((unsigned)time(NULL));

	for (int i = 1; i < N; i++) {
		arr[i] = 1 + rand() % 10;
	}

	float SD = ssd(arr, N);

	cout << "The simple standard deviation is: " << SD << endl;
	return 0;
}