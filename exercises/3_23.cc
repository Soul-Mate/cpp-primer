#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    cout << "input value count: ";
    int n;
    cin >> n;

    vector<int> values;
    int v;
    // 读入数据到vector
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        values.push_back(v);
    }

    // 将value * 2
    for (auto it = values.begin(); it != values.end(); it++)
    {
        *it *= 2;
    }

    for (auto it = values.begin(); it != values.end(); it++)
        cout << *it << endl;
}