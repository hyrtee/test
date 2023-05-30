#include <stdio.h>
#include <hello.h>
void print(int a) {
	printf("hello world, %d\n", &a);
}
int main() {
	print(a);
	return 0;
}
