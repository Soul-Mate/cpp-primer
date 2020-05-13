#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    constexpr size_t size = 10;
    int ia[size];

    // 获取首元素指针
    int *pi = ia;
    // 获取尾后指针
    int *pie = &ia[size];
    for (int *pi = ia; pi != pie; ++pi)
        *pi = 0;
    
}