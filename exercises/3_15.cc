#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    cout << "input integer count: ";
    int n;
    cin >> n;

    vector<string> vec;
    string s;
    // 读入整数到vector
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        vec.push_back(s);
    }

    cout << "vector: ";
    for (string s : vec)
    {
        cout << s << " ";
    }
    cout << endl;
}