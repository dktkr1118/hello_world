#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int TC;
	int A, B;
	int cnt;
	cin >> TC;
	for (int t = 1; t <= TC; t++)
	{
		cnt = 0;
		cin >> A >> B;
		for (int i = A; i <= B; i++)
		{
			if (sqrt(i) == (int)sqrt(i)) // 10�� ��� ��Ʈ10�� (int)��Ʈ10�� �ٸ��� 1 4 9 
			{
				string tmp = to_string(i);
				string rev = tmp;
				reverse(rev.begin(), rev.end());
				string tmp2 = to_string((int)sqrt(i));
				string rev2 = tmp2;
				reverse(rev2.begin(), rev2.end());
				if (tmp == rev && tmp2 == rev2)
				{
					cnt++;
				}
			}
		}
		cout << "#" << t << " " << cnt << "\n";
	}

	return 0;
}