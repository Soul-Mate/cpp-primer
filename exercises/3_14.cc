#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    cout << "input integer count: ";
    int n;
    cin >> n;

    vector<int> vec;
    int v;
    // 读入整数到vector
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        vec.push_back(v);
    }

    cout << "vector: ";
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
}