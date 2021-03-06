// ConsoleApplication11.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
using namespace std;

int main()
{
	int Ra, Ca, Rb, Cb;
	scanf("%d%d", &Ra, &Ca);
	int **a, **b, i, j, **c, k;

	a = (int **)malloc(sizeof(int *)*Ra);   
											
	for (size_t i = 0; i < Ra; i++)
	{
		a[i] = (int *)malloc(sizeof(int)*Ca);
	}
	for (size_t i = 0; i < Ra; i++)
	{
		for (size_t j = 0; j < Ca; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	scanf("%d%d", &Rb, &Cb);
	b = (int **)malloc(sizeof(int *)*Rb);
	for (size_t i = 0; i < Rb; i++)
	{
		b[i] = (int *)malloc(sizeof(int)*Cb);
	}
	for (size_t i = 0; i < Rb; i++)
	{ 
		for (size_t j = 0; j < Cb; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	c = (int **)malloc(sizeof(int *)*Ra);
	for (size_t i = 0; i < Cb; i++)
	{
		c[i] = (int *)malloc(sizeof(int)*Cb);
	}

	if (Ca != Rb)
	{
		printf("Error: Ca != Rb\n");
	}
	else
	{
		for (i = 0; i<Ra; i++)               
			for (j = 0; j < Cb; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < Ca; k++)
					c[i][j] += a[i][k] * b[k][j];
			}
		printf("%d %d\n", Ra, Cb);
		for (i = 0; i < Ra; i++)
		{
			for (j = 0; j < Cb; j++)
			{
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		}
		return 0;
	}