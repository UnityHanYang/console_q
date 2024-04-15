#pragma once
#include <iostream>

using namespace std;

struct meProp {
	const char* name;
	int age;
	const char* favorite;
	const char* residence;
};

class Me
{
public:
	meProp mP;

	void ShowInfo();
};

