//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int TC;
//	long long int N;
//	int PerD; // ���� �̱� ���� �ۼ�Ʈ
//	int PerG; // ���ñ��� �̱� ���� �ۼ�Ʈ
//	cin >> TC;
//	for (int i = 1; i <= TC; i++)
//	{
//		bool flag = false;
//		cin >> N >> PerD >> PerG;
//		if ((PerG == 100 && PerD != 100) || (PerG == 0 && PerD != 0))
//		{
//			cout << "#" << i << " Broken" << "\n";
//		}
//		else 
//		{
//			for (int j = 1; j <= N; j++)
//			{
//				if ((PerD * j) % 100==0)
//				{
//					flag = true;
//					break;
//				}
//			}
//			if (flag)
//			{
//				cout << "#" << i << " Possible" << "\n";
//			}
//			else
//			{
//				cout << "#" << i << " Broken" << "\n";
//			}
//		}	
//	}
//	return 0;
//}