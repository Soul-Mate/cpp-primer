#include <vector>

using namespace std;

int main()
{
    // 数组初始化vector
    constexpr size_t size = 3;
    int ia[size] = {1, 2, 3};
    vector<int> ivec(begin(ia), end(ia));
    assert(ivec.size() == size);
}