#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	unsigned char a = 0xA5;
	unsigned char b = ~a>>4+1;
	unsigned int c = 0xFFFF1234;
	int d = 0xFFFF1234;
	printf("right shift for unsigned int will add 0s on the left end : %08x\n",c>>8);
	printf("right shift for signed int will add 0s or 1s according to the signe bit : %8x\n",d>>8);
	printf("sizeof(~a) : %d\n",sizeof(~a));
	printf("b=%d\n",b);
	return 0;
}
