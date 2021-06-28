#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;
int main()
{
    int T, flag;
    cin >> T;
    while (T--)
    {
        char str[1000];
        flag = 0;
        cin >> str;
        int length = strlen(str);
        if (str[0] == '<' && str[1] == '/' && str[length-1] == '>')
        {
            for (int i = 2; i < length - 1; i++)
            {
                char c = str[i];
                if ((c>=97 && c<=122)||(c>=48 && c<=57)) //&& !(c>=65 && c<=90))
                {
                    cout<<c;
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                cout << "Success" << endl;
            else
                cout << "Error" << endl;
        }
        else
            cout << "Error" << endl;
    }
    return 0;
}