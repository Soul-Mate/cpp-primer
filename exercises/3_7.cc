#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "select loop type [while or for-range]: ";

    string loop;
    cin >> loop;

    // 读入字符串
    string s;
    cin >> s;

    if (loop == "for-range")
    {
        // 将字符串的字符修改为X for-range
        for (auto &c : s)
        {
            if (c != 'X')
                c = 'X';
        }
    }
    else if (loop == "while")
    {
        // while
        int i = 0;
        while (i < s.size())
        {
            if (s[i] != 'X')
                s[i] = 'X';
            i++;
        }
    }

    cout << s << endl;

    // for-range更优雅
}