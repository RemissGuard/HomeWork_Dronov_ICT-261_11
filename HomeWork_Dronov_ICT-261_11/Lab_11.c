#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<windows.h>
struct animal
{
	char name[50];
	char vid[50];
	char poroda[50];
	int age;
	int ves;
};
typedef struct animal A;
int main()
{
	setlocale(LC_ALL,"Russian");
	A a[3];
	for (int i = 0; i < 3; i++)
	{
		puts("Введите кличку, вид, породу, возраст и вес питомца");
		scanf("%s\n%s\n%s\n%d\n%d",&a[i].name, &a[i].vid, &a[i].poroda, &a[i].age, &a[i].ves);
		getchar();
	}
	int min = a[0].age;
	for (int i = 0; i < 3; i++)
	{
		if (a[i].age < min) min = a[i].age;
	}
	printf("Минимальный возраст среди всех питомцев: %d\n\n",min);
	puts("Сведения о питомцах с минимальным возрастом:");
	for (int i = 0; i < 3; i++)
	{
		OemToCharA(a[i].name, a[i].name);
		OemToCharA(a[i].vid, a[i].vid);
		OemToCharA(a[i].poroda, a[i].poroda);
		if (a[i].age==min)printf("\n%s\n%s\n%s\n%d\n%d\n", a[i].name, a[i].vid, a[i].poroda, a[i].age, a[i].ves);
	}
	return 0;
}