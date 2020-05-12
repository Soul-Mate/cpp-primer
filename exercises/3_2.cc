#include <string>
#include <iostream>

using namespace std;

int main()
{
    // 一次读入一整行
    string line;
    getline(cin, line);
    cout << "line: " << line << endl;

    // 一次读入一个词
    string s;
    cin >> s;
    cout << "word: " << s << endl;
}