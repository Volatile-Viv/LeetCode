class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        priority_queue<int> pq;

        for (int num : nums)
            pq.push(num);

        int a = pq.top();
        pq.pop();
        int b = pq.top();

        return (a - 1) * (b - 1);
    }
};