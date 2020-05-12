#include <string>
#include <iostream>

using namespace std;

int main()
{

    // 读入字符串
    string s;
    cin >> s;

    // 将字符串的字符修改为X
    for (auto &c : s)
    {
        if (c != 'X')
            c = 'X';
    }

    cout << s << endl;
}