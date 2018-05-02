#include <iostream>
#include <string>

#ifndef _STUDENT_H_
#define _STUDENT_H_

using namespace std;

class student
{
private:
	string firstNam;
	string lastNam;
public:
	student();
	~student();
	void setName(string first, string last);
	string fullName();
};

#endif