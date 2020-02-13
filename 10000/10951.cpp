#include <iostream>
#pragma warning (disable:4996)

int main() {
	int i, j;

	while (scanf("%d %d", &i,&j)==2) {
		printf("%d\n", i + j);
	}
}
