#include <stdio.h>


int main(){
	char *c = "abcd";
	//char a[] = "hello";
	//c = a;
	//printf("%c\n",*(c+1));
	int a[] = {1, 2, 3, 4, 5};
	printf("%08x\n",&a);
	int *ptr = (int*)(&a+1);
	printf("%08x\n",ptr);
	printf("%d\n",*(ptr-1));
	return 0;
}
