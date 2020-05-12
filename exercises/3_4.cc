#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    // 不相等, 输出较大的字符串
    if (s1 != s2)
    {
        cout << (s1 > s2 ? s1 : s2) << endl;
    }

    // 大小不相等, 输出长度较大的字符串
    if (s1.size() != s2.size())
    {
        cout << (s1.size() > s2.size() ? s1 : s2) << endl;
    }
}