#include<stdio.h>
#include<conio.h>

int main() {
	int a, i;
	printf("숫자 입력(3의 배수 출력) : ");
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
	getch();
}