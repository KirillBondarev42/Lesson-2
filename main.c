#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int sum (int a, int b) // функция вычисления суммы двух чисел
{
    int c = a + b;  // вычисляем сумму
	return c;  // возвращаем сумму
}

int dif (int a, int b) // функция вычисления разности двух чисел
{
    int c = a - b;  // вычисляем разность
	return c;  // возвращаем разность
}

int mult (int a, int b) // функция вычисления произведение двух чисел
{
    int c = a * b;  // вычисляем разность
	return c;  // возвращаем произведение
}

int main ()
{
	printf("Hello, World!\n");
	int a,b,c;
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	c = sum(a, b); // вызов функции суммы
	printf("The sum of two numbers is %d\n", c);
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	c = dif(a, b); // вызов функции разности
	printf("The difference of two numbers is %d\n", c);
		printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	c = mult(a, b); // вызов функции произведения
	printf("The multiplication of two numbers is %d\n", c);
	return 0;
}