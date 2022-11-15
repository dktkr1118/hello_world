#include <iostream>
#include <limits.h>
using namespace std;
int mat[501][2];
int dp[501][501];
int main()
{
	int N;
	int r, c;
	cin >> N;
	for(int i=1; i<=N; i++)
	{
		cin >> r >> c;
		mat[i][0] = r; // 5 3 2
		mat[i][1] = c; // 3 2 6
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N - i; j++)
		{
			int k = i + j;
			dp[j][k] = INT_MAX;

			for (int mid = j; mid < k; mid++)
			{
				dp[j][k] = min(dp[j][k], dp[j][mid] + dp[mid + 1][k] + mat[j][0] * mat[mid][1] * mat[k][1]);
			}
		}
	}
	cout << dp[1][N] << "\n";



	return 0;
}