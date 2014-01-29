#include <iostream>
#define aa (6)
#define SECONDS_PER_YEAR (60*60*24*365)
#define MIN(a,b) (a > b ? b : a)
using namespace std;

int main(){
	cout << aa << endl;
	cout << SECONDS_PER_YEAR << endl;
	cout << MIN(2, 5) << endl;
	return 0;
}
