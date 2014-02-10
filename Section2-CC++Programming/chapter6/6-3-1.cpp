#include <iostream>
#include <stdlib.h>
using namespace std;

struct{
	short a1;
	short a2;
	short a3;
}A;

struct{
	long b1;
	short b2;
}B;

struct{
	double d;
	float a;
	int b;
	char c;
}E;

int main(){
	char *str1 = (char *)sizeof(100);
	void *str2 = (void *)sizeof(100);
	cout << sizeof(str1) << endl;
	cout << sizeof(str2) << endl;
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	bool e;
	char f;
	cout << sizeof e << endl;
	cout << sizeof f << endl;
	cout << sizeof(E) << endl;
	
	int **a[3][4];
	cout << sizeof(a) << endl;
}
