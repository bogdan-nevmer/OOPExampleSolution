#include "student.h"

int mai() {
	int n = 0;
	Student st1, st2, st3;
	st1.name = "veronika";
	st1.age = 14;
	st1.mark = 9.2;
	st1.alive = true;

	st2.name = "bogdan";
	st2.age = 15;
	st2.mark = 8;
	st2.alive = true;

	st3.name = "artur";
	st3.age = 15;
	st3.mark = 6.5;
	st3.alive = false;

	Student st = st1.mark > st2.mark ? st1 : st2;

	cout << "best students " << st.name << ".\n";

	return 0;
}