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
int getRight(int i){return (i+1)%nCol;}
int getLeft(int i){return (i-1)<0? nCol-1 : i-1; }
int getUp(int i){return (i-1)<0? nRow : i-1; }dol
int getDown(int i){return (i+1)%(nRow+1);}

Node *createTori