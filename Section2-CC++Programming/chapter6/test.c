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
}
