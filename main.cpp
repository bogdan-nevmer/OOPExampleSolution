#include "student.h"


int mai() {
	Student st1, st2;
	st1.name = "veronika";
	st1.age = 14;
	st1.mark = 9.2;
	st1.alive = true;

	st2.name = "bogdan";
	st2.age = 15;
	st2.mark = 8;
	st2.alive = true;


	cout<<st1.getstring()<<endl;
	cout<< st2.getstring() <<endl;

	return 0;
}