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

    // 求和[i, n) [(i, n-1), (i + 1, n-2) ... ()]
    for (int i = 0, n = values.size(); i < n / 2; i++)
    {
        cout << values[i] + values[n - 1 - i] << endl;
    }
}