#include<graphics.h>
#include<conio.h>
#include<bits/stdc++.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "C:\\tc\\bgi");
    circle(300,300,50);
    closegraph();
    getch();
}