#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string A;
        cin >> A;
        int length = A.length();
        if (A[0] == '1')
        {
            A.insert(1, "0");
        }
        else
            A.insert(0, "1");
        cout << A << endl;
    }
    return 0;
}
