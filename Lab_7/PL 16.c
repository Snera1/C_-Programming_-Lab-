#include <stdio.h>
int main ()
{
    int n=0;
    float j=1.0, i=2.0; 
    while ( i/j > 0.05) {
        j +=j;
        n++;
    }
    printf("n is = %d, j=%f\n", n, j);
    return 0;
}