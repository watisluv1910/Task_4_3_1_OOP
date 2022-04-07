#include <iostream>
#include "ClassThird.h"

using std::cout;

void ClassThird::callMethods() {

	setArray();

	cout << "Array dimension: " << size << '\n';

	cout << "The original array:";
	outputArray();
	cout << '\n';

	sortArray();

	cout << "An ordered array:";
	outputArray();
}