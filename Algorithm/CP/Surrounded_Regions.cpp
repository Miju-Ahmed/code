#include<bits/stdc++.h>
using namespace std;
#define MX 1000010

bool seen;

void mark(vector<vector<char>>&board, int i, int j, int r, int c)
{
    if(i<0||i>r-1||j<0||j>c-1)
        return;
    if(board[i][j] == 'X')
        return;
    
    board[i][j] = 'X';
    mark(board,i-1,j,r,c);
    mark(board,i+1,j,r,c);
    mark(board, i,j-1,r,c);
    mark(board,i,j+1,r,c);

}

void dfs(vector<vector<char>>&board, int i, int j, int r, int c, vector<vector<bool>>& visited)
{
    if(i<0||i>r-1||j<0||j>c-1)]
        return;
    if(board[i][j]=='X'||visited[i][j])
        return;
    if(i<=0||i>=r-1||j<=0||j>=c-1)
        seen = true;

    visited[i][j] = true;
    dfs(board, i-1, j, r,c,visited);
    dfs(board, i+1, j, r, c, visited);
    dfs(board, i, j-1, r, c, visited);
    dfs(board, i, j+1, r, c, visited);
}
