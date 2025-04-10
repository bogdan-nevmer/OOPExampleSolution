#include <iostream>
#include <string>
using namespace std;


class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	Student(string nm) {
		cout << "defalt" << endl;
		name = nm;
		age = 13;
		mark = 4.0;
		alive = true;
	}

	Student(string nm,int a,double m , double alv) {
		cout << "defalt" << endl;
		name = nm;
		age = a < 13 ? 1 : a;
		mark = 4.0;
		alive = true;
	}

	Student(string nm, int a, double m, double alv) {
		cout << "defalt" << endl;
		name = nm;
		age = student.age;
		mark student.mark;
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