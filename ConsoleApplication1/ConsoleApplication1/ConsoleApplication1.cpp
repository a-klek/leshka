// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Step.h"
#include <iostream>



int _tmain(int argc, _TCHAR* argv[])
{
	int* number;
	char* predicat;
	Step::Type type;
	Step* steps;

	int count_la;
	std::cout << "Hello, input count local algortms: ";
	std::cin >> count_la;



	


	for (int i = 0; i < 3; i++){

		steps[i] = Step(number, predicat, type);
	}
	
	return 0;
}



