#pragma warning(disable: 4996)
#include<stdio.h>
#include<windows.h>
#include <stdlib.h>

#include <time.h> // time()�Լ� ���� ���̺귯��



/*int main()

{

	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����

	int random = 0; // ������ ���� ����

	for (int i = 0; i < 10; i++) { // 10�� �ݺ�

		random = rand() % 2; // ���� ����

		printf("%d\n", random); // ���

	}
int main()
{
	srand(time(NULL));
	int a = 1, b = 2, c = 3, coin = 1, n1 = 0, i = 0,answer;
	i = rand() % 8 + 5;
	printf("ó�� ������ �ִ� ��ġ�� 1���Դϴ�.");
	for (int k=0; k <i;k++) {
		system("cls");
		printf("%d %d %d", a, b, c);
		Sleep(250);
		random:
		n1 = rand() % 3 + 1;
		a = n1;

		if (a == 2) {
			b = coin;
			coin = a;
		}
		if (a == 3) {
			c = coin;
			coin = a;
		}
		if (a == b || b == c || c == a)
			goto random;
		system("cls");
		printf("%d %d %d",a,b,c);
		Sleep(100);
	}
	printf("1 2 3");
	scanf("%d", &answer);
	if (answer == coin)
		printf("����");
	else
		printf("����");
}

}*/


int main()
{
	srand(time(NULL));
	int a = 1, b = 2, c = 3, coin = 1, n1 = 0, n2 = 0, i = 0, answer;
	i = rand() % 8 + 5;
	printf("ó�� ������ �ִ� ��ġ�� 1���Դϴ�.");
	for (int k=0; k <i;k++) {
		printf("%d %d %d", a, b, c);
		Sleep(250);
		random:
		n1 = rand() % 3 + 1;
		n2 = rand() % 3 + 1;
		if (n1 == n2)
			goto random;
		if (n1 == a) {
			a = n2;

		}
		else if (n1 == b) {
			b = n2;
		}
		else if (n1 == c) {
			c = n2;
		}




		if (a == b || b == c || c == a)
			goto random;
		system("cls");
		printf("%d %d %d",a,b,c);
		Sleep(250);
		system("cls");
	}
	coin = a;
	printf("1 2 3\n������ �ִ� ��ġ��? : ");
	scanf("%d", &answer);
	if (answer == coin)
		printf("����");
	else
		printf("����");
}