#include <string>
#include <vector>
#include <iostream>

using namespace std;

int txt_size()
{
    return 10;
}

int main()
{
    int grade;
    vector<unsigned> scores(11, 0);

    auto it = scores.begin();
    while (cin >> grade)
    {
        if (grade <= 100)
            ++*(it + grade / 10);
    }

    for (auto it = scores.begin(); it != scores.end(); it++)
    {
        cout << *it << " ";
    }

    int ia[txt_size()];

    cout << endl;
}