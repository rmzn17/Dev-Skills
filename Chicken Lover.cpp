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
        if(n<120)
            printf("Naughty Boy Sifat\n");
        else
            printf("Good Boy Sifat\n");
    }

    return 0;
}








