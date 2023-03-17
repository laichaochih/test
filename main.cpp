#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 4;
    char move;
    char xy[10][10];
    for(int i = 0; i < 10; i++)
    {
        for(int p = 0; p < 10; p++)
        {
            xy[p][i] = '0';
        }

    }
    xy[a][b] = '*';
    for(int i = 0; i < 10; i++)
    {
        for(int p = 0; p < 10; p++)
        {
            cout << xy[i][p];
        }
        cout << endl;
    }

    while(1)
    {
        cin >> move;
        if(move == 'w')
        {
            xy[a][b] = '0';
            a--;
            xy[a][b] = '*';
            for(int i = 0; i < 10; i++)
            {
                for(int p = 0; p < 10; p++)
                {
                    cout << xy[i][p];
                }
                cout << endl;
            }
        }
        if(move == 'a')
        {
            xy[a][b] = '0';
            b--;
            xy[a][b] = '*';
            for(int i = 0; i < 10; i++)
            {
                for(int p = 0; p < 10; p++)
                {
                    cout << xy[i][p];
                }
                cout << endl;
            }
        }
        if(move == 's')
        {
            xy[a][b] = '0';
            a++;
            xy[a][b] = '*';
            for(int i = 0; i < 10; i++)
            {
                for(int p = 0; p < 10; p++)
                {
                    cout << xy[i][p];
                }
                cout << endl;
            }
        }
        if(move == 'd')
        {
            xy[a][b] = '0';
            b++;
            xy[a][b] = '*';
            for(int i = 0; i < 10; i++)
            {
                for(int p = 0; p < 10; p++)
                {
                    cout << xy[i][p];
                }
                cout << endl;
            }
        }

    }

    return 0;
}