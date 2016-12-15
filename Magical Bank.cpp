#include<stdio.h>
#include<math.h>

using namespace std;


int main()
{

    int tc,cs=1,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        int ans=0;
        int tem=0;
        for(int i=1; i<=n; i++)
        {
            ans++;
            tem+=i;
            if(tem>=n)
                break;

        }
        printf("%d\n",ans);
    }

    return 0;
}







