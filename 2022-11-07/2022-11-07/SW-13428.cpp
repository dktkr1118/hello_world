#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string swap(int s, int e, string t)
{
	char buf = t[s];
	t[s] = t[e];
	t[e] = buf;
	return t;
}
int main()
{
	int T;
	int N;
	int len;
	int Max;
	int Min;
	string S;
	string S_change;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> N;
		S = to_string(N);
		Min = N;
		Max = N;
		for (int j = 0; j < S.length()-1; j++)
		{
			for (int k = j + 1; k < S.length(); k++)
			{
				S_change = swap(j, k, S);
				if (S_change[0] == '0')
				{
					continue;
				}
				Max = max(stoi(S_change), Max);
				Min = min(stoi(S_change), Min);
			}
		}

		cout << "#" << i << " " << Min << " " << Max << "\n";
	}
	return 0;
}