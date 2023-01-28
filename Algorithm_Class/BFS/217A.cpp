#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int visit[200001];
int X[1000], Y[1000];
vector<int> Edges[200001];

int dfs(int x)
{
	int i;

	visit[x] = 1;
	for (i = 0; i < Edges[x].size(); i++) {
		if (!visit[Edges[x][i]]) {
			dfs(Edges[x][i]);
		}
	}

	return 1;
}

int main() {
	int ans;
	int n, x, y;
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d %d", &x, &y);
		X[i] = x;
		Y[i] = y;
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++) {
			if (X[i] == X[j] || Y[i] == Y[j]) {
				Edges[i].push_back(j);
				Edges[j].push_back(i);
			}
		}
	}
		
	ans = 0;

	for(i = 1; i <=n; i++){
		if (visit[i] == 0) {
			ans++;
			dfs(i);
		}
	}

	printf("%d", ans-1);


	return 0;
}