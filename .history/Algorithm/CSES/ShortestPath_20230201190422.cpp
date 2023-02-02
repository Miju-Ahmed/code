#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<pair<int,int>>>path;
vector<vector<bool>>visited;
int sx,sy,ex,ey;

vector<pair<int,int>>moves = {{-1,0}}