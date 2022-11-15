#include <iostream>
using namespace std;
int map[501][501];
int dp[501][501];
int dfs(int row, int col, int maxRow, int maxCol)
{
	int x[4] = {  -1,0,1,0 };
	int y[4] = {  0,1,0,-1 };

	if (row == maxRow && col == maxCol) // 끝에 도달
	{
		return 1;
	}
	if (dp[row][col] >= 0)
	{
		return	dp[row][col];
	}
	if (dp[row][col] == -1)
	{
		dp[row][col] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (row + x[i] >= 0 && row + x[i] <= maxRow && col + y[i] >= 0 && col + y[i] <= maxCol && map[row + x[i]][col + y[i]] < map[row][col])
		{
				dp[row][col] += dfs(row + x[i], col + y[i], maxRow, maxCol);
		}
	}
	return dp[row][col];
}
int main()
{
	int M, N; // 세로의 크기, 가로의 크기
	cin >> M >> N;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			dp[i][j] = -1;
			cin >> map[i][j];
		}

	}
	dfs(0, 0, M-1, N-1);

	cout << dp[0][0];

	return 0;
}