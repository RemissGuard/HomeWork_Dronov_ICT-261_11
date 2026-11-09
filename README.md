# **Домашнее задание к работе 11**

### Условие задачи:
Создать структуру для хранения записи, указанной в индивидуальном варианте. Организовать ввод трех значений структур. Выполнить обработку 3 переменных структурного типа согласно варианту: отбор записей по условию, вычисление характеристики, поиск экстремального значения или сортировку. Вывести результат. В отчёте представить описание структуры, ввод данных, основную функцию обработки и результаты проверки.

### **Вариант 9. Запись «Домашнее животное»**

Поля записи:

кличка

вид животного

порода

возраст

масса в килограммах

Вывести сведения о самом молодом животном. Если несколько животных имеют одинаковый минимальный возраст, вывести их всех.

## **1. Алгоритм**
Алгоритм
1. Начало
2. Создать структуру, включающую в себя кличку, вид, породу, возраст и вес питомца:
struct animal
{
	char name[50]; - кличка питомца
	char vid[50]; - вид (кошка, собака и т.д.)
	char poroda[50]; - порода
	int age; - возраст
	int ves; - вес
};
3. Создать массив структур, запросить у пользователя ввод данных и принять их:
A a[3];
for (int i = 0; i < 3; i++)
{
	puts("Введите кличку, вид, породу, возраст и вес питомца");
	scanf("%s\n%s\n%s\n%d\n%d",&a[i].name, &a[i].vid, &a[i].poroda, &a[i].age, &a[i].ves);
	getchar();
}
4. Вычислить минимальный возраст среди всех питомцев:
int min = a[0].age;
for (int i = 0; i < 3; i++)
{
	if (a[i].age < min) min = a[i].age;
}
6. Вывести минимальный возраст и данные о всех питомцах, которые ему соответствуют:
printf("Минимальный возраст среди всех питомцев: %d\n\n",min);
puts("Сведения о питомцах с минимальным возрастом:");
for (int i = 0; i < 3; i++)
{
	OemToCharA(a[i].name, a[i].name);
	OemToCharA(a[i].vid, a[i].vid);
	OemToCharA(a[i].poroda, a[i].poroda);
	if (a[i].age==min)printf("\n%s\n%s\n%s\n%d\n%d\n", a[i].name, a[i].vid, a[i].poroda, a[i].age, a[i].ves);
}
7. Конец

## **2. Реализация программы**
```
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
	int min = ma(a,b,c);
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
```	
## **3. Результаты работы программы**
<img width="421" height="531" alt="image" src="https://github.com/user-attachments/assets/d872888f-afa5-40bc-ba30-c70206421300" />

## **4. Информация о разработчике**

Дронов Кирилл бИЦТ-261
