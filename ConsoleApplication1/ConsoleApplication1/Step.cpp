#include "stdafx.h"
#include "Step.h"


Step::Step(int* number, char* predicat, Type type)
{
	Step::type = type;
	Step::number = number;
	Step::predicat = predicat;
}


Step::~Step()
{
}
