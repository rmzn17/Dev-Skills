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
    string s;

    while(tc--)
    {

        cin>>s;
        int len=s.size();
        if(len==11)
        {
            printf("88");
            if(s[2]=='1')
            {
                cout<<s<<" "<<"Citycell"<<endl;
            }
            else if(s[2]=='5')
            {
                cout<<s<<" "<<"Teletalk"<<endl;
            }
            else if(s[2]=='6')
            {
                cout<<s<<" "<<"Airtel"<<endl;
            }
            else if(s[2]=='7')
            {
                cout<<s<<" "<<"Grameenphone"<<endl;
            }
            else if(s[2]=='8')
            {
                cout<<s<<" "<<"Robi"<<endl;
            }
            else
            {
                cout<<s<<" "<<"Banglalink"<<endl;
            }


        }
        else
        {
            if(s[4]=='1')
            {
                cout<<s<<" "<<"Citycell"<<endl;
            }
            else if(s[4]=='5')
            {
                cout<<s<<" "<<"Teletalk"<<endl;
            }
            else if(s[4]=='6')
            {
                cout<<s<<" "<<"Airtel"<<endl;
            }
            else if(s[4]=='7')
            {
                cout<<s<<" "<<"Grameenphone"<<endl;
            }
            else if(s[4]=='8')
            {
                cout<<s<<" "<<"Robi"<<endl;
            }
            else
            {
                cout<<s<<" "<<"Banglalink"<<endl;
            }

        }
    }
    return 0;
}


