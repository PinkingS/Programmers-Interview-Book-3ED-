#include <stdio.h>
#include <string.h>

int main(){
	char *c = "abcdefd";
	//char a[] = "hello";
	//c = a;
	//printf("%c\n",*(c+1));
	
	printf("%d\n",sizeof(c));
	printf("%d\n",strlen(c));
	int a[] = {1, 2, 3, 4, 5};
	printf("%08x\n",&a);
	int *ptr = (int*)(&a+1);
	printf("%08x\n",ptr);
	printf("%d\n",*(ptr-1));
	return 0;
}
