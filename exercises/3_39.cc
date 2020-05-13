#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() 
{
    char ca1[] = "hello";
    char ca2[] = "world";
    cout << (strcmp(ca1, ca2) == 0? "ca1 == ca2" : "ca1 != ca2") << endl;

    string s1 = "hello";
    string s2 = "hello";
    cout << (s1 == s2? "s1 == s2" : "s1 != s2") << endl;
}