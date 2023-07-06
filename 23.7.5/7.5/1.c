#include<stdio.h>
#include"1.h"

//void test(int* a, int* b)
//{
//	*a = 7;
//	*b = 7;
//}
//int i = 2;
//int j = 2;
char i = 5;
char j = 6;
void asd(char* a, char* b)
{
	*a = 'm';
	*b = 'n';
}
//void asd()
//{
//	int i;
//	for (i = 1; i < 4; i++)
//	{
//		static int a = 3;
//		a++;
//		printf("%d\n", a);
//	}
//}
int main()
{
	//int i;
	//for(i=1;i<5;i++)
	//{
	//static int a = 1;
	// a++;
	// printf("%d", a);
	////}
	//printf("%d", array);

	//int *a ;
	//a = 2000;
	//int c=1,d;
	//int *b=&d;
	///* *b = c;*/
	// b =5;
	////printf("%d\n", b);
	//printf("%d   %d\n", a,b);
	//test(&i, &j);
	//printf("%d\n%d", i, j);
	//int ch = 4;
	//int* p = &ch;
	//int** p_1 = &p;
	//printf("%d\n%d",*p, **p_1);
	float a = 3.14,b=5.20;
	float* p_1 = &a;
	float* p_2 = &b;
	printf("%.2f\n%.2f", *p_1, *p_2);
	//int a, b;
	//asd(&a,& b);
	//printf("%c\n%c", a, b);

	//asd();
	return 0;
}
