#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int sum (int a, int b) // функция вычисления суммы двух чисел
{
    int c = a + b;  // вычисляем сумму
	return c;  // возвращаем сумму
}


int main ()
{
	printf("%sHello, World!\n", );
	int a,b,c;
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	c = sum(a, b); // вызов функции суммы
	printf("The sum of two numbers is %d\n", c);
	return 0;
}