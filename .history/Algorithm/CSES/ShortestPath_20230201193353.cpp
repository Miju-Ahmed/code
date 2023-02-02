#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int n, m;

vector<vector<pair<int,int>>> path;
vector<vector<bool>> vis;

int sx, sy, ex, ey;

vector<pair<int,int>> moves = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool isValid(int x, int y)
{
	if(x<0 or x >= n or y <0 or y>=m)
		return false;
	if(vis[x][y])
		return false;
	return true;
}

void bfs()
{
	queue<pair<int,int>> q;
	q.push({sx,sy});
	while(!q.empty())
	{
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();
		for(auto mv: moves)
		{
			int mvx = mv.first;
			int mvy = mv.second;
			if(isValid(cx+mvx, cy+mvy))
			{
				q.push({cx+mvx, cy+mvy});
				vis[cx+mvx][cy+mvy] = true;
				path[cx+mvx][cy+mvy] = {mvx,mvy};
			}
		}
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	path.resize(n);
	vis.resize(n);
	for(int i = 0; i < n; ++i)
	{
		path[i].resize(m);
		vis[i].resize(m);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			path[i][j] = {-1,-1};
			char c; cin >> c;
			if(c == '#')
			{
				vis[i][j] = true;
			}
			if(c == 'A')
			{
				sx = i; sy = j;
			}
			if(c == 'B')
			{
				ex = i; ey = j;
			}
		}
	}
	bfs();

	if(!vis[ex][ey])
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;

	vector<pair<int,int>> ans;
	pair<int,int> end = {ex,ey};
	
	while(end.first != sx or end.second != sy)
	{
		ans.push_back(path[end.first][end.second]);
		end.first -= ans.back().first;
		end.second -= ans.back().second;	
	}

	reverse(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for(auto c: ans)
	{
		if(c.first == 1 and c.second ==0)
		{
			cout << 'D';
		}
		else if(c.first == -1 and c.second ==0)
		{
			cout << 'U';
		}
		else if(c.first == 0 and c.second == 1)
		{
			cout << 'R';
		}
		else if(c.first == 0 and c.second == -1)
		{
			cout << 'L';
		}
	}
}