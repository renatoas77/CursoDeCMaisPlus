#include <iostream>
int main()
{
	int Matriz[5][5];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < j)
			{
				Matriz[i][j] = 1;
			}
			else if (i > j)
			{
				Matriz[i][j] = -1;
			}
			else
			{
				Matriz[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << Matriz[i][j];
		}
		std::cout << "\n";
	}

	system("PAUSE");
	return 0;
}