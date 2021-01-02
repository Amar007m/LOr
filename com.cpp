#include <iostream>
using namespace std;



int test(int x, int y)
        {
            return x == y ? (x + y)*3 : x + y;

        }


int main(void)
{
    cout << test(1, 2) << endl;
    cout << test(3, 2) << endl;
    cout << test(24356, 24356) << endl;
    return 0;
}

