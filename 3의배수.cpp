#include<stdio.h>
#include<conio.h>

int main() {
	int a, i;
	printf("���� �Է�(3�� ��� ���) : ");
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
	getch();
}