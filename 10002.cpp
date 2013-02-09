#include <stdio.h>

int main() {
	int a=0;
	int b=0;

	scanf("%d %d", &a, &b);
	int area = a*b;
	int length = 2*a + 2*b;
	printf("%d %d\n", area, length);
	return 0;
}
