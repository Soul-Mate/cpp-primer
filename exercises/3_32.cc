#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    constexpr size_t size = 10;
    int ia[size];
    for (size_t i = 0; i < size; i++) {
        ia[i] = i;
    }

    // array不允许拷贝赋值, 需要循环
    int ia2[size];
    for (size_t i = 0; i < size; i++) {
        ia2[i] = ia[i];
    }

    cout << "ia2: ";
    for (size_t i = 0; i < size; i++) {
        cout << ia2[i] << " ";
    }
    cout << endl;

    vector<int> v1(10);
    vector<int> v2(10);
    for (size_t i = 0; i < v1.size(); i++) {
        v1[i] = i;
    }

    // vector 允许拷贝赋值
    v2 = v1;
    cout << "v2: ";
    for (auto v : v2) {
        cout << v << " ";
    }
    cout << endl;
}