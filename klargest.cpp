#include <queue>
#include <vector>
using namespace std;
int kth_largest(vector<int> values, int k){
    priority_queue<int,vector<int>,greater<int>> pri_queue;
    for(size_t i = 0; i<values.size();i++){
        pri_queue.push(values[i]);
    }
    for(int i=1;i<k;i++){
        pri_queue.pop();
    }
    return pri_queue.top();
}