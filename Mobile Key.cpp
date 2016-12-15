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
    long long int tc,n,a,b,c,cs=1;
    cin>>tc;
    while(tc--)
    {

        cin>>n;
        if(n%2==0)
        {
            a=n*3;
            b=a-1;
            c=b-1;

        }
        else
        {
            c=n*3;
            b=c-1;
            a=b-1;

        }
       printf("Case #%lld: %lld %lld %lld\n",cs++,a,b,c);
    }
    return 0;

}





