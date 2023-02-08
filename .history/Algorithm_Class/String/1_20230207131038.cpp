
Skip to content
Pull requests
Issues
Codespaces
Marketplace
Explore
@Miju-Ahmed
rajonaust /
SPOJ
Public

Fork your own copy of rajonaust/SPOJ

Code
Issues 1
Pull requests
Actions
Projects
Wiki
Security

    Insights

SPOJ/NAJPF - Pattern Find
@rajonaust
rajonaust Create NAJPF - Pattern Find
Latest commit 813b87a Sep 16, 2015
History
1 contributor
102 lines (84 sloc) 2.22 KB

/*
    Author : RAJON BARDHAN
    AUST CSE 27th Batch
    All my programming success are dedicated to my mom , dad , little sister madhobi , teachers , friends and love TANIA SULTANA RIMY

    Problem Name : NAJPF - Pattern Find ( SPOJ )
    ALGORITHM : String Processing
*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define PI 3.14159265358979323846

typedef long long ll ;
typedef unsigned long long ull ;

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction

char A[1000000+10] ,B[1000000+10], S[2000000+10];
int Z[2000000+10] ;

void z_function()
{
    int n = strlen(S) , L = 0 , R = 0 ;

    for(int i=1;i<n;i++)
    {
        if(i>R)
        {
            L = R = i ;
            while( R<n && S[R]==S[R-i]) R++;
            Z[i] = R-i ; R--;
        }
        else
        {
            int k = i - L ;
            if(Z[k]<R-i+1) Z[i] = Z[k] ;
            else
            {
                L = i ;
                while(R<n&&S[R-L]==S[R]) R++;
                Z[i] = R - L ; R-- ;
            }
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test ;
    scanf("%d",&test);

    while( test-- )
    {
        scanf("%s%s",&A,&B);

        memo(S,NULL);
        strcpy(S,B);
        S[strlen(S)] = '#' ;
        strcat(S,A);

        z_function();

        int lenA=strlen(A) , lenB = strlen(B);
        vector <int> V ;

        for(int i=lenB+1;i<=lenA+lenB;i++)
        {
            if(Z[i]==lenB) V.pb(i-lenB);
        }

        if(!V.empty())
        {
            printf("%d\n",V.size());
            for(int i=0;i<V.size();i++)
            {
                printf("%d",V[i]);
                if(i+1==V.size()) puts("");
                else printf(" ");
            }
        }
        else puts("Not Found");

        if(test!=0) puts("");
    }

    return 0;
}
