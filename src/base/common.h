#ifndef TOTO_WITH_TEST_COMMON_H
#define TOTO_WITH_TEST_COMMON_H
#include <vector>

using namespace std;

static vector<int> entiers;

void laFonction(int a)
{
    entiers.clear();
    for (int i = 0; i < a; ++i)
    {
        entiers.emplace_back(i * a);
    }
}
#endif //TOTO_WITH_TEST_COMMON_H
