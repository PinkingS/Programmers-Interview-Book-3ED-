#include <iostream>
using namespace std;
typedef unsigned int size_t;
//#define FIND(struc, e) (size_t)&((struc *)->e)-(size_t)&(struc)
#define FIND(struc, e) (size_t)&(((struc *)0)->e)
#define FINDSTART(struc,pt,e) ((size_t)pt - (size_t)(&(((struc *)0)->e)))

struct student{
	int a;
	char b[19];
	double ccc;
};


int main(){
	cout << FIND(student, ccc) << endl;
	struct student Mary;
	int *m = &Mary.a;
	cout << FINDSTART(student,m,a) << endl;
	return 0;
}
