#include <iostream>
using namespace std;
int day[7];
int main()
{
	int TC; //테스트 케이스의 수
	int n; // n일동안 수업 듣기
	int cnt; // 최소 일수
	cin >> TC;
	
	for (int i = 1; i <= TC; i++)
	{
		cin >> n;
		int MaxClass = 700000;
		for (int j = 0; j < 7; j++)
		{
			cin >> day[j];
		}
		for (int j = 0; j < 7; j++)
		{
			int check = 0, idx = 0; //일 수, idx값 
			while (check != n)
			{
				if (day[(j + idx) % 7]) check++; //i번째에 idx를 더하고 7로 나눈 나머지 인덱스의 day가 1이면 일 수를 증가시킨다.
				idx++; //idx를 1 증가 시킨다.
			}
			MaxClass = min(MaxClass, idx);
		}
		cout << "#" << i << " " << MaxClass << "\n";

	}

	return 0;
}