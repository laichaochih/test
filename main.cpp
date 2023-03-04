#include <iostream>

using namespace std;

int step(int n, char c)
{
    for(int x = 1; x <= n; x++)
    {
        if(x == 1)
        {
            if(hb[0] == 0)
            {

                step(x)
            }
        }
    }

}

int main()
{
    cin >> n;
    int ha[n] = {0}, hb[n] = {0}, hc[n] = {0};
    for(int k = 0; k < 3; k++)
    {
        ha[k] = n;
    }
    step(n, 'a')
    return 0;
}
