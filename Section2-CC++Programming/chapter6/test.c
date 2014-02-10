#include <stdio.h>

struct{
	short a1;
	short a2;
	short a3;
}A;

void main(){
	char *ptr = "csdn";
	printf("%c\n",*(ptr++));
	printf("%d\n",sizeof(A));
	char a;
	char b;
	char d;
	int c;
	printf("%08x\n",&a);
	printf("%08x\n",&b);
	printf("%08x\n",&c);
	printf("%08x\n",&d);
	
}
