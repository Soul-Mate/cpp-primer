#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    constexpr size_t size = 10;
    int ia1[size];
    int ia2[size];

    for (size_t i = 0; i < size; i++) {
        ia1[i] = i * 2;
        ia2[i] = ia1[i];
    }

    for (size_t i = 0; i < size; i++) {
        if (ia1[i] != ia2[i]) {
            cout << "ia1 != ia2" << endl;
            break;
        }
    }

    vector<int> v1, v2;
    for (size_t i = 0; i < size; i++) {
        v1.push_back(i * 2);
        v2.push_back(v1[i]);
    }

    cout << (v1 == v2? "" : "v1 != v2"); 
}