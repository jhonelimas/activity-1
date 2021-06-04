#include <stdio.h>
#include <stdlib.h>


// Activity list 1
int main() {
	int x, y;
	int *ptr = &x;
	*ptr = 14;
	y = *ptr;
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	
	return 0;
}