#include <iostream>
#include <string>
#include "student.h"

using namespace std;

student::student()
{
	firstNam = "";
	lastNam = "";
}

void student::setName(string first, string last)
{
	firstNam = first;
	lastNam = last;
}

string student::fullName()
{
	string name, space;
	space = " ";
	name.append(firstNam);
	name.append(space);
	name.append(lastNam);
	return name;
}
student::~student()
{
}