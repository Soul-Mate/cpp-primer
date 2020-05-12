#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    cout << "input word count: ";
    int n;
    cin >> n;

    vector<string> words;
    string s;
    // 读入字符到vector
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        words.push_back(s);
    }

    // 转换大写输出
    for (auto &word : words)
    {
        for (auto &c : word)
        {
            if (islower(c))
                c = toupper(c);
        }
        cout << word << endl;
    }
}