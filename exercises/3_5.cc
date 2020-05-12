#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "input word count: ";

    string wc;
    cin >> wc;
    int n = atoi(wc.c_str());

    string s;
    string buf;
    while (n-- > 0)
    {
        cin >> s;
        // 将输入的字符串添加空格并拼接到buf
        buf += s + " ";
    }

    // 输出buf中拼接的字符串
    cout << buf << endl;
}