#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>
#include<sstream>
#define max_number 10000
using namespace std;

int main()
{
    int tc,a,b,c,d;
    cin>>tc;
    while(tc--)
    {
        int cnt=0;
        cin>>a>>b>>c>>d;
        int bdrun=a+b;
        int pkrun=c+d;
        if(bdrun>pkrun)
            cnt++;
        cin>>a>>b>>c>>d;
        bdrun=a+b;
        pkrun=c+d;
        if(bdrun>pkrun)
            cnt++;
            if(cnt==2)
                printf("Banglawash\n");
            else
                printf("Miss\n");
    }
}
