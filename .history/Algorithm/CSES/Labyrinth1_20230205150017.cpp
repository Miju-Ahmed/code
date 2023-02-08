#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>graph;
vector<vector<bool>>visited;
vector<pair<int,int>> moves = {{1,0},{-1,0},{0,1},{0,-1}};
int sx,sy,fx,fy,n,m;