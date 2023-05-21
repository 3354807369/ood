#include <queue>
#include <vector>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pri_queue;
    for (size_t i = 0; i < values.size(); i++) {
        pri_queue.push(values[i]);
    }
    for (int j = 1; j < k; j++) {
        pri_queue.pop();
    }
    return pri_queue.top();
}
