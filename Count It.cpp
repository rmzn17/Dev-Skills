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
#include <iterator>
#define vc vector<int>
#define pb push_back
#define pf printf
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define max 1000001
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;
int main()
{

    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        map<char,int>mp;

        string x;

        cin>>x;

        for(int j=0; j<x.size(); j++)
        {
            mp[x[j]]++;

        }
        printf("Case %d:\n",i);
        map<char,int>::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {

            cout<<it->first<<" "<<it->second<<endl;
        }
    }
    return 0;
}


