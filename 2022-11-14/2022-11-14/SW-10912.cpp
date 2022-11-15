#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string S;
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> S;
		vector <char> v;
		sort(S.begin(), S.end());
		for (int k = 0; k < S.size(); k++)
		{
			if (v.empty())
			{
				v.push_back(S[k]);
			}
			else if (v.back() == S[k])
			{
				v.pop_back();
			}
			else
			{
				v.push_back(S[k]);
			}
		}
		cout << "#" << i << " ";
		if (v.empty())
		{
			cout << "Good" << "\n";
		}
		else
		{
			for (int j = 0; j < v.size(); j++)
			{
				cout << v[j];
			}
			cout << "\n";
		}
	}

	return 0;
}