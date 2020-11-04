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

int test_sum (int a, int b) // тест работы функции суммы
{
	int c = sum(a, b);
    if (c = a + b)
    {
    	printf("The sum works correctly\n"); 
    	return 0;
    }
}

int test_dif (int a, int b) // тест работы функции разности
{
	int c = dif(a, b);
    if ((c = 0) || (c = a - b) || (a = b))
    {
    	printf("The difference works correctly\n"); 
    	return 0;
    }
       else
    {
    	printf("The difference works incorrectly\n");
    }
}

int test_mult (int a, int b) // тест работы функции умножения
{
	int c = mult(a, b);
    if (c = a * b)
    {
    	printf("The multiplication works correctly\n"); 
    	return 0;
    }
    else
    {
    	printf("The multiplication works incorrectly\n");
    }
}

int test_div (int a, int b) // тест работы функции деления
{
	int c = div(a, b);
    if ((b!=0) & (c = a / b))
    {
    	printf("The division works correctly\n"); 
    	return 0;
    }
    else
    {
    	printf("The division works incorrectly\n");
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
	test_sum(a, b); // вызов теста функции суммы
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	c = dif(a, b); // вызов функции разности
	printf("The difference of two numbers is %d\n", c);
	test_dif(a, b); // вызов теста функции разности
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	c = mult(a, b); // вызов функции произведения
	printf("The multiplication of two numbers is %d\n", c);
	test_mult(a, b); // вызов теста функции произведения
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
	test_div(a, b);	// вызов теста функции деления
	return 0;
}