#include <vector>

using namespace std;

int main()
{
    // vector 初始化一个数组
    vector<int> ivec{1, 2, 3};
    int ia[ivec.size()];
    for (size_t i = 0; i < ivec.size(); i++)
    {
        ia[i] = ivec[i];
    }
}