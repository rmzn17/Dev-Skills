#include<stdio.h>
#include<math.h>

#define PI acos(-1)

using namespace std;


int main()
{

    int tc,cs=1;

    double r,m;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lf%lf",&r,&m);
        double k=r*1.41421;
        int x=k;
        int y=m;

        if(x==y)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");

    }


    return 0;
}





