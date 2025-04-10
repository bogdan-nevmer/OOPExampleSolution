#include <iostream>
#include <string>
using namespace std;


class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	Student() {
		cout << "defalt" << endl;
		name = "no name";
		age = 13;
		mark = 4.0;
		alive = true;
	}

	string tostring() {
		string s = "name" + name;
		s += ",age" + to_string(age);
		s += ",mark " + to_string(mark);
		s += ", alive " ;
		s += alive ? "yes" : "no";
		return s;


	

	}
};