#include <stdio.h>


int main(){
	char *c = "abcd";
	char a[] = "hello";
	c = a;
	printf("%c\n",*(c+1));
	return 0;
}
