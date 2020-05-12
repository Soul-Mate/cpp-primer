#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    // case1 不知道是否在构造时进行了循环, 如果没有, 则case1最好
    vector<int> v1(10, 42);

    // case2 使用列表初始化不需要循环, 手工填充, 不适合初始化大量值得情况
    vector<int> v2{
        42,
        42,
        42,
        42,
        42,
        42,
        42,
        42,
    };

    // case3 需要一次循环进行填充
    vector<int> v3(10);
    for (int i = 0; i < v3.size(); i++)
    {
        v3[i] = 42;
    }
}