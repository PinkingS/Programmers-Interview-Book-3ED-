#include <iostream>
using namespace std;

union {
	unsigned char a;
	unsigned int i;
} u;

int main(){
	u.i = 0xf0f1f2f3;
	cout << "&u.a:" << &u.a << endl;
	cout << "&u.i:" << &u.i << endl;
	cout << hex << u.i << endl;
	cout << hex << int(u.a) << endl;
	return 0;

}
