#include <iostream>
int main() {
	int num, notshy;
	scanf_s("%d", &num);
	notshy = num % 2;
	if (notshy == 1) printf("%d is odd number", num);
	else if(notshy==0) printf("%d is even number", num);
	else printf("Error");
}