//#include <iostream>
//using namespace std;
//int arr[1000000];
//int main()
//{
//	int T; //테스트케이스의 개수
//	int N;
//	int price=0;
//	int n_price = 0;
//	int cnt = 0;
//	int Max = 0;
//	int Mx_price = 0;
//
//	cin >> T;
//	for (int i = 1; i <= T; i++)
//	{
//		cin >> N;
//		for (int i = 1; i <= N; i++)
//		{
//			cin >> arr[i];
//		}
//		for (int i = 2; i < N; i++)
//		{
//			if (arr[i - 1] < arr[i])
//			{
//				cnt++;
//				Max = arr[i];
//				price += arr[i - 1];
//			}
//		}
//		Mx_price += (cnt*Max) - price;
//		cout << "#" << i << " " << Mx_price << "\n";
//	}
//
//	return 0;
//}