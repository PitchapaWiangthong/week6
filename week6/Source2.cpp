#include<stdio.h>
int main()
{
	int n, i = 0, j = 0;
	scanf_s("%d", &n);
	while (i != 1)
	{
		for (int r = 0; r < n; r++)
		{
			for (int s = 0; s < r + 1; s++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i; j < n - 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		i++;
	}
}