#include <stdio.h>
int main ()
{
	int n, i;
unsigned long long factorial = 1;

printf("Enter a positive number (n): ");
scanf("%d", &n);

i = 1;

if ( n < 0 ) {
printf("Enter a positive number");
}
else {
while ( i <= n) {
	factorial *= i;
	i++;	
}
}
printf("Factorial is = %d\n", factorial);
return 0;
}
