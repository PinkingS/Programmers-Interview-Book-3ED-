#include <iostream>
using namespace std;

class Base{
public:
	Base();
	~Base();

	virtual void f(int){
		cout << "base f(int)" << endl;
	}
	virtual void f(double){
		cout << "base f(double)" << endl;
	}
};

int main(){
	string str="abcd5667555";
	cout << sizeof(str) << endl;

	string strArr[] = {"lksjd", "sdf", "lsdjflksdjgl", "a"};
	cout << sizeof(strArr) << endl;
	cout << "class Base : " << sizeof(Base) << endl;
	return 0;
}
