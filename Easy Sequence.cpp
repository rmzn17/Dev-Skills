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


    int tc;

    scanf("%d",&tc);

    int arr[100];
    arr[0]=1;
    arr[1]=3;

    for(int i=2; i<50; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];

    }
    int a,b;



    while(tc--)
    {
        cin>>a;
        printf("%d\n",arr[a-1]);
    }
    return 0;
}


