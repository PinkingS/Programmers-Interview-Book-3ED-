#include <stdio.h>

int max(int x, int y){
	return x > y ? x : y;
}

int main(){
	int (*f)(int,int) = max;

	int a = 2;
	int b = 3;
	int c =(*f)(a,b);
	printf("%d\n",c);
	return 0;
}
