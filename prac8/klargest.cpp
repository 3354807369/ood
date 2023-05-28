#include <queue>
#include <vector>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> p_q;
    for (size_t i = 0; i < values.size(); i++) {
        p_q.push(values[i]);
        if(p_q.size()>k){
            p_q.pop();
        }
    }
   
    return p_q.top();
}
