//#include <iostream>
//#include <string>
//using namespace std;
//int GCD(int a, int b) //최대공약수
//{
//	if (b==0) return a;
//	else return GCD(b, a % b);
//}
//int LCM(int a, int b) // 최소공배수
//{
//	return a * b / GCD(a, b);
//}
//int main()
//{
//	string S;
//	string T;
//	int lcmVal;
//	int test_case;
//	cin >> test_case;
//	for (int i = 1; i <= test_case; i++)
//	{
//		string S_c;
//		string T_c;
//
//		cin >> S >> T;
//		lcmVal = LCM(S.size(),T.size());
//		for (int j = 0; j < lcmVal / S.size(); j++) 
//		{
//			S_c += S;
//		}
//		for (int j = 0; j < lcmVal / T.size(); j++)
//		{
//			T_c += T;
//		}
//		if (S_c == T_c)
//		{
//			cout << "#" << i << " " << "yes" << "\n";
//		}
//		else cout << "#" << i << " " << "no" << "\n";
//	}
//	return 0;
//}
		//char S_c[51] = "";
		//char T_c[51] = "";
		//strcat(S_c, S);
		//strcat(T_c, T);
		//while (strlen(S_c) != strlen(T_c)) 
		//{
		//	if (strlen(S_c) > strlen(T_c))
		//	{
		//		strcat(T_c, T);
		//	}
		//	else if (strlen(S_c) < strlen(T_c))
		//	{
		//		strcat(S_c, S);
		//	}
		//}
		//if (strcmp(S_c, T_c) == 0)
		//{
		//	cout << "#" << i << " " << "yes" << "\n";
		//}
		//else cout << "#" << i << " " << "no" << "\n";