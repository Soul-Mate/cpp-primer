#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
#include <cstdlib>

using namespace std;

int main()
{
    char ca1[] = "hello";
    char ca2[] = "world";
    // strcat
    char *ca3 = strcat(ca1, ca2);
    assert(ca3 != nullptr);

    // strcpy
    char *pca4 = (char *)malloc(strlen(ca3) + 1);
    strcpy(pca4, ca3);
    assert((strcmp(ca3, pca4) == 0));
    free(pca4);
}