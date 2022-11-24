#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int graph[25][25];
bool visited[25][25];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0,1,0,-1 };
int N;
int dfs(int x, int y)
{
	int num = 0;
	if (x < 0 || y < 0 || x >= N || y >= N || visited[x][y] || graph[x][y] == 0)
	{
		return 0;
	}
	visited[x][y] = true;
	num = 1;
	for (int i = 0; i < 4; i++)
	{
		num += dfs(dx[i] + x, dy[i] + y);
	}
	return num;
}
int main()
{
	vector <int> v;
	string S;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> S;
		for (int j = 0; j < N; j++)
		{
			graph[i][j] = S[j] - '0';
		}
	}	

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (graph[i][j] == 1&&!visited[i][j])
			{
				v.push_back(dfs(i,j));
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (auto i=0; i<v.size(); i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}
	//for (int i = 0; i < N; i++)
	//{
	//	for (int j = 0; j < N; j++)
	//	{
	//		cout << graph[i][j] << " ";
	//	}
	//	cout << "\n";
	//}