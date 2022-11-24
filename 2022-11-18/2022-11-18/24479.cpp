#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool visited[100001];
int result[100001];
int cnt = 0;
vector <int> graph[100001];
void dfs(int r)
{
	visited[r] = true;
	cnt++;
	result[r] = cnt;
	for (int i = 0; i < graph[r].size(); i++)
	{
		int y = graph[r][i];
		if (!visited[y]) dfs(y);
	}
	
}
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	int N; // 정점의 수
	int M; // 간선의 수
	int R; // 시작 정점
	int u;
	int v;
	cin >> N >> M >> R;
	vector <pair<int, int>> v1;
	for (int i = 1; i <= M; i++)
	{
		cin >> u >> v;
		//비방향그래프라서 u,v / v,u가 가능하다.
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(R);
	for (int i = 1; i <= N; i++)
	{
		cout << result[i] << "\n";
	}
	return 0;
}