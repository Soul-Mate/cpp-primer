#include <iostream>

using namespace std;

int main() 
{
    constexpr size_t size = 10;
    int ia[size];
    for (size_t i = 0; i < size; i++) {
        ia[i] = i;
    }

    for (size_t i = 0; i < size; i++)
        cout << ia[i] << " ";
}