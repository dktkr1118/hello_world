#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int T;

	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int N;
		cin >> N;
		vector<string>v(N);
		string ans = "yes";

		int Max_X = 0;
		int Min_X = N;
		int Max_Y = 0;
		int Min_Y = N;

		for (int j = 0; j < N; j++)
		{
			cin >> v[j]; // v[j][0] = .
		}

		for (int x = 0; x < N; x++)
		{
			for (int y = 0; y < N; y++)
			{
				if (v[x][y] == '#')
				{
					Max_X = max(x, Max_X);
					Min_X = min(x, Min_X);
					Max_Y = max(y, Max_Y);
					Min_Y = min(y, Min_Y);
				}
			}
		}
		if (Max_X - Min_X != Max_Y - Min_Y)
		{
			ans = "no";
		}
		else
		{
			for (int x = 0; x < N; x++)
				for (int y = 0; y < N; y++)
					if ((v[x][y] == '#') ^ (Min_X <= x && x <= Max_X && Min_Y <= y && y <= Max_Y)) //범위 안에 있는데 v[x][y]가 #이 아니거나 범위 밖에 있는데 v[x][y]가 #이다
						ans = "no";
		}
		cout << "#" << i << " " << ans << "\n";
	}

	return 0;
}