#include "student.h"


int mai() {

	

	Student  student1{};

	cout << "before" << student1.tostring() << endl;
	student1.name="alex";
	student1.age = 15;
	student1.mark= 7.4;
	student1.alive = true;
	cout << "after" << student1.tostring() << endl;

	return 0;
}