#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	int T;
	cin >> T;
	int arr[10];
	string N; //1,000,000
	string s;
	int num;
	for (int i = 1; i <= T; i++)
	{
		cin >> N;
		num = stoi(N);
		s = "impossible";
		while (next_permutation(N.begin(), N.end())) // 순열 출력
		{
			if (stoi(N) % num == 0)
			{
				s = "possible";
				break;
			}
		}
		cout << "#" << i << " " << s << "\n";

	}

	return 0;
}
		//for (int j = 0; j < strlen(N); j++) 
		//{
		//	sum += N[j] - '0';
		//}
		//if (sum % 3 == 0)
		//{
		//	cout << "#" << i << " possible" << "\n";
		//}
		//else cout << "#" << i << " impossible" << "\n";