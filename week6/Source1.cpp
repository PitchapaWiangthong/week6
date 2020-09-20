#include<stdio.h>
int main()
{
	int c;
	scanf_s("%d", &c);
	for (int r = 0; r < c; r++)
	{
		for (int s = 0; s < r + 1; s++)
		{
			printf("* ");
		}
		printf("\n");
	}
}