#include <iostream>
using namespace std;
int day[7];
int main()
{
	int TC; //�׽�Ʈ ���̽��� ��
	int n; // n�ϵ��� ���� ���
	int cnt; // �ּ� �ϼ�
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
			int check = 0, idx = 0; //�� ��, idx�� 
			while (check != n)
			{
				if (day[(j + idx) % 7]) check++; //i��°�� idx�� ���ϰ� 7�� ���� ������ �ε����� day�� 1�̸� �� ���� ������Ų��.
				idx++; //idx�� 1 ���� ��Ų��.
			}
			MaxClass = min(MaxClass, idx);
		}
		cout << "#" << i << " " << MaxClass << "\n";

	}

	return 0;
}