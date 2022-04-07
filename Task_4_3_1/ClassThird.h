#pragma once
#include "ClassFirst.h"
#include "ClassSecond.h"

class ClassThird : public ClassFirst, public ClassSecond {

public:

	ClassThird() {};
	~ClassThird() {};
	void callMethods();
};

