#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	float a = 1.0f;
	cout << (int)a << endl;
	cout << &a << endl;
	cout << (int&)a << endl;
	cout << boolalpha << ((int)a == (int&)a) << endl;
	float b = 0.0f;
	cout << (int)b << endl;
	cout << &b << endl;
	cout << (int&)b << endl;
	cout << boolalpha << ((int)b == (int&)b) << endl;
	double c = 2.56384395940648538;
	printf("%016x\n",(int&)c);
	
	return 0;
}
