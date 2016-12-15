#include<stdio.h>
#include<math.h>

using namespace std;


int main()
{

    int tc,cs=1,n,x;
    scanf("%d",&tc);
    while(tc--)
    {
        int ans=0,zero=0;
        scanf("%d",&n);
        while(scanf("%d",&x))
        {
            ans+=x;
            if(x==0)
                zero++;
            if(zero==n)
                break;
        }
        printf("Case %d: %d\n",cs++,ans);
    }

    return 0;
}

















