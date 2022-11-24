#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool visited[101];
vector <int> graph[101];
int cnt = 0;
void dfs(int r)
{
	visited[r] = true;
	for (int i = 0; i < graph[r].size(); i++)
	{
		int y = graph[r][i];
		if (!visited[y])
		{
			dfs(y);
			cnt++;
		}
	}
}
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int com; // 컴퓨터의 수
	int com_pair; // 컴퓨터의 쌍의 수
	int u, v;

	cin >> com;
	cin >> com_pair;
	for (int i = 1; i <= com_pair; i++)
	{
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	dfs(1);
	cout << cnt << "\n";

	return 0;
}