#include <stdio.h>

int main(int argc, char **argv){
	printf("test");
	int max = 50;
	int a = 3;
	int b = 2;
	for (int i = 0; i < max; i = i + 1){
		if (a == i && b == i ){
			printf("fizzbuzz\n");
			a = a + 3;
			b = b + 2;}
		else if (a == i){
			printf("fizz\n");
			a = a + 3;
			}
		else if (b == i){
			printf("buzz\n");
			b = b + 2;}
		else{printf("%d\n", i);}
		}
	
	return 0;
}

