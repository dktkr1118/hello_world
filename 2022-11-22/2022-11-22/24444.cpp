#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
bool visited[100001];
int result[100001];
int cnt = 0;
vector <int> graph[100001];
void bfs(int r)
{
	queue <int > q;
	q.push(r);
	visited[r] = true;
	cnt++;
	result[r] = cnt;
	while (!q.empty())
	{
		int firq = q.front();
		q.pop();

		for (int i = 0; i < graph[firq].size(); i++)
		{
			int y = graph[firq][i];
			if (visited[y]==false)
			{
				cnt++;
				result[y] = cnt;
				q.push(y);
				visited[y] = true;
			}
		}

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
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}
	bfs(R);
	for (int i = 1; i <= N; i++)
	{
		cout << result[i] << "\n";
	}
	return 0;
}