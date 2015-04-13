#pragma once



class Step
{
	
public:
	enum Type {
		type1, type2
	};
	Step(int* number, char* predicat, Type type);
	~Step();
	int* number;
	char* predicat;
	Type type;
};

