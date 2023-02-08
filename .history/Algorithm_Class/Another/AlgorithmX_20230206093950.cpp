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
int getUp(int i){return (i-1)<0? nRow : i-1; }
int getDown(int i){return (i+1)%(nRow+1);}

Node *createToridolMatrix()
{
	for(int i=0; i<=nRow; i++)
	{
		for(int j=0; j<nCol; j++)
		{
			if(ProbMat[i][j])
			{
				int a, b;
				if(i)	Matrix[0][j].nodeCount += 1;
				Matrix[i][j].column = &Matrix[0][j];
				Matrix[i][j].rowID = i;
				Matrix[i][j].colID = j;
				a=i;	b=j;
				do{ b=getLeft(b);}while(!ProbMat[a][b]&&b!=j);
				
			}
		}
	}
}