#include "Class6.h"
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "Class4.h"
#include "Class5.h"

#include <iostream>

using namespace std;

void main()
{
	Class1 c1;
	c1.name = "가나다";
	Class2 c2;
	c2.name = "라마바";
	Class3 c3;
	c3.name = "사아자";
	Class4 c4;
	c4.name = "차카타";
	Class5 c5;
	c5.name = "파하";

	cout << c1.name << "\n" << c2.name << "\n" << c3.name << "\n" << c4.name << "\n" << c5.name << endl;
}	
