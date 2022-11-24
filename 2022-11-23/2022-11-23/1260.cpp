#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int dfs_result[10001];
int bfs_result[10001];
bool bfs_visited[10001];
bool dfs_visited[10001];
vector <int> graph[10001];
queue<int>q;
void dfs(int v)
{
	if (dfs_visited[v])	return;
	cout << v << " ";
	dfs_visited[v] = true;

	for (auto i : graph[v])
	{
		if (!dfs_visited[i])
		{ 
			dfs(i); 
		}
	}
}
void bfs(int v)
{
	q.push(v);
	while (!q.empty())
	{
		int firq = q.front();
		q.pop();
		if (bfs_visited[firq])	continue;
		cout << firq << " ";
		bfs_visited[firq] = true;

		for (auto i : graph[firq])
		{
			if (!bfs_visited[i])
			{
				q.push(i);
			}
		}
	}
}
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	int N, M, V;
	int a, b;

	cin >> N >> M >> V;
	for (int i = 1; i <= M; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 1; i <= N; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(V);
	cout << "\n";
	bfs(V);


	return 0;
}