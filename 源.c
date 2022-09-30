#include<stdio.h>
int main()
{
	int i;
	int input = 0;
	int num[10] = { 0 };
	/*for (i = 0; i < 10; i++)
	{
		num[i] = 0;
	}*/
	scanf_s("%d", &input);
	while (input != -1)
	{
		if (input >= 0 && input <= 9)
		{
			num[input]++;
		}
		
		scanf_s("%d", &input);
	}
	
	for (i = 0; i <= 9; i++)
	{
		printf("%d: %d\n",i, num[i]);
	}
	return 0;
}