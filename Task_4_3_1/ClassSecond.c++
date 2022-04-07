#include <iostream>
#include <iomanip>
#include <algorithm>
#include "ClassSecond.h"

using std::cout;

int compare(const void* x1, const void* x2) {

	return (*(int*)x1 - *(int*)x2);
}

void ClassSecond::sortArray() {

	qsort(array, size, sizeof(int), compare);
}

void ClassSecond::outputArray() {

	for (size_t i = 0; i < size; i++) {

		cout << std::setw(5) << array[i];
	}
}