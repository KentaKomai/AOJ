#include <cmath>
#include <cstdio>

using namespace std;

int main() {
	int a, b, c;
	while(scanf("%d %d", &a, &b) != EOF){
		c = (int)log10(a+b) + 1;
		printf("%d\n", c);
	}
	return 0;
}
