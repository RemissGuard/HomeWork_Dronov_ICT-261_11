#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
struct animal_t
{
	char name;
	char vid;
	char poroda;
	int age;
	int ves;
};
typedef struct animal_t A_t;
void put_input(A_t a);
int ma(A_t a, A_t b, A_t c);
A_t input();
int main()
{
	system("chcp 1251");
	A_t a = input();
	A_t b = input();
	A_t c = input();
	int min = ma(a, b, c);
	printf("1Минимальный возраст среди всех питомцев: %d\n\n", min);
	puts("Сведения о питомцах с минимальным возрастом:");
	if (a.age == min)put_input(a);
	if (b.age == min)put_input(b);
	if (c.age == min)put_input(c);
	return 0;
}
A_t input(void)
{
	A_t a;
	puts("2Введите кличку, вид, породу, возраст и вес питомца");
	scanf("%c\n%c\n%c\n%d\n%d", &a.name, &a.vid, &a.poroda, &a.age, &a.ves);
	getchar();
	return a;
}
int ma(A_t a, A_t b, A_t c)
{
	int m = a.age;
	if (m > b.age) m = b.age;
	else if (m > c.age) m = c.age;
	return m;
}
void put_input(A_t a)
{
	printf("%c\n%c\n%c\n%d\n%d\n", a.name, a.vid, a.poroda, a.age, a.ves);
}