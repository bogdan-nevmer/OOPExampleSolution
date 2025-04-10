#include "student.h"


int mai() {

	

	Student  student1;
	Student  student2("alex");
	Student  student3("matvey",14);
	Student  student4("bogdan",15,10,true);



	
	cout << "after" << student1.tostring() << endl;

	cout << "after" << student2.tostring() << endl;
	cout << "after" << student3.tostring() << endl;

	cout << "after" << student4.tostring() << endl;

	return 0;
}