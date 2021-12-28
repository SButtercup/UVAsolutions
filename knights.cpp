#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int getAns(int r, int c)
{
    int val, ans = 0;
    if(r == 1 || c == 1)
       return r * c;
    else if (r == 2 || c == 2)
    {
        if(c == 2)
           swap(r, c);
        int cont = 0;
        for(int i=1; i<=c; i++)
        {
            cont++;
            if(cont <= 2)
                ans++;
            else if(cont == 4)
                cont = 0;
        }

    return ans * 2;
    }

    ans = 0;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(i % 2 != 0)
            {
                if(j % 2 != 0)
                {
                    ans++;
                }
            }
            else
            {
                if(j % 2 == 0)
                  ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int row, col, ans;

    while(scanf("%d %d", &row, &col))
    {
        if(!row && !col)
           break;

        ans = getAns(row, col);
        printf("%d knights may be placed on a %d row %d column board.\n", ans, row, col);
    }
return 0;
}
