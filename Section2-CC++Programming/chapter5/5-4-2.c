#include <stdio.h>

int main(){
	unsigned int a = 0x12348678;
	unsigned char i = (unsigned char)a;
	char* b = (char*)&a;
	printf("%0x,%0x", i, *(b+1));
}
