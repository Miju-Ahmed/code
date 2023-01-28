#include<stdio.h>
#include<string.h>

void solve()
{
    char s[10000];   scanf("%s",s);
    int a[10]={0};
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            a[s[i]-'0']++;
        }
    }
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main()
{
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}
