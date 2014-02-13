#include <iostream>
using namespace std;

int main(){
	char* a[] = {"hellow", "world", "!"};
	char**pa = a;
	pa++;
	cout << *pa << endl;
	return 0;
}
