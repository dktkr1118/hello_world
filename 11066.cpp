#include <iostream>
#include <algorithm>
#include <limits.h> // limits���� INT_MAX�� ����.
using namespace std;
int sum[501]; // 1����� K����� ������ ������ ũ��
int dp[501][501];
int main()
{
	int T; //�׽�Ʈ���̽�
	int K; //�Ҽ��� �����ϴ� ���� �� 3~500

	int num; // �Է¹޴� ���
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