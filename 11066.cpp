#include <iostream>
#include <algorithm>
#include <limits.h> // limits에는 INT_MAX가 없다.
using namespace std;
int sum[501]; // 1장부터 K장까지 수록한 파일의 크기
int dp[501][501];
int main()
{
	int T; //테스트케이스
	int K; //소설을 구성하는 장의 수 3~500

	int num; // 입력받는 비용
	cin >> T;
	while (T--)
	{
		cin >> K;
		for (int i = 1; i <= K; i++)
		{
			cin >> num;
			sum[i] = sum[i - 1] + num;
		}
		for (int i = 1; i < K; i++)
		{
			for (int x = 1; x <= K - i; x++)
			{
				int y = x + i;
				dp[x][y] = INT_MAX;

				for (int mid = x; mid < y; mid++)
				{					
					dp[x][y] = min(dp[x][y], dp[x][mid] + dp[mid+1][y] + sum[y] - sum[x - 1]);
				}
			}
		}
		cout << dp[1][K] << "\n";
	}


}