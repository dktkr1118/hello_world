#include <iostream>
using namespace std;
int A[2001];
int dp[2001][2001];
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int N; // ������ ũ��
	int M; //������ ����
	int S, E; //���� S���� E����

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}
	cin >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			dp[i][j] = 1;
		}
	}

	for (int i = 2; i <= N; i++) //���� �� �����صα�.
	{
		for (int j = 1; j < i + 1; j++)
		{
			if (i == j)
			{
				dp[i][j] = 1;
			}
			else
			{
				if (A[i] == A[j])
				{
					dp[j][i] = min(dp[j + 1][i - 1], 1);
				}
				else dp[j][i] = min(dp[j + 1][i - 1], 0);
			}
		}
	}
	//for (int i = 1; i <= N; i++)
	//{
	//	for (int j = 1; j <= N; j++)
	//	{
	//		cout << dp[i][j] << " ";
	//	}
	//	cout << "\n";
	//}
	while (M--)
	{
		cin >> S >> E;

		cout << dp[S][E] << "\n";
	}
}