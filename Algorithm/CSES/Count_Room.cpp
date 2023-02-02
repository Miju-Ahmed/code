#include <bits/stdc++.h>
using namespace std;

int n, m, answer = 0;
bool visited[1010][1010];
char grid[1010][1010];
vector<pair<int,int>>moves = {{-1,0},{1,0},{0,1},{0,-1}};

bool isValid (int y, int x) {
  if(y<0||y>=n||x<0||x>=m)  return false;
  if(visited[y][x]) return false;
  if (grid[y][x] == '#') return false;
  return true;
}

void DFS (int y, int x) {
  visited[y][x] = true;
  for (auto move:moves) {
    if (isValid(y+move.first, x+move.second)) {
      if (!visited[y+move.first][x+move.second]) {
        DFS(y+move.first, x+move.second);
      }
    }
  }
}

int main() {
    cin >> n >> m;
    for (int i = 0 ; i < n ; i++) {
      for (int j = 0 ; j < m ; j++) {
        cin >> grid[i][j];
        visited[i][j] = false;
      }
    }

    for (int i = 0 ; i < n ; i++) {
      for (int j = 0 ; j < m ; j++) {
        if (grid[i][j] == '.' && !visited[i][j]) {
          DFS(i, j);
          answer++;
        }
      }
    }
    cout << answer << endl;
    return 0;
}