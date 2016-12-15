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

    vector<double>v;
    int tc;
    cin>>tc;

    while(tc--)
    {
        v.clear();
        int n;
        cin>>n;
        double x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int y=v[0];
        double z=v[0]-y;
        if(z!=0.0)
            printf("%.2lf",v[0]);
        else
            printf("%d",y);

        for(int i=1; i<n; i++)
        {
            int y=v[i];
            double z=v[i]-y;
            if(z!=0.0)
                printf(" %.2lf",v[i]);
            else
                printf(" %d",y);
        }
        printf("\n");


    }
    return 0;
}







