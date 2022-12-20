#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int count = 0;
	int x, y;
	int what;
	int correct = 0;
	int user;
	for (int count = 0; count < 10; count++) {
		x = rand()%20;
		y = rand() % 20;
		what = rand() % 3;
		switch (what)
		{
		case 0: printf("\n[%d/10] %d + %d =", count, x, y); correct = x+y; break;
		case 1: printf("\n[%d/10] %d - %d =", count, x, y); correct = x - y; break;
		case 2: printf("\n[%d/10] %d * %d =", count, x, y); correct = x * y; break;
		case 3: printf("\n[%d/10] %d / %d =", count, x, y); correct = x / y; break;
		default : printf("\n[%d/10] %d + %d =", count, x, y); correct = x + y; break;
		}
		scanf_s("%d", &user);
		if (user == correct) {
			printf("Correct!");
		}
		else {
			printf("Wrong! Answer is %d", correct);
			count--;
		}
	}
}