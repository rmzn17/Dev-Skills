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
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        int temp1 = 0;
        int temp2 = 1;
        int total = 0,Term = 0;

        while (total<=n)
        {
            Term++;

            total = temp1 + temp2;
            temp1 = temp2;
            temp2 = total;
            if(total>=n)
            {
                break;
            }

        }
        if(Term==1)
        {
            printf("Showmic brings %d chocolate on 1st day.\n",n);
        }
        else if(Term==2)
        {
            printf("Showmic brings %d chocolates on 2nd day.\n",n);
        }
        else if(Term==3)
        {
            printf("Showmic brings %d chocolates on 3rd day.\n",n);
        }
        else
        {
            printf("Showmic brings %d chocolates on %dth day.\n",n,Term);
        }
    }
    return 0;
}


