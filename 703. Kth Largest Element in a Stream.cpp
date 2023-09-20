#include <queue>
#include <vector>

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> q; 
    int k;

    KthLargest(int k, vector<int>& nums) 
    {
        this->k = k;

        for (int num : nums) 
        {
            add(num);
        }
    }

    int add(int val) {
        q.push(val);

        if (q.size() > k) 
        {
            q.pop();
        }

        return q.top();
    }
};
