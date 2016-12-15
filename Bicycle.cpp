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
#define inf 9999999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;
int main()
{
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {

        int n;
        long long int mcost,price,ansprice=inf,anscost=inf;

        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            cin>>price>>mcost;
            if(price<=ansprice)
            {
                if(price==ansprice)
                {
                    if(mcost<anscost)
                    {
                        ansprice=price;
                        anscost=mcost;
                    }

                }
                else
                {
                    ansprice=price;
                    anscost=mcost;
                }


            }
        }

        printf("Case %d: %lld %lld\n",cs++,ansprice,anscost);


    }
    return 0;
}

