#include<stdio.h>

int main() {
	
	int a = 2;
	int b = 3;
	int c;
	c = (a++ ,b++,a+b, b++, ++b);
	printf("value %d", c);
	
	return 0;

}
