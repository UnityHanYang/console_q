#pragma once
#include <iostream>

using namespace std;

struct fatherProp{
	const char* name;
	int age;
	const char* favorite;
	const char* residence;
};

class Father
{
public:
	fatherProp fP;

	void ShowInfo();
};
