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

int div (int a, int b) // функция вычисления частного двух чисел
{
    int c = a / b;  // вычисляем частное
	return c;  // возвращаем частное
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
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	if (b!=0)
	{
		c = div(a, b);
		printf("The division of two numbers is %d\n", c); // вызов функции деления, при делителе не равном нулю.
	}
	else
	{
		printf("The division cannot be performed when the divisor is 0\n"); // вывод сообщения о невозможности деления на ноль.
	}	
	return 0;
}