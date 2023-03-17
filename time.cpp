#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main()
{
    int min = 0, sec = 0;
    while(1)
    {
        cout << min << ':' << sec << endl;
        sec++;
        if(sec == 60)
        {
            sec = 0;
            min++;
        }
        if(min == 60)
        {
            min = 0;
        }
        sleep(1);
    }
    return 0;
}