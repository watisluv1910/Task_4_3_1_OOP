#include <iostream>
#include "ClassFirst.h"

using std::cin;

void ClassFirst::setArray() {

	cin >> size;

	array = new int[size];

	for (size_t i = 0; i < size; i++) {

		cin >> array[i];
	}
}