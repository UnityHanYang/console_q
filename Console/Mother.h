#pragma once
#include <iostream>

using namespace std;

struct motherProp {
	const char* name;
	int age;
	const char* favorite;
	const char* residence;
};

class Mother
{
public:
	motherProp mP;

	void ShowInfo();
};

