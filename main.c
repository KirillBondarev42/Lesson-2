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

int test_sum (int a, int b) 
{
	int c = sum(a, b);
    if (c = a + b)
    {
    	printf("The sum works correctly\n"); // тест работы функции суммы
    	return 0;
    }
}

int test_dif (int a, int b) 
{
	int c = dif(a, b);
    if (c = a - b)
    {
    	printf("The difference works correctly\n"); // тест работы функции разности
    	return 0;
    }
}

int test_mult (int a, int b) 
{
	int c = mult(a, b);
    if (c = a * b)
    {
    	printf("The multiplication works correctly\n"); // тест работы функции умножения
    	return 0;
    }
}

int test_div (int a, int b) 
{
	int c = div(a, b);
    if (c = a / b)
    {
    	printf("The division works correctly\n"); // тест работы функции деления
    	return 0;
    }
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
	test_sum(a, b);
	test_dif(a, b);
	test_mult(a, b);
	test_div(a, b);
	return 0;
}