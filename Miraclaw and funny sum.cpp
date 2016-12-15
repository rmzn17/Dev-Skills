#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<sstream>
#define vc vector<int>
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define MAX 1000001
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;

int main()
{
    int tc,n,cs=1;
    cin>>tc;
    while(tc--)
    {

        cin>>n;
        int my=0,mir=0,x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            int res=x-i;
            if(res>0)
                mir=mir+res;
            my+=x;
        }
        cout<<my-mir<<endl;
    }
    return 0;

}




