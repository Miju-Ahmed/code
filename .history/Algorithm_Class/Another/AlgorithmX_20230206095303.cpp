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
				Matrix[i][j].left = &Matrix[i][b];

				a=i;	b=j;
				do(b=getRight(b);)while(!ProbMat[a][b]&&b!=j);
				Matrix[i][j].right = &Matrix[i][b];

				a=i;	b=j;
				do{a=getUp(a);}while(!ProbMat[a][b]&&a!=i);
				Matrix[i][j].up = &Matrix[a][j];

				a=i;	b=j;
				do(a=getDown(a);)while(!ProbMat[a][b]&&a!=i);
				Matrix[i][j].down=&Matrix[a][j];
			}
		}
	}

	header->right = &Matrix[0][0];
	header->left = &Matrix[0][nCol-1];
	Matrix[0][0].left = header;
	Matrix[0][nCol-1].right = header;
	return header;
}

void cover(struct Node *targerNode)
{
	struct *row, *rightNode;
	struct Node *colNode = targerNode->column;

	colNode->left->right
}



int main()
{
	nRow = 7;	nCol = 7;

	for(int i=0; i<=nRow; i++)
	{
		for(int j=0; j<nCol; j++)
		{
			if(i==0)	ProbMat[i][j]=true;
			else	ProbMat[i][j]=false;
		}
	}

	ProbMat[1][0] = true; ProbMat[1][3] = true;
    ProbMat[1][6] = true; ProbMat[2][0] = true;
    ProbMat[2][3] = true; ProbMat[3][3] = true;
    ProbMat[3][4] = true; ProbMat[3][6] = true;
    ProbMat[4][2] = true; ProbMat[4][4] = true;
    ProbMat[4][5] = true; ProbMat[5][1] = true;
    ProbMat[5][2] = true; ProbMat[5][5] = true;
    ProbMat[5][6] = true; ProbMat[6][1] = true;
    ProbMat[6][6] = true; ProbMat[7][0] = true;
    ProbMat[7][3] = true;

	createToridolMatrix();
	search(0);
	return 0;
}