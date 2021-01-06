#include <stdio.h>
#include <iostream>
using namespace std;
#define max 100
int main()
{
	int M, N, b;
	int i, j, m, n, d = 0;
	char str[max][max] = { 0 };
	cout << "ÊäÈë£º" << endl;
	cin >> M >> N;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cin >> str[i][j];
		}

	}
	cin >> b;
	do
	{
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
			{
				if (str[i][j] == 'X')
				{
					{	if (str[i - 1][j] = 'O')
						str[i - 1][j] = 'm';
					if (str[i + 1][j] = 'O')
						str[i + 1][j] = 'm';
					if (str[i][j + 1] = 'O')
						str[i][j + 1] = 'm';
					if (str[i][j - 1] = 'O')
						str[i][j - 1] = 'm';
					}
				}
			}

		}
		d++;
		for (m = 0; m < N; m++)
		{
			for (n = 0; n < M; n++)
			{
				if (str[m][n] == 'm')
					str[m][n] = 'X';
			}
		}
	} while (d < b);
	cout << "Êä³ö£º" << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cout << str[i][j];
		}
		cout << endl;
	}

}
