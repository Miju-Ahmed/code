#include<bits/stdc++.h>
using namespace std;
#define MR 100
#define MC 100

struct Node
{
	public:
	struct Node *left, *right, *up, *down, *column;
	int rowID, colID, nodeCount;
};

struct Node *header = new Node();
struct Node Matrix[MR][MC];
bool ProbMat[MR][MC];
vector<struct Node> solutions;
int nRow = 0, nCol = 0;