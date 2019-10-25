#include <stdio.h>

int main(int argc, char **argv){
	printf("test");
	int max = 50;
	int a = 3;
	int b = 2;
	for (int i = 0; i < max; i = i + 1){
		if (a == i && b == i ){
			printf("fizzbuzz\n");
			a = a + a;
			b = b + b;}
		else if (a == i){
			printf("fizz\n");
			a = a + a;
			}
		else if (b == i){
			printf("buzz\n");
			b = b + b;}
		else{printf("%d\n", i);}
		}
	
	return 0;
}

