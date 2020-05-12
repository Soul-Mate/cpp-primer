#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{

    // 读入字符串
    string s;
    cin >> s;

    // FIXME: 需要开辟额外的字符空间, 考虑原地去除
    string clears;

    // 将字符串的字符修改为X
    for (auto &c : s)
    {
        if (!ispunct(c))
            clears.push_back(c);
    }

    cout << clears << endl;
}