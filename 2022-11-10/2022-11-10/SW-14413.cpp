#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	int T;
	int N, M;
	char S[51][51];
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		bool chk1 = true;
		bool chk2 = true;
		cin >> N >> M;
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				cin >> S[j][k];
			}
		}
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				if (S[j][k] == '?')
				{
					continue;
				}
				if ((j + k) % 2 == 0 && S[j][k] == '#') // S[j][k]가 짝수 부분이고 #인 경우
				{
					chk1 = false;
					break;
				}
				if ((j + k) % 2 != 0 && S[j][k] == '.') // S[j][k]가 홀수 부분이고 .인 경우
				{
					chk1 = false;
					break;
				}
			}
			if (!chk1)
			{
				break;
			}

		}
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				if (S[j][k] == '?')
				{
					continue;
				}
				if ((j + k) % 2 == 0 && S[j][k] == '.') // S[j][k]가 짝수 부분이고 #인 경우
				{
					chk2 = false;
					break;
				}
				if ((j + k) % 2 != 0 && S[j][k] == '#') // S[j][k]가 홀수 부분이고 .인 경우
				{
					chk2 = false;
					break;
				}
			}
			if (!chk2)
			{
				break;
			}
		}

		if (chk1==true || chk2==true)
		{
			cout << "#" << i << " possible" << "\n";
		}
		else cout << "#" << i << " impossible" << "\n";
	}
	return 0;
}