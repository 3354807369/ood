#include "QuickSort.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{5, 3, 8, 1, 9, 2};
    QuickSort qs;
    std::vector<int> sorted_v = qs.sort(v);
    std::cout << "Sorted vector: ";
    for (int x : sorted_v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    return 0;
}
