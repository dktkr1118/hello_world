//#include <iostream>
//#include <algorithm>
//using namespace std;
//int arr[1003];
//int main()
//{
//	cin.tie(0);
//	cout.tie(0);
//	ios::sync_with_stdio(0);
//	int T = 10;
//	int N;
//	int cnt;
//	int height = 0;
//	for(int i=1; i<=T; i++)
//	{
//		cnt = 0;
//		cin >> N;
//		
//		for (int i = 0; i < N; i++)
//		{
//			cin >> arr[i];
//		}
//		for (int i = 2; i < N-1; i++)
//		{
//
//			height = arr[i] - max({ arr[i - 2],arr[i - 1],arr[i + 1],arr[i + 2] });
//
//			if (height > 0)
//			{
//				cnt += height;
//			}
//
//		}
//		printf("#%d %d\n", i, cnt);
//	}
//
//
//
//}
// 1Â÷ÄÚµå : 
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int arr[1003];
//int main()
//{
//	cin.tie(0);
//	cout.tie(0);
//	ios::sync_with_stdio(0);
//	int T = 10;
//	int N;
//	int cnt;
//	for (int i = 1; i <= T; i++)
//	{
//		cnt = 0;
//		cin >> N;
//
//		for (int i = 0; i < N; i++)
//		{
//			cin >> arr[i];
//		}
//		for (int i = 2; i < N; i++)
//		{
//			if (arr[i] > arr[i - 1] && arr[i] > arr[i - 2])
//			{
//				if (arr[i] > arr[i + 1] && arr[i] > arr[i + 2])
//				{
//					cnt += min({ arr[i] - arr[i - 2], arr[i] - arr[i - 1], arr[i] - arr[i + 1], arr[i] - arr[i + 2] });
//				}
//			}
//
//		}
//		printf("#%d %d\n", i, cnt);
//	}
//
//
//
//}