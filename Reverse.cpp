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
    int tc;
    string input,temp;
    cin>>tc;
    getchar();
    while(tc--)
    {

        getline(cin,input);

        reverse(input.begin(),input.end());
        cout<<input<<endl;

    }
    return 0;
}

