#pragma warning(disable: 4996)
#include<stdio.h>
#include<windows.h>
#include <stdlib.h>

#include <time.h> // time()함수 포함 라이브러리


int main()
{
	srand(time(NULL));
	int a = 1, b = 2, c = 3, coin = 1, n1 = 0, n2 = 0, i = 0, answer;
	i = rand() % 8 + 5;
	printf("처음 동전이 있는 위치는 1번입니다. (바뀌는 컵은 0번으로 바뀜)");
	Sleep(2000);
	system("cls");
	for (int k=0; k <i;k++) {
		printf("%d %d %d", a, b, c);
		Sleep(400);
		random:
		n1 = rand() % 3 + 1;
		n2 = rand() % 3 + 1;

		if (n1 == 1 || n2 == 1)
			a = 0;
		if (n1 == 2 || n2 == 2)
			b = 0;
		if (n1 == 3 || n2 == 3)
			c = 0;
		if (n1 == n2) {
			a = 1;
			b = 2;
			c = 3;
			goto random;
		}
		if (coin == n1) {
			coin = n2;
		}
		else if (coin == n2) {
			coin = n1;
		}

		system("cls");
		printf("%d %d %d", a, b, c);
		Sleep(500);
		a = 1;
		b = 2;
		c = 3;

		system("cls");
		printf("%d %d %d",a,b,c);
		Sleep(250);
		system("cls");
	}
	printf("1 2 3\n동전이 있는 위치는? : ");
	scanf("%d", &answer);
	if (answer == coin)
		printf("성공");
	else
		printf("실패");
}